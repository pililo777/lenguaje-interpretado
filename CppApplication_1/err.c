#include "stdio.h"
extern int linenumber;
extern int err_number;

yyerror(msg)
   char * msg;
{
   printf("error en linea %d: %s\n", linenumber, msg);
   err_number = 1;
  // exit(1);
}

nextline()
{
   linenumber++;
}
