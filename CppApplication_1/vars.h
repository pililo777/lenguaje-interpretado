extern  char constantes[127][127];
extern  char variables[127][127];
typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double      numero;
          int         procedimiento;
} struct_variable;

extern struct_variable   array_variables[256];

extern int idx_rec;


extern int idx_prc;
extern int nodos;
extern int idx_vec;
extern int* arrayVectores [32];
extern int depurar;
//#endif	// VARS_H

typedef long int xapuntador;
typedef short int posicion;

