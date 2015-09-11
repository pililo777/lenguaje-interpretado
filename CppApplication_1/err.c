#include "stdio.h"
extern int linenumber;
extern int err_number;
extern char letrita_mala;

yyerror(msg)
   char * msg;
{
   printf("error en linea %d: %s\n", linenumber, msg);
  
   err_number = 1;
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

nextline()
{
   linenumber++;
}
