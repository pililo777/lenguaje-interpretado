/* A Bison parser, made by GNU Bison 3.0.2.  */

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
    BUSCAR = 261,
    INSERTAR = 262,
    ELIMINAR = 263,
    USE_INDICE = 264,
    CLOSE_INDICE = 265,
    STOP = 266,
    REGISTRO = 267,
    FINREGISTRO = 268,
    ABRIR = 269,
    CERRAR = 270,
    MOSTRAR = 271,
    VACIAR = 272,
    LLAMAR = 273,
    PROC = 274,
    END = 275,
    PROCNAME = 276,
    GRAFICOS = 277,
    DIM = 278,
    LINEA = 279,
    CIRCULO = 280,
    CONVERTIR = 281,
    EVALUAR = 282,
    EQ = 283,
    TERMINAR = 284,
    DECIMALES = 285,
    VENTANA = 286,
    FIN = 287,
    BOTON = 288,
    MENSAJE = 289,
    ETIQUETA = 290,
    TEXTO = 291,
    NE = 292,
    LT = 293,
    LE = 294,
    GT = 295,
    GE = 296,
    PLUS = 297,
    MINUS = 298,
    MULT = 299,
    DIVIDE = 300,
    RPAREN = 301,
    LPAREN = 302,
    ASSIGN = 303,
    SEMICOLON = 304,
    COMMA = 305,
    IF = 306,
    THEN = 307,
    ELSE = 308,
    FI = 309,
    WHILE = 310,
    FOR = 311,
    TO = 312,
    DO = 313,
    OD = 314,
    PRINT = 315,
    LEER = 316,
    BORRAR = 317,
    NUMBER = 318,
    NAME = 319,
    SNAME = 320,
    LITERAL = 321,
    DOBLECOMILLA = 322,
    OR = 323,
    AND = 324,
    CONTINUAR = 325,
    SALIR = 326,
    ACTUALIZAR = 327
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 24 "grammar.y" /* yacc.c:1909  */

 ast * nodo;

#line 131 "grammar.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
