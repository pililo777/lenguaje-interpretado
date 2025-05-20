/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    RECTANGULO = 283,
    PUNTO = 284,
    CONVERTIR = 285,
    EVALUAR = 286,
    EQ = 287,
    TERMINAR = 288,
    DECIMALES = 289,
    VENTANA = 290,
    FIN = 291,
    BOTON = 292,
    MENSAJE = 293,
    ETIQUETA = 294,
    TEXTO = 295,
    NE = 296,
    LT = 297,
    LE = 298,
    GT = 299,
    GE = 300,
    PLUS = 301,
    MINUS = 302,
    MULT = 303,
    DIVIDE = 304,
    RPAREN = 305,
    LPAREN = 306,
    ASSIGN = 307,
    SEMICOLON = 308,
    COMMA = 309,
    IF = 310,
    THEN = 311,
    ELSE = 312,
    FI = 313,
    WHILE = 314,
    FOR = 315,
    TO = 316,
    DO = 317,
    OD = 318,
    PRINT = 319,
    LEER = 320,
    BORRAR = 321,
    NUMBER = 322,
    NAME = 323,
    SNAME = 324,
    PAUSA = 325,
    LITERAL = 326,
    STRING = 327,
    DOBLECOMILLA = 328,
    OR = 329,
    AND = 330,
    CONTINUAR = 331,
    SALIR = 332,
    ACTUALIZAR = 333
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "grammar.y"

 ast * nodo;

#line 140 "grammar.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
