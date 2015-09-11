/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STOP = 258,
     LLAMAR = 259,
     PROC = 260,
     END = 261,
     PROCNAME = 262,
     GRAFICOS = 263,
     DIM = 264,
     LINEA = 265,
     CIRCULO = 266,
     CONVERTIR = 267,
     EVALUAR = 268,
     EQ = 269,
     TERMINAR = 270,
     DECIMALES = 271,
     VENTANA = 272,
     FIN = 273,
     BOTON = 274,
     MENSAJE = 275,
     ETIQUETA = 276,
     TEXTO = 277,
     NE = 278,
     LT = 279,
     LE = 280,
     GT = 281,
     GE = 282,
     PLUS = 283,
     MINUS = 284,
     MULT = 285,
     DIVIDE = 286,
     RPAREN = 287,
     LPAREN = 288,
     ASSIGN = 289,
     SEMICOLON = 290,
     COMMA = 291,
     IF = 292,
     THEN = 293,
     ELSE = 294,
     FI = 295,
     WHILE = 296,
     FOR = 297,
     TO = 298,
     DO = 299,
     OD = 300,
     PRINT = 301,
     LEER = 302,
     BORRAR = 303,
     NUMBER = 304,
     NAME = 305,
     SNAME = 306,
     LITERAL = 307,
     DOBLECOMILLA = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 22 "grammar.y"

 elnodo * nodo;



/* Line 2068 of yacc.c  */
#line 109 "grammar.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


