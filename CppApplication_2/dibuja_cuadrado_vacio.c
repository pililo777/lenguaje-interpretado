#include <stdio.h>

 

int mostrar_cuadrado(int ncol, int nfil) {
    
    int pos;
    int fil;
    
    for (fil=1; fil<=nfil; fil++) {
            for (pos = 1; pos <= ncol; pos++) {
                if ((fil>1) && (fil<nfil)) {
                        if ( (pos>1) && (pos<ncol) )
                                printf (" ");
                            else
                                printf ("*");
                }
                else
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
 