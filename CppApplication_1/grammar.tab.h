/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     GUARDAR = 258,
     PUSH = 259,
     POP = 260,
     FUNCION = 261,
     RETORNAR = 262,
     BUSCAR = 263,
     INSERTAR = 264,
     ELIMINAR = 265,
     USE_INDICE = 266,
     CLOSE_INDICE = 267,
     STOP = 268,
     REGISTRO = 269,
     FINREGISTRO = 270,
     ABRIR = 271,
     CERRAR = 272,
     MOSTRAR = 273,
     VACIAR = 274,
     LLAMAR = 275,
     PROC = 276,
     END = 277,
     PROCNAME = 278,
     GRAFICOS = 279,
     DIM = 280,
     LINEA = 281,
     CIRCULO = 282,
     CONVERTIR = 283,
     EVALUAR = 284,
     EQ = 285,
     TERMINAR = 286,
     DECIMALES = 287,
     VENTANA = 288,
     FIN = 289,
     BOTON = 290,
     MENSAJE = 291,
     ETIQUETA = 292,
     TEXTO = 293,
     NE = 294,
     LT = 295,
     LE = 296,
     GT = 297,
     GE = 298,
     PLUS = 299,
     MINUS = 300,
     MULT = 301,
     DIVIDE = 302,
     RPAREN = 303,
     LPAREN = 304,
     ASSIGN = 305,
     SEMICOLON = 306,
     COMMA = 307,
     IF = 308,
     THEN = 309,
     ELSE = 310,
     FI = 311,
     WHILE = 312,
     FOR = 313,
     TO = 314,
     DO = 315,
     MAKETOKEN = 316,
     OD = 317,
     PRINT = 318,
     LEER = 319,
     BORRAR = 320,
     NUMBER = 321,
     NAME = 322,
     SNAME = 323,
     PAUSA = 324,
     LITERAL = 325,
     STRING = 326,
     DOBLECOMILLA = 327,
     OR = 328,
     AND = 329,
     CONTINUAR = 330,
     SALIR = 331,
     ACTUALIZAR = 332
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 25 "grammar.y"

 ast * nodo;


/* Line 2053 of yacc.c  */
#line 139 "grammar.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
