// github

#include <stdio.h>    
extern  char constantes[127][127];
//extern  char variables[127][127];
typedef struct  {
          char        tipo;
          char        nombre[48];
         // char        valor[127]; 
          char *      string;
          double      numero;
          int         procedimiento;
          short       backup;
          int       dim1;
          int       dim2;
} struct_variable;

extern struct_variable   array_variables[256];
extern struct_variable   pila[256];

extern int idx_rec;
extern int idx_pila;


extern int idx_prc;
extern int nodos;
extern int idx_vec;
extern int idx_vec2;
extern double* arrayVectores [32];
extern char* arrayVectoresAlfa [32];
extern int depurar;
//#endif	// VARS_H

typedef long int xapuntador;
typedef short int posicion;

extern FILE * pila_indices[10];
extern int idx_indices;