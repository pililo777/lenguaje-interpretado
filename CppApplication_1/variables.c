// variables publicas
// comunes a todo el programa y todos los fuentes.c

#include "nodo.h"
#include "vars.h"
ast * procedimientos[127]; //cambiar esta forma
 int idx_prc = 0;

ast * pila_programas[32];
ast * pila_records[32]; // pila de registros
 int idx_prg = 0;
 int idx_vec = 0;

 int nro_decimales = 0;
 long memoria = 0;
 
 int linenumber = 1;
 int err_number = 0;
 int gtk_iniciado = 0;
 
 int nodos = 0;
 int ejecuta_desde_editor = 0;
 
 int* arrayVectores [32];
 
 char constantes[127][127];
 char variables[127][127];
 
 struct_variable   array_variables[256];
 
 int depurar = 0;
 
 int idx_rec = 0;  // indice de records (registros)
 
 