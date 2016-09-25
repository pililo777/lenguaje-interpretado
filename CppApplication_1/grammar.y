// compilar con la orden:     bison -d grammar.y      luego    flex tokens.l  //github
%{
#include "nodo.h"

extern ast * procedimientos[127]; //cambiar esta forma
extern int idx_prc;

extern ast * pila_programas[32];
extern ast * pila_records[32]; // pila de registros
 extern int idx_prg;

 extern int nro_decimales;
 extern long memoria;


#include "stdio.h"
#include "vars.h"
 
#define MSDOS
//char constantes[127][127];
//char variables[127][127];
%}

%union {
 ast * nodo;
}


%start ROOT
%token GUARDAR PUSH POP FUNCION RETORNAR
%token BUSCAR INSERTAR ELIMINAR USE_INDICE CLOSE_INDICE
%token STOP  REGISTRO FINREGISTRO
%token ABRIR CERRAR MOSTRAR VACIAR
%token LLAMAR PROC END PROCNAME GRAFICOS DIM LINEA CIRCULO CONVERTIR EVALUAR
%token EQ
%token TERMINAR DECIMALES VENTANA FIN BOTON MENSAJE ETIQUETA TEXTO
%token NE
%token LT
%token LE
%token GT
%token GE
%token PLUS
%token MINUS
%token MULT
%token DIVIDE
%token RPAREN
%token LPAREN
%token ASSIGN
%token SEMICOLON
%token COMMA
%token IF
%token THEN
%token ELSE
%token FI
%token WHILE
%token FOR
%token TO
%token DO
%token OD
%token PRINT
%token LEER BORRAR
%token NUMBER
%token NAME SNAME PAUSA
%token LITERAL STRING DOBLECOMILLA OR AND CONTINUAR SALIR ACTUALIZAR
%type <nodo> stmtseq statement  expr2 expr3 expr4 expression   procedimiento  procedimientos  lista_expr lista_expr2 GRAFICOS DIM LINEA CIRCULO
%type <nodo> designator LITERAL sdesignator SNAME NUMBER NAME proc_designator PROCNAME   
%type <nodo> CONVERTIR EVALUAR STOP ABRIR  CERRAR MOSTRAR OR AND CONTINUAR SALIR USE_INDICE
%type <nodo> CLOSE_INDICE ACTUALIZAR lista_campos funcion subprograma lista_argumentos variable lista_parametros
%type <nodo> parametro PAUSA STRING
%%

ROOT:
   stmtseq    {  pila_programas[idx_prg] = ($1); /* stmtseq */ ;  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); }
|  stmtseq TERMINAR procedimientos {
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
 	pila_programas[idx_prg] = ($1); /* stmtseq */ ;  idx_prg++; }
;

procedimientos:
   subprograma   { $$ =  $1  ;  /* un procedimiento  */ }
|  procedimientos subprograma { $$ =  $2 ; /*varios procedim.*/ }
;


subprograma:
   procedimiento   { $$ =  $1  ;  /* un procedimiento  */ }
|  funcion { $$ =  $1  ;  /* una funcion  */ }
;


statement:
  designator EQ expression { $$ = nodo2(asigna_num, $1, $3); /*asignacion*/} 
