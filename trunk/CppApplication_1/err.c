#include "stdio.h"
int linenumber = 1;

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
