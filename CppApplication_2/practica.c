#include <stdio.h>

double  calcula_parte_fraccionaria(int numero1, int numero2) {
    double resultado1;
    double    modulo;
    
    modulo = numero1 % numero2;
    resultado1 = modulo / numero2;
    return resultado1;
}

void main() {
    int     anio;
    double   parte_fraccionaria;
    anio = 2016;
    
    parte_fraccionaria = calcula_parte_fraccionaria( anio, 4 );
     
    if (parte_fraccionaria == 0) 
    {
        printf("la parte fraccionaria es cero, ahora probamos con 100\n");
        parte_fraccionaria = calcula_parte_fraccionaria( anio, 100 );
        
        if (parte_fraccionaria == 0) {
             printf("el año no es bisiesto\n");
        }
        else
             printf("entre 100, la parte fraccionaria NO es cero\n");
             parte_fraccionaria = calcula_parte_fraccionaria( anio, 400 );
             
             if (parte_fraccionaria == 0) {
                        printf("el año es bisiesto\n");
             }
             else
                        printf("el año NO es bisiesto\n");
    }
    
    else 
    {
        printf("el año no es bisiesto\n");
    }
  
}


  
         

         