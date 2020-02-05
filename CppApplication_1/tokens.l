/* IMPORTANTE:  no dejar espacios entre los | | | !!!!!1   github */
/* '[\x20-\x7D]{-}[\']+'  {   para LITERAL, en linux */

%{

#define linux
//#define windows

struct ast * nuevonodo(void);
void  cuentalineas(char * yytext);

#include "vars.h"


 

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
 int contador_lineaInicial = 0;

extern int linenumber;
int lineaEjecucion = 0;
int lineaAnterior = 0;
int  LineaInicial[20] ;   //para anidar  IF, FOR, WHILE

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
if(depurar)
	printf("CONSTANTE %d  --    %s\n", x, constantes[x]);  
   return x;
}

int variables_count = 0;
short myflag = 0;

char instalavar(x) 
int x;
{

   int i=0; myflag = 0;
   for (i=0; i<=contadorvar; i++) {
       if (!strcmp(yytext, array_variables[i].nombre)) {
                                contadorvar--;
                                variables_count++;
                                myflag = 1;
 		 return i ; }
           /* else printf("%d no igual...", i);   */
   };
   //strcpy (variables[x],  yytext);
   strcpy  (array_variables[x].nombre, yytext);
// if (depurar)
   //printf("VARIABLE %d  --    %s\n", x, variables[x]);
  // insAST(yytext) ;
/*   printf("%d  --    %s\n", x, variables[x]);  */
   return x;
}

lineaEjecucion2() {
    lineaAnterior = lineaEjecucion;
    lineaEjecucion = linenumber;
if (depurar)
    printf("Linea Ejecucion: %d\n", lineaEjecucion);
/*
    if (lineaEjecucion==12)
        pausar();
*/
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

"if"|"IF"|"SI"|[sS]i   {LineaInicial [contador_lineaInicial] = linenumber; contador_lineaInicial++; return IF; }
"call"|"LLAMAR"|"CALL"|[Ll]lamar  {lineaEjecucion2(); return LLAMAR ; }
"PROC"|"proc"|[Pp]rocedimiento|"PROCEDIMIENTO"    { return PROC ; }
"end"|"END"|"fin"|"FIN"     { return END ; }
"then"|"THEN"|"ENTONCES"|"entonces"  { return THEN; }
"else"|"ELSE"|"SINO"|"sino"  { return ELSE; }
"fi"|"FI"|"SI-FIN"|"si-fin"|"fin-si"    { contador_lineaInicial--;  return FI; }
"while"|"WHILE"|"MIENTRAS"|"mientras" { LineaInicial [contador_lineaInicial] = linenumber; contador_lineaInicial++; return WHILE; }
"to"|"TO"|"HASTA"|"hasta" { return TO ; }
"for"|"FOR"|"DESDE"|"desde" {LineaInicial [contador_lineaInicial] = linenumber; contador_lineaInicial++; return FOR ; }
"do"|"DO"|"HAZ"|"haz"|"hacer"|"HACER"|"{"    { return DO; }
"od"|"OD"|"FIN-HAZ"|"fin-haz"|"fin-hacer"|"}"  {contador_lineaInicial--; return OD; }
"print"|"PRINT"|"IMPRIMIR"|"imprimir"|"?"  {lineaEjecucion2(); return PRINT; }
"LEER"|"leer" {lineaEjecucion2(); return LEER; }
"cls"|"CLS"|"BORRAR"|"borrar"|"cls"   {lineaEjecucion2(); return BORRAR ; }
"decimales"|"dec"|"DECIMALES"|"DEC" {lineaEjecucion2(); return DECIMALES; }
"TERMINAR"|"terminar"|"FINALIZAR"|"finalizar"|"exit"|"EXIT"|"quit"|"QUIT"  { return TERMINAR ; }
"ventana" {lineaEjecucion2(); return VENTANA; }
"boton" {lineaEjecucion2();  return BOTON; }
"etiqueta" {lineaEjecucion2();   return ETIQUETA; }
"texto" {lineaEjecucion2(); return TEXTO; }
"mensaje" {lineaEjecucion2(); return MENSAJE; }
"graficos" {lineaEjecucion2(); return GRAFICOS; }
"dim" {lineaEjecucion2(); return DIM; }
"linea" {lineaEjecucion2(); return LINEA; }
"circulo" {lineaEjecucion2(); return CIRCULO; }
"convertir" {lineaEjecucion2(); return CONVERTIR; }
"evalua" {lineaEjecucion2(); return EVALUAR; }
"stop" {lineaEjecucion2();  return STOP; }
"abrir" { lineaEjecucion2();  return ABRIR; }
"cerrar" { lineaEjecucion2();  return CERRAR; }
"mostrar" {lineaEjecucion2();    return MOSTRAR; }
"vaciar" { lineaEjecucion2(); return VACIAR; }
"continuar" { lineaEjecucion2(); return CONTINUAR; }
"salir" { lineaEjecucion2(); return SALIR; }
"buscar" {lineaEjecucion2(); return BUSCAR;}
"insertar" {lineaEjecucion2(); return INSERTAR;}
"eliminar" {lineaEjecucion2(); return ELIMINAR;}
"use"    {lineaEjecucion2(); return USE_INDICE;}
"close"  {lineaEjecucion2(); return CLOSE_INDICE;}
"actualizar" {lineaEjecucion2(); return ACTUALIZAR; }
"registro" {lineaEjecucion2(); return REGISTRO; }
"fin-registro" {lineaEjecucion2(); return FINREGISTRO; }
"guardar" {lineaEjecucion2(); return GUARDAR;}
"push" {lineaEjecucion2(); return PUSH;}
"pop" {lineaEjecucion2(); return POP;}
"funcion" {lineaEjecucion2(); return FUNCION;}
"retornar" {lineaEjecucion2(); return RETORNAR;}
"pausa" {lineaEjecucion2(); return PAUSA; }


\'(\\.|[^'])*\'  {  // '[.]+'
        /* constantes literales contienen una serie de variados signos � simbolos */
	yylval.nodo = nuevonodo();
	yylval.nodo->tipo = constante_literal; 
	yylval.nodo->subnodos = 0;
	yylval.nodo->num  = instala(contador++);     //yylval.num  = instala(contador++)
