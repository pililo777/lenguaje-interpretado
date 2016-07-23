#include "nodo.h"
elnodo * procedimientos[127]; //cambiar esta forma
 int idx_prc = 0;

elnodo * pila_programas[32];
 int idx_prg = 0;
 int idx_vec = 0;

 int nro_decimales = 0;
 long memoria = 0;
 
 int linenumber = 1;
 int err_number = 0;
 int gtk_iniciado = 0;
 
 int nodos = 0;
 