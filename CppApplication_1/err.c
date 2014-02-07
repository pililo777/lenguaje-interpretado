#include "stdio.h"
extern int linenumber;

yyerror(msg)
   char * msg;
{
   printf("error en linea %d: %s\n", linenumber, msg);
   exit(1);
}

nextline()
{
   linenumber++;
}
