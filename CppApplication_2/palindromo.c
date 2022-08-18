#include <stdio.h>
#include <string.h>

//si es palindromo, devuelve 1, sino devuelve 0

int calcula_palindromo(char * variable) {
    int res;
   
    int pos1;
    int pos2;
    char letra1;
    char letra2;
    
    res = 1;
    pos1 = 0;
    pos2 = strlen(variable)-1;
    
    while (pos1 < pos2) {
        letra1 = variable[pos1];
        letra2 = variable[pos2];

        if (letra1 != letra2) {
            res = 0;
            return res;
        }

        else {

            pos1++;
            pos2--;
            if (pos1 == pos2)
                return res;
        }
    }
}


void main() {
    
    int resultado;
    char * palabra = "rdeconocer";
   
    
    resultado = calcula_palindromo(palabra);
    if (resultado == 1)
        printf("La palabra es un palindromo \n" );
    else
        printf("La palabra NO es un palindromo \n" );
    
}

/*
5
1 2 3 4 5
1*2*3*4*5
        
        1. funcion iterativa
        2. funcion recursiva   factorial n =  n*factorial(n-1)
 * 
 */