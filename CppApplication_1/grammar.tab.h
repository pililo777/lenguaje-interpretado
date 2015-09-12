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
    STOP = 258,
    ABRIR = 259,
    CERRAR = 260,
    MOSTRAR = 261,
    VACIAR = 262,
    LLAMAR = 263,
    PROC = 264,
    END = 265,
    PROCNAME = 266,
    GRAFICOS = 267,
    DIM = 268,
    LINEA = 269,
    CIRCULO = 270,
    CONVERTIR = 271,
    EVALUAR = 272,
    EQ = 273,
    TERMINAR = 274,
    DECIMALES = 275,
    VENTANA = 276,
    FIN = 277,
    BOTON = 278,
    MENSAJE = 279,
    ETIQUETA = 280,
    TEXTO = 281,
    NE = 282,
    LT = 283,
    LE = 284,
    GT = 285,
    GE = 286,
    PLUS = 287,
    MINUS = 288,
    MULT = 289,
    DIVIDE = 290,
    RPAREN = 291,
    LPAREN = 292,
    ASSIGN = 293,
    SEMICOLON = 294,
    COMMA = 295,
    IF = 296,
    THEN = 297,
    ELSE = 298,
    FI = 299,
    WHILE = 300,
    FOR = 301,
    TO = 302,
    DO = 303,
    OD = 304,
    PRINT = 305,
    LEER = 306,
    BORRAR = 307,
    NUMBER = 308,
    NAME = 309,
    SNAME = 310,
    LITERAL = 311,
    DOBLECOMILLA = 312,
    OR = 313,
    AND = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "grammar.y" /* yacc.c:1909  */

 elnodo * nodo;

#line 118 "grammar.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
