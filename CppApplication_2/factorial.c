#include <stdio.h>

int calcula_factorial_iter(int numero) {
    int posicion;
    int f;
    f = 1;
    for (posicion = 1; posicion <=numero; posicion++ ){
        f = f * posicion;
    }
    return f;
}

int calcula_factorial(int numero) {
    if (numero == 1) return 1;
    else {
        printf("en este momento numero vale: %d\n", numero);
        return numero * calcula_factorial (numero - 1);
    }
}

void main() {
    int valor;
    int factorial;
    
    valor = 6;
    factorial = 0;
    
    factorial = calcula_factorial(valor);
    
    printf("El factorial de %d  es  %d \n", valor,  factorial );
}

/*
5
1 2 3 4 5
1*2*3*4*5
        
        1. funcion iterativa
        2. funcion recursiva   factorial n =  n*factorial(n-1)
 * 
 */