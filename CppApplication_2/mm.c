#include<stdio.h>
#define MAX 20

int main(int argc, char** args)

{
    int matriz_a[2][2];   //3 4
    int matriz_b[2][2];   //4 7
    int matriz_c[2][2];   //3 7
		
    matriz_a[0][0] = 2;   //e
    matriz_a[0][1] = 3;   //f
    matriz_a[1][0] = 4;   //g  
    matriz_a[1][1] = 5;   //h  

    matriz_b[0][0] = 6;   //a
    matriz_b[0][1] = 7;   //b  
    matriz_b[1][0] = 8;   //c
    matriz_b[1][1] = 9;   //d  
    
    for (int fila = 0; fila <= 1; fila++) 
    {
        for (int col= 0; col <= 1; col++)
        {
            int sumatoria = 0;
            for (int filacolumna = 0; filacolumna <=1; filacolumna++) {
               sumatoria = sumatoria +  matriz_a[fila][filacolumna] * matriz_b[filacolumna][col];
            }
            matriz_c[fila][col] = sumatoria;
        }
    }
    
    for (int fila=0; fila<=1; fila++) 
    {
        for (int col= 0; col <= 1; col++)
        {
            printf("fila %d  col %d   valor %d\n", fila, col, matriz_c[fila][col]);
        }
    }
}
 




