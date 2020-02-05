
#include <stdio.h>            
#include <string.h>
#include <math.h>
#include "stdlib.h"
#include <termios.h>



int comprobar_salidas();
void activacion_capa_enmedio(int );
void activacion_capa_salida(int );



double factor_apr=0.3;     
double alfa=0.3;

int iteraciones;   
double suma;
double activacion_u;
char  kk;

//char * var_apr;
char * VAR_APR;
int hay_error;
//void  itera();

int segmn = 0;
int contador = 0;


char DIGITO;
double digito;
double dig_salida;
double error;



int it = 200000;

//e =  2.718281828
//epsilon = 0.0000000001


//char  PALABRA;
const char * SEGM[10] = {"1110111", "1000001", "1101110", "1101011", "1011001", "0111011\x0",
    "0111111", "1100001", "1111111", "1111011"};
const char * APRENDER[10] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111\x0", "1000\x0", "1001\x0"};

char * PALABRA;
//char * VAR_APR;

double entradas[7];
double capa [5];
double delta [5][7];
double delta_s [4][5];
double peso [5][7];
double err [5];
double umbral [5];
double dumbral [5];
//double  capa2       [5]; 
//double peso2      [5][5];
double err2 [5];
double err_s [4];

double umbral_s [4];
double dumbral_s [4];
double salidas [4];
double peso_s [4][5];
int contador1 = 0;
int serr;
double val;

void calcular_error() {
 

    for (int i = 0; i <= 3; i++) {
        err_s[i] = 0;
    }

 

    for (int i = 0; i <= 4; i++) {
        err[i] = 0;
    }

    for (int i = 0; i <= 3; i++) //desde 0 hasta 3   por cada neurona de salida
    {
        digito = 0;
        DIGITO = VAR_APR[i];
        if (DIGITO == '1') digito = 1;
        else digito = 0;
        dig_salida = salidas [i];
     //   if (dig_salida != digito) {
        
                error = (digito - dig_salida) * dig_salida * (1.0 - dig_salida); //error en la salida (i)
                
                printf("salida: %d --  %lf\n", i,  dig_salida);
                 
                err_s[i] = error;
                dumbral_s[i] = factor_apr * err_s[i] + alfa * dumbral_s[i];
                umbral_s[i] += dumbral_s[i];
                //umbral_s[i] = umbral_s[i] + (factor_apr * error    );
       //  }
    }
    
    for (int i = 0; i <= 3; i++) //desde 0 hasta 3   por cada neurona de salida
    {
        for (int  j = 0; j<=4; j++)
        {
                delta_s[i][j]  = factor_apr * capa[j] * err_s[i] + alfa * delta_s[i][j];
        }
        
    }

    // recalculo de los pesos  entre la capa anterior a la salida			   
    for (int j = 0; j <= 4; j++) // una por cada peso entre la capa2 del medio y la salida
    {
        
        err[j] = 0;
        for (int i = 0; i <= 3; i++) //desde 0 hasta 3   por cada neurona de salida
        {
            //indice = (i*5) + j ;  //comprobar posicion factores
            //propagacion del error hacia atras
            err[j] = err[j] + (err_s[i] * peso_s [i][j]);
            
            peso_s [i][j] += delta_s[i][j] ;
            
        }
    }
//------------------------------------------------------------------------------
    for (int j = 0; j <= 4; j++) {
        err[j] = err[j] * capa [j] * (1.0 - capa[j]);
        dumbral[j] = factor_apr * err[j] + alfa * dumbral[j];
        umbral[j] += dumbral[j];
        // umbral [j] = umbral[j] + (factor_apr * err[j]   );
    }
    
    
    for (int i = 0; i <= 4; i++) //desde 0 hasta 3   por cada neurona de salida
    {
        for (int  j = 0; j<=6; j++)
        {
                delta[i][j]  = factor_apr * entradas[j] * err[j] + alfa * delta[i][j];
        }
        
    }
    
    
    
    //recalculo de los pesos	   
    for (int k = 0; k < 6; k++) {
         
        for (int j = 0; j <= 4; j++) {
           
            
            peso [j][k] += delta [j][k] ;
        }
    }

}

 

double sigmoide(double suma) {
    return ( 1.0 / (1.0 + exp(-suma)));
}

/*
void function ver_entradas)
 desde i=0 hasta 6
 {
    imprimir 'entrada ', i, ': ',  entradas[i]
 }
fin
 */

void cargar_entradas(int indice) {
    printf("APRENDER: %s %s\n", SEGM[indice], APRENDER[indice]);
    for (int i = 0; i <= 6; i++) {
        DIGITO = SEGM[indice][i];
        digito = 0;
        if (DIGITO == '1') digito = 1.0;
        else digito = 0.0;
        entradas[i] = digito;
    }    
}

