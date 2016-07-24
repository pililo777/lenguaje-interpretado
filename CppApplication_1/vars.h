char constantes[127][127];
char variables[127][127];
typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double      numero;
          int         procedimiento;
} struct_variable;

struct_variable   array_variables[256];


extern int idx_prc;
extern int nodos;
extern int idx_vec;
extern int* arrayVectores [32];