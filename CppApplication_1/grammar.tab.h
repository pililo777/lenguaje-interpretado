/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BUSCAR = 258,
    INSERTAR = 259,
    ELIMINAR = 260,
    USE_INDICE = 261,
    CLOSE_INDICE = 262,
    STOP = 263,
    REGISTRO = 264,
    FINREGISTRO = 265,
    ABRIR = 266,
    CERRAR = 267,
    MOSTRAR = 268,
    VACIAR = 269,
    LLAMAR = 270,
    PROC = 271,
    END = 272,
    PROCNAME = 273,
    GRAFICOS = 274,
    DIM = 275,
    LINEA = 276,
    CIRCULO = 277,
    CONVERTIR = 278,
    EVALUAR = 279,
    EQ = 280,
    TERMINAR = 281,
    DECIMALES = 282,
    VENTANA = 283,
    FIN = 284,
    BOTON = 285,
    MENSAJE = 286,
    ETIQUETA = 287,
    TEXTO = 288,
    NE = 289,
    LT = 290,
    LE = 291,
    GT = 292,
    GE = 293,
    PLUS = 294,
    MINUS = 295,
    MULT = 296,
    DIVIDE = 297,
    RPAREN = 298,
    LPAREN = 299,
    ASSIGN = 300,
    SEMICOLON = 301,
    COMMA = 302,
    IF = 303,
    THEN = 304,
    ELSE = 305,
    FI = 306,
    WHILE = 307,
    FOR = 308,
    TO = 309,
    DO = 310,
    OD = 311,
    PRINT = 312,
    LEER = 313,
    BORRAR = 314,
    NUMBER = 315,
    NAME = 316,
    SNAME = 317,
    LITERAL = 318,
    DOBLECOMILLA = 319,
    OR = 320,
    AND = 321,
    CONTINUAR = 322,
    SALIR = 323,
    ACTUALIZAR = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "grammar.y" /* yacc.c:1909  */

 ast * nodo;

#line 128 "grammar.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