| sdesignator EQ LITERAL  { $$ = nodo2(asigna_alfa, $1, $3); /*asign literal*/} 
| sdesignator EQ sdesignator  { $$ = nodo2(asigna_alfa_var, $1, $3); /*asign literal*/} 
| sdesignator PLUS EQ sdesignator  { $$ = nodo2(sumar_alfa, $1, $4); /*suma alfa*/} 
| DIM designator NUMBER  { $$ = nodo2(dimensionar, $2, $3); /*dimensionar un vector entero */ }
| DIM sdesignator NUMBER  { $$ = nodo2(dimensionar_alfa, $2, $3); /*dimensionar un vector strings */ }
| designator '[' expression ']' EQ expression { $$ = nodo3(asigna_vector, $1, $3, $6 );  }
| sdesignator '[' expression ']' EQ LITERAL { $$ = nodo3(asigna_vector_alfa, $1, $3, $6 );  }
| sdesignator '[' expression ']' EQ sdesignator { $$ = nodo3(asigna_vector_alfa2, $1, $3, $6 );  }
| sdesignator EQ sdesignator '[' expression ']' { $$ = nodo3(asigna_vector_alfa3, $1, $3, $5 );  }
| LLAMAR proc_designator   {  $$ = nodo1(llamar, $2) ;/*llamar proced.*/} 
| sdesignator EQ proc_designator LPAREN lista_parametros RPAREN   {  $$ = nodo3(llamar, $3, $5, $1) ;/*llamar proced.*/} 
| proc_designator LPAREN lista_parametros RPAREN   {  $$ = nodo2(llamar, $1, $3) ;/*llamar proced.*/} 
| RETORNAR expression { $$ = nodo1( retorno, $2);    }
| RETORNAR sdesignator { $$ = nodo1( retorno, $2);    }
| DECIMALES NUMBER  { $$ = nodo1(decimales, $2 ) ; } 
| PRINT lista_expr  { $$ = nodo1(imprimir_varios,  $2); /*imprimir lista expr*/} 
| IF expression THEN stmtseq ELSE stmtseq FI { $$ = nodo3(si, $2, $4, $6); /*if con else */}
| IF expression THEN stmtseq FI { $$ = nodo2(si, $2, $4); /*if sin else*/}
| WHILE expression DO stmtseq OD { $$ = nodo2(mientras, $2, $4); /*while*/}
| FOR designator EQ expression TO expression DO stmtseq OD {$$ = nodo4(desde, $2, $4, $6, $8); /*for*/}
| VENTANA designator NUMBER NUMBER  { $$ = nodo3(crear_ventana, $2, $3, $4) ;  }
| LEER VENTANA designator LITERAL { $$=nodo1(mostrar_ventana, $3) ;  } 
| LLAMAR VENTANA designator { $$=nodo1(mostrar_ventanas, $3) ;  } 
| designator VENTANA LITERAL { $$=nodo2(cambiar_titulo, $1, $3) ;  } 
| designator BOTON LITERAL proc_designator NUMBER NUMBER { $$=nodo5(guardar_boton, $1, $3, $4, $5, $6) ;  } 
| designator ETIQUETA LITERAL NUMBER NUMBER { $$=nodo4(guardar_etiqueta, $1, $3, $4, $5) ;  } 
| designator TEXTO SNAME expr2 COMMA expr2 { $$=nodo4(guardar_texto, $1, $3, $4, $6) ;  } 
| MENSAJE lista_expr  { $$ = nodo1(mensaje,  $2); /*imprimir lista expr*/}
| LLAMAR LITERAL {   $$ = nodo1(interpreta, $2);  }  /*los siguientes... 18 de Enero de 2014 */
| GRAFICOS proc_designator designator designator designator { $$ = nodo4(graficos, $2, $3, $4, $5);   }  /* proc  boton x y */
| LINEA expr2 COMMA expr2 COMMA expr2 COMMA expr2 { $$ = nodo4(dibuja_linea, $2, $4, $6, $8) ; }  /* dibuja una linea en la ventana grafica */
| CIRCULO expr2 COMMA expr2 COMMA expr2 { $$ = nodo3(dibuja_circulo, $2, $4, $6) ; } 
| CONVERTIR sdesignator designator {$$=nodo2(convertir_texto_a_numero, $2, $3);}
| CONVERTIR designator sdesignator {$$=nodo2(convertir_numero_a_texto, $2, $3);}
| EVALUAR  STRING  {  $$ = nodo1(interpreta, $2 );  } 
| STOP { $$=nodo0(stop, $1); }
| ABRIR sdesignator designator { $$=nodo2(abrir, $2, $3); }
| CERRAR designator { $$=nodo1(cerrar, $2); }
| LEER designator   { $$ = nodo1(leer,  $2) ; /*leer variable numerica*/}
| LEER  '#' designator sdesignator designator { $$=nodo3(leer_archivo, $3, $4, $5); }
| GUARDAR  '#' designator sdesignator { $$=nodo2(escribir_archivo, $3, $4); }
| GUARDAR  '#' designator sdesignator NUMBER COMMA NUMBER { $$=nodo4(escribir_archivo, $3, $4, $5, $7); }
| LEER sdesignator  { $$ = nodo1(leertexto,  $2) ; /*leer variable alfa*/}
| MOSTRAR sdesignator { $$=nodo1(mostrar, $2); }
| VACIAR sdesignator { $$=nodo1(vaciar, $2); }
| CONTINUAR { $$=nodo0(continuar, $1); }
| SALIR { $$=nodo0(salir, $1); }   //este deberia ser nodo0? si deberia ser, hay que buscar otros nodo1 con un solo param
| BUSCAR sdesignator designator designator { $$ = nodo3(buscar_clave,  $2, $3, $4); }  /* buscar en indce */
| INSERTAR sdesignator designator designator   { $$ = nodo3(insertar_clave,  $2, $3, $4); }  /*  en indice */
| ELIMINAR sdesignator    { $$ = nodo1(eliminar_clave,  $2); }  /*  en indice */
| USE_INDICE sdesignator { $$=nodo1(use_indice, $2); }
| CLOSE_INDICE  { $$=nodo0(close_indice, $1); }
| PUSH     sdesignator    { $$ = nodo1(push,  $2); } 
| PUSH     designator    { $$ = nodo1(push,  $2); } 
| POP      sdesignator    { $$ = nodo1(pop ,  $2); } 
| POP      designator    { $$ = nodo1(pop ,  $2); } 
| ACTUALIZAR VENTANA designator { $$ = nodo1(actualizar, $3); } // actualiza los entry text
| REGISTRO designator LITERAL lista_campos FINREGISTRO { $$ = nodo3(definir_registro, $2, $3, $4);
                        pila_records[idx_rec] = $$   ; 
			array_variables[(int) $2->num].procedimiento = idx_rec  ;
			idx_rec++;
 }