if (depurar)
        printf("constante literal: %s    indice %4.0f  en linea : %i \n", yytext, yylval.nodo->num, linenumber);
	return LITERAL; 
	}

\"(\\.|[^"])*\"  { 
        /* constantes literales con commillas */
	yylval.nodo = nuevonodo();
	yylval.nodo->tipo = constante_literal; 
	yylval.nodo->subnodos = 0;
	yylval.nodo->num  = instala(contador++);     //yylval.num  = instala(contador++)
if (depurar)
        printf("constante literal: %s    indice %4.0f  en linea : %i \n", yytext, yylval.nodo->num, linenumber);
	return STRING; 
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

lineaEjecucion2();
//printf("var num lineaEjecución: %d\n", lineaEjecucion);

	yylval.nodo  = nuevonodo();
	yylval.nodo->tipo = indice_strings;
	yylval.nodo->subnodos = 0;
	yylval.nodo->num  = instalavar(contadorvar++);   //yylval.num  = instalavar(contadorvar++)
                //array_variables[(int)yylval.nodo->num].numero=0;  // esto debe ponerse en un bucle al inicio del programa
                if (!myflag)
                array_variables[(int)yylval.nodo->num].tipo = 'N';   //numero
if (depurar)
	printf("variable numerica: %s    indice %4.0f   en linea : %i \n", yytext, yylval.nodo->num, linenumber );
        yylval.nodo->nrolinea1 = yylval.nodo->nrolinea2 = linenumber;
	return NAME; 
	}


[A-Z_0-9]+  {
        /* nombres de variables ALFANUMERICAS van en mayusculas */
        lineaEjecucion2();
	yylval.nodo  = nuevonodo();
	yylval.nodo->tipo = nombre_de_variable;
	yylval.nodo->subnodos = 0;
	yylval.nodo->num  = instalavar(contadorvar++);   //yylval.num  = instalavar(contadorvar++)
	//strcpy(array_variables[(int)yylval.nodo->num].valor, "(null)");
                array_variables[(int)yylval.nodo->num].tipo = 'S';   //string
if (depurar)
                printf("variable alfanumerica: %s    indice %4.0f   en linea : %i \n", yytext, yylval.nodo->num, linenumber );
	return SNAME; 
	}


\       { ; }
\n      { nextline(); }
\t      { ; }
"//".*\n { nextline(); }
"/*"([^*]|(\*+[^*/]))*\*+\/ {  cuentalineas( yytext  ) ; } /* comentarios multilinea  */

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

 ast * nuevonodo()  {
 ast * p;
p = malloc(sizeof(struct ast));

extern long memoria;
memoria += sizeof(struct ast);
nodos++;
if (depurar)
printf("nuevo nodo: %ld\n", memoria);

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

void  cuentalineas( char * texto ) {
int i = 0;
for (i=0; i < strlen(texto); i++ ) {
        if  ( texto[i] == '\n' || texto [i] == '\r') linenumber++;
    }
}