int errores;

void itera() {
    contador = 0;
    while (contador < iteraciones) {
        errores = 0;
        //imprimir contador
        for (segmn = 0; segmn <= 9; segmn++) {
            //imprimir 'seg: ', segmn
            // cargar la capa de entrada con datos
            cargar_entradas(segmn); //ponemos datos en la carpeta de entrada
            //imprimir 'entrada:'
            //llamar ver_entradas
            //imprimir 'aprender: '
            VAR_APR = APRENDER[segmn];
            //imprimir  VAR_APR

            //imprimir 'en medio:'
            for (int i = 0; i <= 4; i++) {
                activacion_capa_enmedio(i);
            }

            /*	desde var=0 hasta 4
                    {
                            z = activacion_capa_enmedio2(var)
                    }  */

            //llamar ver_capa_enmedio
            for (int i = 0; i <= 3; i++) {
                activacion_capa_salida(i);
            }

            //llamar ver_capa_salida
            hay_error = 0;

            printf(" PROCESADO: Segm %d    Ctdor %d  \n", segmn, contador );
            hay_error = comprobar_salidas();
            if (hay_error == 1) {
                errores = errores + 1;
                calcular_error();
                
                 break;
            }
        }

       // if (errores == 0) break;

        contador = contador + 1;
        contador1 = contador1 + 1;

        if (contador1 == 100)
            contador1 = 0;
    }
    //pruebas();
}

void main(int argc, char ** argv) 
{
    iteraciones = it;
    for (int i = 0; i <= 4; i++) {
        capa[i] = 0.0;
        
        umbral[i] = 0.5;
        dumbral[i] = 0.0;
         
        
    }

    for (int j = 0; j <= 6; j++) {
        for (int i = 0; i <= 4; i++) {
            peso[i][j] = 0.5;
            delta[i][j] = 0.0;
        }
    }

    for (int i = 0; i <= 3; i++) {
        umbral_s[i] = 0.5;
        dumbral_s[i] = 0.0;
        err_s [i] = 0.0;
        
    }

    for (int j = 0; j <= 4; j++) {
        
        for (int i = 0; i <= 3; i++) {
            printf ("i %d, j %d  ", i, j );
            peso_s[i][j] = 0.5;
            delta_s[i][j] = 0.0;
            printf ("peso_s  %lf \n", peso_s[i][j] );
        }
    }
    do {
        itera();
        kk = getchar();
    }
    while (kk != 'f');
    
    
}





// procedimientos y funciones

void activacion_capa_enmedio(int indice) {
    suma = 0;
    for (int i = 0; i <= 6; i++) //neuronas de entrada
    {
        //indice2 = (indice*7)+i;
        //imprimir '  fila,  columna, indice  = ', indice, '  ', i, '  ', indice2, peso[indice2]
        suma = suma + entradas[i] * peso[indice][i];
    }
    suma = suma + umbral[indice];
    //imprimir 'suma = ', suma
    activacion_u = sigmoide(suma);

    capa[indice] = activacion_u;

}

void activacion_capa_salida(int indice) {
    suma = 0;
    for (int i = 0; i <= 4; i++) //neuronas de entrada
    {
        //indice2 = (indice*7)+i;
        //imprimir '  fila,  columna, indice  = ', indice, '  ', i, '  ', indice2, peso[indice2]
        suma = suma + capa[i] * peso_s[indice][i];
    }
    suma = suma + umbral_s[indice];
    //imprimir 'suma = ', suma
    activacion_u = sigmoide(suma);
    salidas [indice] = activacion_u;
}

char SALIDA[5];

int comprobar_salidas() {
    hay_error = 0;

    //SALIDA[0] = '\x0';
    for (int i = 0; i <= 3; i++) //desde 0 hasta 3   por cada neurona de salida
    {
        digito = 0;
        DIGITO = VAR_APR[ i ];
        if (DIGITO=='1') digito = 1;
        //printf("dig %c\n", DIGITO);
        dig_salida = salidas [i];

        if (dig_salida > 0.5) {
            dig_salida = 1;
            SALIDA[i] = '1';
        } else {
            dig_salida = 0;
            SALIDA[i] = '0';
        }

        if (digito != dig_salida) {
          
            hay_error = 1;
        }

    }
    SALIDA[4] = '\x0';
    printf("ESPERADO: %s\n  ", VAR_APR);
    printf("SALIDA: %s\n", SALIDA);
    //llamar binario
    printf("-------------------------\n");
    fflush(stdout);
    return hay_error;
}