| BUSCAR REGISTRO designator designator { $$=nodo2(buscar_registro, $3, $4); }
| ACTUALIZAR REGISTRO designator designator { $$=nodo2(actualizar_registro, $3, $4); }
| PAUSA { $$ = nodo0(pausa, $1); }
;

lista_campos:
 sdesignator NUMBER { $$ = nodo2(listacampos, $1, $2); }
| sdesignator NUMBER lista_campos { $$ = nodo3(listacampos, $3, $1, $2); }
;


lista_parametros:
  parametro {$$ = nodo1(lista_parametros, $1);}
| parametro COMMA lista_parametros { $$=nodo2(lista_parametros, $1, $3); }
;

parametro:
  expression { $$=$1; }
| LITERAL { $$=$1; }
| sdesignator { $$=$1; }
;


lista_argumentos:
variable {$$ = nodo1(lista_argumentos, $1);}
| variable COMMA lista_argumentos { $$ = nodo2(lista_argumentos, $1, $3); }
;

variable:
  designator {$$ = $1;}
|sdesignator {$$ = $1;}
;

lista_expr:
  lista_expr2  { $$=$1 ; /*lista expr*/ }
| lista_expr COMMA lista_expr2 { $$=nodo2 (secuencia, $1, $3)  ; /*varias lista expr, separadas por coma*/ }
;

lista_expr2:
  expression   { $$=nodo1(imprimir_expresion, $1); /*lista expresion2*/}
