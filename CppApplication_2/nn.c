/*******************************************************************************
*    nn.c   1.0                                       � JOHN BULLINARIA  2004  *
*******************************************************************************/

/*      To compile use "cc nn.c -O -lm -o nn" and then run using "./nn"       */
/*      For explanations see:  http://www.cs.bham.ac.uk/~jxb/NN/nn.html       */

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>
#include <fcntl.h>

#define NUMPAT 10
#define NUMIN  7
#define NUMHID 3
#define NUMOUT 4

#define rando() ((double)rand()/(RAND_MAX+1))

long int it=2000000;

main() {
    int    i, j, k, p, np, op, ranpat[NUMPAT+1], epoch;
    int    NumPattern = NUMPAT, NumInput = NUMIN, NumHidden = NUMHID, NumOutput = NUMOUT;
    double Input[NUMPAT+1][NUMIN+1] = { 0,0,0,0,0,0,0,0,
                                        0,1,1,1,0,1,1,1,  
                                        0,1,0,0,0,0,0,1,
                                        0,1,1,0,1,1,1,0,
                                        0,1,1,0,1,0,1,1,
                                        0,1,0,1,1,0,0,1,
                                        0,0,1,1,1,0,1,1,
                                        0,0,1,1,1,1,1,1,
                                        0,1,1,0,0,0,0,1,
                                        0,1,1,1,1,1,1,1,
                                        0,1,1,1,1,0,1,1    };
    double Target[NUMPAT+1][NUMOUT+1] = { 0,0,0,0,0,
                                          0,0,0,0,0,
                                          0,0,0,0,1,
                                          0,0,0,1,0,
                                          0,0,0,1,1,
                                          0,0,1,0,0,
                                          0,0,1,0,1,
                                          0,0,1,1,0,
                                          0,0,1,1,1,
                                          0,1,0,0,0,
                                          0,1,0,0,1  };
    double SumH[NUMPAT+1][NUMHID+1], WeightIH[NUMIN+1][NUMHID+1], Hidden[NUMPAT+1][NUMHID+1];
    double SumO[NUMPAT+1][NUMOUT+1], WeightHO[NUMHID+1][NUMOUT+1], Output[NUMPAT+1][NUMOUT+1];
    double DeltaO[NUMOUT+1], SumDOW[NUMHID+1], DeltaH[NUMHID+1];
    double DeltaWeightIH[NUMIN+1][NUMHID+1], DeltaWeightHO[NUMHID+1][NUMOUT+1];
    //double Error, eta = 0.5, alpha = 0.9, smallwt = 0.5;
    double Error, eta = 0.5, alpha = 0.5, smallwt = 0.5;
    
    
    const char * SEGM[10] = {"1110111", "1000001", "1101110", "1101011", "1011001", "0111011\x0",
    "0111111", "1100001", "1111111", "1111011"};

    const char * APRENDER[10] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111\x0", "1000\x0", "1001\x0"};
  
    for( j = 1 ; j <= NumHidden ; j++ ) {    /* initialize WeightIH and DeltaWeightIH */
        for( i = 0 ; i <= NumInput ; i++ ) { 
            DeltaWeightIH[i][j] = 0.0 ;
            WeightIH[i][j] = 2.0 * ( rando() - 0.5 ) * smallwt ;
        }
    }
    for( k = 1 ; k <= NumOutput ; k ++ ) {    /* initialize WeightHO and DeltaWeightHO */
        for( j = 0 ; j <= NumHidden ; j++ ) {
            DeltaWeightHO[j][k] = 0.0 ;              
            WeightHO[j][k] = 2.0 * ( rando() - 0.5 ) * smallwt ;
        }
    }
     
    for( epoch = 0 ; epoch < it ; epoch++) {    /* iterate weight updates */
        for( p = 1 ; p <= NumPattern ; p++ ) {    /* randomize order of individuals */
            ranpat[p] = p ;
        }
        for( p = 1 ; p <= NumPattern ; p++) {
            int xx;
            xx = rando() * ( NumPattern + 1 - p );
            if (xx<0) xx = xx * (-1);
            np = p + xx ;
            op = ranpat[p] ;
            ranpat[p] = ranpat[np] ;
            ranpat[np] = op ;
        }
        Error = 0.0 ;
        for( np = 1 ; np <= NumPattern ; np++ ) {    /* repeat for all the training patterns */
            p = (int) ranpat[np];
            for( j = 1 ; j <= NumHidden ; j++ ) {    /* compute hidden unit activations */
                SumH[p][j] = WeightIH[0][j] ;
                for( i = 1 ; i <= NumInput ; i++ ) {
                    SumH[p][j] += Input[p][i] * WeightIH[i][j] ;
                }
                Hidden[p][j] = 1.0/(1.0 + exp(-SumH[p][j])) ;
            }
            for( k = 1 ; k <= NumOutput ; k++ ) {    /* compute output unit activations and errors */
                SumO[p][k] = WeightHO[0][k] ;
                for( j = 1 ; j <= NumHidden ; j++ ) {
                    SumO[p][k] += Hidden[p][j] * WeightHO[j][k] ;
                }
                Output[p][k] = 1.0/(1.0 + exp(-SumO[p][k])) ;   /* Sigmoidal Outputs */
/*              Output[p][k] = SumO[p][k];      Linear Outputs */
                Error += 0.5 * (Target[p][k] - Output[p][k]) * (Target[p][k] - Output[p][k]) ;   /* SSE */
/*              Error -= ( Target[p][k] * log( Output[p][k] ) + ( 1.0 - Target[p][k] ) * log( 1.0 - Output[p][k] ) ) ;    Cross-Entropy Error */
                DeltaO[k] = (Target[p][k] - Output[p][k]) * Output[p][k] * (1.0 - Output[p][k]) ;   /* Sigmoidal Outputs, SSE */
/*              DeltaO[k] = Target[p][k] - Output[p][k];     Sigmoidal Outputs, Cross-Entropy Error */
/*              DeltaO[k] = Target[p][k] - Output[p][k];     Linear Outputs, SSE */
            }
            for( j = 1 ; j <= NumHidden ; j++ ) {    /* 'back-propagate' errors to hidden layer */
                SumDOW[j] = 0.0 ;
                for( k = 1 ; k <= NumOutput ; k++ ) {
                    SumDOW[j] += WeightHO[j][k] * DeltaO[k] ;
                }
                DeltaH[j] = SumDOW[j] * Hidden[p][j] * (1.0 - Hidden[p][j]) ;
            }
            for( j = 1 ; j <= NumHidden ; j++ ) {     /* update weights WeightIH */
                DeltaWeightIH[0][j] = eta * DeltaH[j] + alpha * DeltaWeightIH[0][j] ;
                WeightIH[0][j] += DeltaWeightIH[0][j] ;
                for( i = 1 ; i <= NumInput ; i++ ) { 
                    DeltaWeightIH[i][j] = eta * Input[p][i] * DeltaH[j] + alpha * DeltaWeightIH[i][j];
                    WeightIH[i][j] += DeltaWeightIH[i][j] ;
                }
            }
            for( k = 1 ; k <= NumOutput ; k ++ ) {    /* update weights WeightHO */
                DeltaWeightHO[0][k] = eta * DeltaO[k] + alpha * DeltaWeightHO[0][k] ;
                WeightHO[0][k] += DeltaWeightHO[0][k] ;
                for( j = 1 ; j <= NumHidden ; j++ ) {
                    DeltaWeightHO[j][k] = eta * Hidden[p][j] * DeltaO[k] + alpha * DeltaWeightHO[j][k] ;
                    WeightHO[j][k] += DeltaWeightHO[j][k] ;
                }
            }
        }
        if( epoch%100 == 0 ) printf("\nEpoch %-5d :   Error = %f", epoch, Error);
        fflush(stdout);
        if( Error < 0.0004 ) break ;  /* stop learning when 'near enough' */
    }
    
    fprintf(stdout, "\n\nNETWORK DATA - EPOCH %d\n\nPat\t", epoch) ;   /* print network outputs */
    for( i = 1 ; i <= NumInput ; i++ ) {
        fprintf(stdout, "I%-4d\t", i) ;
    }
    //for( k = 1 ; k <= NumOutput ; k++ ) {
        //fprintf(stdout, "Output%-4d\t", k) ;
        fprintf(stdout, "Output") ;
    //}
printf("\n------------------------------------------------------------------------------");        
    for( p = 1 ; p <= NumPattern ; p++ ) {        
    fprintf(stdout, "\n%d\t", p-1) ;
        for( i = 1 ; i <= NumInput ; i++ ) {
            fprintf(stdout, "%.0f\t", Input[p][i]) ;
        }
    printf("----  ");
        for( k = 1 ; k <= NumOutput ; k++ ) {
            int val;
            if (Output[p][k] > 0.5) val = 1; else val = 0;
           // fprintf(stdout, "%f\t%f\t", Target[p][k], Output[p][k]) ;
             fprintf(stdout, "%d", val) ;
        }
    printf("\n------------------------------------------------------------------------------");
    }
    fprintf(stdout, "\n\nGoodbye!\n\n") ;
    return 1 ;
}

/*******************************************************************************/
