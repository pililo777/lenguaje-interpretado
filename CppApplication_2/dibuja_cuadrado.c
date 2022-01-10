#include <stdio.h>
#include <string.h>

//contar el numero de veces que aparece ab en una cadena

int mostrar_cuadrado(int ncol, int nfil) {
    
    int pos;
    int fil;
    
    for (fil=1; fil<=nfil; fil++) {
            for (pos = 1; pos <= ncol; pos++) {
                printf ("*");
            }
            printf("\n");
    }
}


void main() {
    
    int columnas;
    int filas;
    
    printf("introduce el numero de columnas: ");
    scanf ("%d", &columnas);
    
    printf("introduce el numero de filas: ");
    scanf ("%d", &filas);
    
    mostrar_cuadrado(columnas, filas);
        
}
 