| LITERAL      { $$=nodo1(imprimir_literal, $1 ); /* un literal*/}
| sdesignator  { $$=nodo1(imprimir_var_alfa, $1); /* una variable literal*/}
| sdesignator '[' expr2 ']'  { $$=nodo2(imprimir_var_vectoralfa, $1, $3); /* una variable literal*/}
;

stmtseq:
  stmtseq statement { $$ = nodo2(secuencia, $1, $2); /*una seq de comandos*/}
| statement { $$ = $1; /*un comando*/}
;

expression:
  expr2 { $$ = $1; /* expresion2*/} 
| expr2 EQ expr2 { $$ = nodo2(igualque,      $1, $3); /*igualdad*/}
| expr2 NE expr2 { $$ = nodo2(noigualque,    $1, $3); /*no igual*/}
| expr2 LT expr2 { $$ = nodo2(menorque,      $1, $3); /*menor que*/}
| expr2 LE expr2 { $$ = nodo2(menorigualque, $1, $3); /*menor o igual que*/}
| expr2 GT expr2 { $$ = nodo2(mayorque,      $1, $3); /*mayor que*/}
| expr2 GE expr2 { $$ = nodo2(mayorigualque, $1, $3); /*mayor o igual que*/}
| sdesignator EQ LITERAL { $$ = nodo2(comparaliteral, $1, $3) ; /*asigna literal*/}
| sdesignator EQ sdesignator { $$ = nodo2(comparaliteral, $1, $3) ; /*asigna literal*/}
;

expr2:
  expr3 { $$ = $1; /* expr2*/}
| expr2 PLUS expr3 { $$ = nodo2(suma, $1, $3); /*suma*/}
| expr2 MINUS expr3 { $$ = nodo2(resta, $1, $3); /*resta*/}
| expr2 OR expr3 { $$ = nodo2(or, $1, $3); /*or*/}
| expr2 AND expr3  { $$ = nodo2(and, $1, $3); /*and*/}
;

expr3:
  expr4 { $$ = $1; }
| expr3 MULT expr4 { $$ = nodo2(multiplica, $1, $3); /*multiplicar*/}
| expr3 DIVIDE expr4 { $$ = nodo2 (divide, $1, $3); /*dividir*/}
;

expr4:
  PLUS expr4 { $$ = $2; /*positivo*/}
| MINUS expr4 { $$ = nodo1(negativo, $2); /*negativo*/}
| LPAREN expression RPAREN { $$ = $2; /*expr enter parentesis*/}
| NUMBER { $$ =  $1; /*numero*/}
| designator { $$ = $1; /*designador variable*/}
| designator '[' expression ']' { $$ = nodo2(evalua_vector, $1, $3);   }
| proc_designator LPAREN lista_parametros RPAREN   {  $$ = nodo2(llamar, $1, $3) ;/*llamar proced.*/} 
;

sdesignator:
  SNAME { $$ = $1; /*designador string*/}

designator:
  NAME { $$ = $1;  /* nombre designador */ }
;
proc_designator:
  NAME { $$ =  $1 ;  /*designador proced.*/ }


procedimiento:
   PROC proc_designator stmtseq END { 
			$$ = nodo2(procedimiento, $2, $3) ;/*un procedimiento*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = $$   ;   /* revisar este metodo */	
			array_variables[(int) $2->num].procedimiento = idx_prc  ;
                        array_variables[(int) $2->num].tipo = 'P'  ;
                        printf("P: %s\n", array_variables[(int) $2->num].nombre);
			idx_prc++;
			}

funcion:
   FUNCION proc_designator LPAREN lista_argumentos RPAREN stmtseq END { 
			$$ = nodo3(funcion, $2, $4, $6) ;/*una funcion*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = $$   ;   /* revisar este metodo */	
			array_variables[(int) $2->num].procedimiento = idx_prc  ;
                        array_variables[(int) $2->num].tipo = 'F'  ;
                        printf("F: %s\n", array_variables[(int) $2->num].nombre);
			idx_prc++;
			}

%%


