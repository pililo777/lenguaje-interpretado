#include <stdio.h>
#include <string.h>

//contar el numero de veces que aparece ab en una cadena

int cuenta_veces(char * variable) {
    int veces;
    veces = 0;
    
    char letra1;
    char letra2;
    
    int pos1;
    pos1 = 0;
    
    int largo = strlen(variable) - 1;
    
    for (pos1 = 0; pos1<largo; pos1++) {
        letra1 = variable [pos1];
        letra2 = variable [pos1+1];
        
        if (  (letra1=='a'  )  && (letra2 == 'b'  ) ) {
            veces++;
        }
    }
    return veces;
}


void main() {
    
    int resultado;
    char * palabra = "dkfjdkjfdajkdjfdfardeconocer";
   
    
    resultado = cuenta_veces(palabra);
    
    printf("ab aparece %d veces en la palabra %s  \n",  resultado,  palabra );
    
}
 