//version para github
#include "stdio.h"
#include "nodo.h"
#include "vars.h"
extern int linenumber;
extern int err_number;
extern char letrita_mala;
extern void liberar_mem();
extern void liberar_lista();
extern listaNodo ultimaLista;
/*
extern int lineaAnterior, lineaEjecucion;
*/

yyerror(char *msg) {
   printf("error en linea %d: %s\n", linenumber, msg);
  
   err_number = 1;
   
   liberar_lista(ultimaLista);
   
   
  // exit(1);
}
   
   
yyerror2(msg, c)
   char * msg;
char * c;
{
   printf("error en linea %d: %s\n", linenumber, msg);
   printf("texto: %c\n", c);
   err_number = 1;
  // exit(1);
}
//extern int pausar();

nextline()
{
   linenumber++;
   if (depurar)
   printf("\nNUEVA LINEA: %d\n", linenumber);
//   lineaAnterior = lineaEjecucion;
  
}
