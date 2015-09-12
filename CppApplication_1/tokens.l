/* IMPORTANTE:  no dejar espacios entre los | | | !!!!!1  */
/* '[\x20-\x7D]{-}[\']+'  {   para LITERAL, en linux */

%{

#define linux
//#define windows

struct elnodo * nuevonodo(void);
char constantes[127][127];
char variables[127][127];
typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double     numero;
} struct_variable;

struct_variable   array_variables[256];


#include "nodo.h"
#include "stdio.h"

// #include "grammar_tab.h"

#ifdef windows
  //#include "grammar_tab.h"
#endif


#ifdef linux
 #include "grammar.tab.h"
#endif

extern YYSTYPE  yylval;
extern void  insAST(char * ) ;

 int contador = 0; 
 int  contadorvar = 0; 

extern int linenumber;
int  LineaInicial ;

int instala(x) 
int x;
{
   int i;
   strcpy (constantes[x],  yytext);
   i=0;
   while ( i < (strlen(yytext-2) ) ) { 
       constantes[x][i] = constantes[x][i+1]; i++;
    }
       	constantes[x][i-4] = '\0';
	printf("CONSTANTE %d  --    %s\n", x, constantes[x]);  
   return x;
}

int variables_count = 0;

char instalavar(x) 
int x;
{

   int i=0;
   for (i=0; i<=contadorvar; i++) {
       if (!strcmp(yytext, variables[i])) {
                                contadorvar--;
                                variables_count++;
 		 return i ; }
           /* else printf("%d no igual...", i);   */
   };
   strcpy (variables[x],  yytext);
   strcpy  (array_variables[x].nombre, yytext);
   printf("VARIABLE %d  --    %s\n", x, variables[x]);
   insAST(yytext) ;
/*   printf("%d  --    %s\n", x, variables[x]);  */
   return x;
}



%}


%%
"oo" { return OR; }
"yy" { return AND; }
"\"" {return DOBLECOMILLA; }
"="     { return EQ; }
"<>"    { return NE; }
"<"     { return LT; }
"<="    { return LE; }
">"     { return GT; }
">="    { return GE; }
"+"     { return PLUS; }
"-"     { return MINUS; }
"*"     { return MULT; }
"/"     { return DIVIDE; }
")"     { return RPAREN; }
"("     { return LPAREN; }
";"     { return SEMICOLON; }
","     { return COMMA; }
"[" { return '['; }
"]" { return ']'; }
"#"     { return '#'; }

"if"|"IF"|"SI"|[sS]i    { return IF; }
"call"|"LLAMAR"|"CALL"|[Ll]lamar   { return LLAMAR ; }
"PROC"|"proc"|[Pp]rocedimiento|"PROCEDIMIENTO"    { return PROC ; }
"end"|"END"|"fin"|"FIN"     { return END ; }
"then"|"THEN"|"ENTONCES"|"entonces"  { return THEN; }
"else"|"ELSE"|"SINO"|"sino"  { return ELSE; }
"fi"|"FI"|"SI-FIN"|"si-fin"|"fin-si"    { return FI; }
"while"|"WHILE"|"MIENTRAS"|"mientras" { LineaInicial = linenumber; return WHILE; }
"to"|"TO"|"HASTA"|"hasta" { return TO ; }
"for"|"FOR"|"DESDE"|"desde" { return FOR ; }
"do"|"DO"|"HAZ"|"haz"|"hacer"|"HACER"|"{"    { return DO; }
"od"|"OD"|"FIN-HAZ"|"fin-haz"|"fin-hacer"|"}"    { return OD; }
"print"|"PRINT"|"IMPRIMIR"|"imprimir"|"?"  { return PRINT; }
"input"|"INPUT"|"LEER"|"leer" { return LEER; }
"cls"|"CLS"|"BORRAR"|"borrar"|"cls"   { return BORRAR ; }
"decimales"|"dec"|"DECIMALES"|"DEC" { return DECIMALES; }
"TERMINAR"|"terminar"|"FINALIZAR"|"finalizar"|"exit"|"EXIT"|"quit"|"QUIT"  { return TERMINAR ; }
"ventana" {return VENTANA; }
"boton" {return BOTON; }
"etiqueta" {return ETIQUETA; }
"texto" {return TEXTO; }
"mensaje" {return MENSAJE; }
"graficos" {return GRAFICOS; }
"dim" {return DIM; }
"linea" {return LINEA; }
"circulo" {return CIRCULO; }
"convertir" {return CONVERTIR; }
"evalua" {return EVALUAR; }
"stop" {return STOP; }
"abrir" {return ABRIR; }
"cerrar" {return CERRAR; }
"mostrar" {return MOSTRAR; }
"vaciar" {return VACIAR; }
"continuar" {return CONTINUAR; }
"salir" {return SALIR; }

'[^\']+'  {
        /* constantes literales contienen una serie de variados signos � simbolos */
	yylval.nodo = nuevonodo();
	yylval.nodo->tipo = constante_literal; 
	yylval.nodo->subnodos = 0;
	yylval.nodo->num  = instala(contador++);     //yylval.num  = instala(contador++)
        printf("constante literal: %s    indice %4.0f  en linea : %i \n", yytext, yylval.nodo->num, linenumber);
	return LITERAL; 
	}

[0-9]+|[0-9]+"."[0-9]+ { double numdbl = 0;
	yylval.nodo  = nuevonodo();
	yylval.nodo->tipo = un_numero;
	yylval.nodo->subnodos = 0;
	/* tofloat */
	sscanf( yytext, "%lf", &numdbl);
	yylval.nodo->num  = numdbl;     //yylval.num  = atoi(yytext)
	return NUMBER; 
	}

[a-z_0-9]+     {
        /* nombres de variables numericas en minusculas */

	yylval.nodo  = nuevonodo();
	yylval.nodo->tipo = indice_strings;
	yylval.nodo->subnodos = 0;
	yylval.nodo->num  = instalavar(contadorvar++);   //yylval.num  = instalavar(contadorvar++)
                //array_variables[(int)yylval.nodo->num].numero=0;  // esto debe ponerse en un bucle al inicio del programa
                array_variables[(int)yylval.nodo->num].tipo = 'N';   //numero
	printf("variable numerica: %s    indice %4.0f   en linea : %i \n", yytext, yylval.nodo->num, linenumber );
	return NAME; 
	}


[A-Z_0-9]+  {
                /* nombres de variables ALFANUMERICAS van en mayusculas */
	yylval.nodo  = nuevonodo();
	yylval.nodo->tipo = nombre_de_variable;
	yylval.nodo->subnodos = 0;
	yylval.nodo->num  = instalavar(contadorvar++);   //yylval.num  = instalavar(contadorvar++)
	//strcpy(array_variables[(int)yylval.nodo->num].valor, "(null)");
                array_variables[(int)yylval.nodo->num].tipo = 'S';   //string
                printf("variable alfanumerica: %s    indice %4.0f   en linea : %i \n", yytext, yylval.nodo->num, linenumber );
	return SNAME; 
	}


\       { ; }
\n      { nextline(); }
\t      { ; }
"//".*\n { nextline(); }




.       { 
               yyerror2("caracter ilegal", yytext[0]); 
}
%%
#ifndef yywrap
yywrap() { return 1; }
#endif

//int * nuevoValorEnteros(int cantidad) {
  //  int * vector = malloc(sizeof(int)*cantidad);
   // return vector;
//}

 elnodo * nuevonodo()  {
 elnodo * p;
p = malloc(sizeof(struct elnodo));

extern long memoria;
memoria += sizeof(struct elnodo);
//printf("nuevo nodo: %ld\n", memoria);

p->num = 0;
p->tipo = 9999;
 
p->subnodos = 0;
p->nodo1 = NULL;
p->nodo2 = NULL;
p->nodo3 = NULL;
p->nodo4 = NULL;
p->nodo5 = NULL;


return p;

}

