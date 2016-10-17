/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 2 "grammar.y"

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

/* Line 371 of yacc.c  */
#line 90 "grammar.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.tab.h".  */
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
     OD = 316,
     PRINT = 317,
     LEER = 318,
     BORRAR = 319,
     NUMBER = 320,
     NAME = 321,
     SNAME = 322,
     PAUSA = 323,
     LITERAL = 324,
     STRING = 325,
     DOBLECOMILLA = 326,
     OR = 327,
     AND = 328,
     CONTINUAR = 329,
     SALIR = 330,
     ACTUALIZAR = 331
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 24 "grammar.y"

 ast * nodo;


/* Line 387 of yacc.c  */
#line 214 "grammar.tab.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 242 "grammar.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   997

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    79,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    16,    18,    22,
      26,    30,    35,    39,    45,    49,    56,    66,    73,    80,
      87,    97,   100,   107,   112,   115,   118,   121,   124,   132,
     138,   144,   154,   159,   164,   168,   172,   179,   185,   192,
     195,   198,   204,   213,   220,   224,   228,   231,   233,   237,
     240,   243,   249,   254,   263,   266,   269,   272,   274,   276,
     281,   286,   289,   292,   294,   297,   300,   304,   310,   315,
     320,   322,   325,   329,   331,   335,   337,   339,   341,   343,
     347,   349,   351,   353,   357,   359,   361,   363,   368,   371,
     373,   375,   379,   383,   387,   391,   395,   399,   403,   407,
     411,   415,   417,   421,   425,   429,   433,   435,   439,   443,
     446,   449,   453,   455,   457,   462,   470,   475,   477,   479,
     481,   486
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      81,     0,    -1,    92,    -1,    92,    31,    82,    -1,    83,
      -1,    82,    83,    -1,   100,    -1,   101,    -1,    98,    30,
      93,    -1,    97,    30,    69,    -1,    97,    30,    97,    -1,
      97,    44,    30,    97,    -1,    25,    98,    65,    -1,    25,
      98,    65,    52,    65,    -1,    25,    97,    65,    -1,    98,
      77,    93,    78,    30,    93,    -1,    98,    77,    93,    78,
      77,    93,    78,    30,    93,    -1,    97,    77,    93,    78,
      30,    69,    -1,    97,    77,    93,    78,    30,    97,    -1,
      97,    30,    97,    77,    93,    78,    -1,    97,    77,    93,
      78,    30,    97,    77,    94,    78,    -1,    20,    99,    -1,
      97,    30,    99,    49,    86,    48,    -1,    99,    49,    86,
      48,    -1,     7,    93,    -1,     7,    97,    -1,    32,    65,
      -1,    62,    90,    -1,    53,    93,    54,    92,    55,    92,
      56,    -1,    53,    93,    54,    92,    56,    -1,    57,    93,
      60,    92,    61,    -1,    58,    98,    30,    93,    59,    93,
      60,    92,    61,    -1,    33,    98,    65,    65,    -1,    63,
      33,    98,    69,    -1,    20,    33,    98,    -1,    98,    33,
      69,    -1,    98,    35,    69,    99,    65,    65,    -1,    98,
      37,    69,    65,    65,    -1,    98,    38,    67,    94,    52,
      94,    -1,    36,    90,    -1,    20,    69,    -1,    24,    99,
      98,    98,    98,    -1,    26,    94,    52,    94,    52,    94,
      52,    94,    -1,    27,    94,    52,    94,    52,    94,    -1,
      28,    97,    98,    -1,    28,    98,    97,    -1,    29,    70,
      -1,    13,    -1,    16,    97,    98,    -1,    17,    98,    -1,
      63,    98,    -1,    63,    79,    98,    97,    98,    -1,     3,
      79,    98,    97,    -1,     3,    79,    98,    97,    52,    94,
      52,    65,    -1,    63,    97,    -1,    18,    97,    -1,    19,
      97,    -1,    74,    -1,    75,    -1,     8,    97,    98,    98,
      -1,     9,    97,    98,    98,    -1,    10,    97,    -1,    11,
      97,    -1,    12,    -1,     4,    89,    -1,     5,    89,    -1,
      76,    33,    98,    -1,    14,    98,    69,    85,    15,    -1,
       8,    14,    98,    98,    -1,    76,    14,    98,    98,    -1,
      68,    -1,    97,    65,    -1,    97,    65,    85,    -1,    87,
      -1,    87,    52,    86,    -1,    93,    -1,    69,    -1,    97,
      -1,    89,    -1,    89,    52,    88,    -1,    98,    -1,    97,
      -1,    91,    -1,    90,    52,    91,    -1,    93,    -1,    69,
      -1,    97,    -1,    97,    77,    94,    78,    -1,    92,    84,
      -1,    84,    -1,    94,    -1,    94,    30,    94,    -1,    94,
      39,    94,    -1,    94,    40,    94,    -1,    94,    41,    94,
      -1,    94,    42,    94,    -1,    94,    43,    94,    -1,    97,
      30,    69,    -1,    97,    30,    97,    -1,    97,    39,    69,
      -1,    97,    39,    97,    -1,    95,    -1,    94,    44,    95,
      -1,    94,    45,    95,    -1,    94,    72,    95,    -1,    94,
      73,    95,    -1,    96,    -1,    95,    46,    96,    -1,    95,
      47,    96,    -1,    44,    96,    -1,    45,    96,    -1,    49,
      93,    48,    -1,    65,    -1,    98,    -1,    98,    77,    93,
      78,    -1,    98,    77,    93,    78,    77,    93,    78,    -1,
      99,    49,    86,    48,    -1,    67,    -1,    66,    -1,    66,
      -1,    21,    99,    92,    22,    -1,     6,    99,    49,    88,
      48,    92,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    76,    83,    84,    89,    90,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   159,   160,
     161,   165,   166,   171,   172,   176,   177,   178,   183,   184,
     188,   189,   193,   194,   198,   199,   200,   201,   205,   206,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   224,   225,   226,   227,   228,   232,   233,   234,   238,
     239,   240,   241,   242,   243,   244,   245,   249,   252,   255,
     259,   270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "GUARDAR", "PUSH", "POP", "FUNCION",
  "RETORNAR", "BUSCAR", "INSERTAR", "ELIMINAR", "USE_INDICE",
  "CLOSE_INDICE", "STOP", "REGISTRO", "FINREGISTRO", "ABRIR", "CERRAR",
  "MOSTRAR", "VACIAR", "LLAMAR", "PROC", "END", "PROCNAME", "GRAFICOS",
  "DIM", "LINEA", "CIRCULO", "CONVERTIR", "EVALUAR", "EQ", "TERMINAR",
  "DECIMALES", "VENTANA", "FIN", "BOTON", "MENSAJE", "ETIQUETA", "TEXTO",
  "NE", "LT", "LE", "GT", "GE", "PLUS", "MINUS", "MULT", "DIVIDE",
  "RPAREN", "LPAREN", "ASSIGN", "SEMICOLON", "COMMA", "IF", "THEN", "ELSE",
  "FI", "WHILE", "FOR", "TO", "DO", "OD", "PRINT", "LEER", "BORRAR",
  "NUMBER", "NAME", "SNAME", "PAUSA", "LITERAL", "STRING", "DOBLECOMILLA",
  "OR", "AND", "CONTINUAR", "SALIR", "ACTUALIZAR", "'['", "']'", "'#'",
  "$accept", "ROOT", "procedimientos", "subprograma", "statement",
  "lista_campos", "lista_parametros", "parametro", "lista_argumentos",
  "variable", "lista_expr", "lista_expr2", "stmtseq", "expression",
  "expr2", "expr3", "expr4", "sdesignator", "designator",
  "proc_designator", "procedimiento", "funcion", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    91,    93,    35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    98,    99,
     100,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     1,     3,     3,
       3,     4,     3,     5,     3,     6,     9,     6,     6,     6,
       9,     2,     6,     4,     2,     2,     2,     2,     7,     5,
       5,     9,     4,     4,     3,     3,     6,     5,     6,     2,
       2,     5,     8,     6,     3,     3,     2,     1,     3,     2,
       2,     5,     4,     8,     2,     2,     2,     1,     1,     4,
       4,     2,     2,     1,     2,     2,     3,     5,     4,     4,
       1,     2,     3,     1,     3,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     4,     2,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     2,
       2,     3,     1,     1,     4,     7,     4,     1,     1,     1,
       4,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   117,    70,    57,    58,     0,     0,    89,     2,
       0,     0,     0,     0,   118,    64,    81,    80,    65,     0,
       0,     0,   112,    24,    90,   101,   106,    25,   113,     0,
       0,     0,     0,    61,    62,     0,     0,    49,    55,    56,
       0,   119,    40,    21,     0,     0,     0,     0,     0,     0,
       0,    46,    26,     0,    85,    39,    82,    84,    86,     0,
       0,     0,     0,    27,     0,     0,    54,    50,     0,     0,
       1,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    34,     0,
      14,    12,     0,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,     0,     0,     3,     4,
       6,     7,     9,    10,     0,     0,     0,     8,    35,     0,
       0,     0,     0,    76,     0,    73,    75,    77,    52,   111,
      91,    92,    93,    94,    95,    96,   102,   103,   104,   105,
     107,   108,    97,    98,    99,   100,     0,     0,    68,    59,
      60,     0,     0,     0,     0,     0,     0,    32,    83,     0,
       0,     0,     0,    33,     0,    69,     0,     0,     5,     0,
       0,    11,     0,     0,     0,     0,     0,    23,     0,     0,
     114,   116,    67,    71,    41,    13,     0,     0,    87,     0,
      29,    30,     0,    51,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    74,     0,     0,    72,     0,    43,
       0,     0,     0,    78,   120,    19,    22,    17,    18,    36,
      38,    15,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,    53,   115,    42,     0,     0,    79,     0,     0,
      31,   121,    20,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,   158,   159,    38,   201,   174,   175,   262,   263,
      85,    86,    39,   176,    54,    55,    56,    40,    58,    59,
     160,   161
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int16 yypact[] =
{
     921,   -57,   -24,   -24,   471,    -5,   -28,   -28,   -28,  -120,
    -120,    -6,   -28,    -6,   -28,   -28,   -18,    10,   -24,   482,
     482,   -24,   -23,   -12,    -6,   299,   471,   471,    -6,   299,
       4,    35,  -120,  -120,  -120,  -120,    49,    69,  -120,   477,
      -9,     3,    42,    -6,  -120,  -120,  -120,  -120,  -120,   482,
     482,   471,  -120,  -120,   317,    70,  -120,   -13,    18,    59,
      -6,    -6,    -6,  -120,  -120,    44,    -6,  -120,  -120,  -120,
      -6,  -120,  -120,  -120,    -6,    34,    54,    20,   122,    -6,
     -28,  -120,  -120,    56,  -120,    71,  -120,  -120,   -19,    77,
     -13,    72,   108,    71,    -6,    -6,  -120,  -120,    -6,    -6,
    -120,    23,  -120,    21,   109,   471,   471,    75,    78,    79,
      73,   471,   404,   -28,  -120,  -120,   102,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   -15,
       8,   471,   404,    -6,    -6,    -6,   -28,  -120,  -120,    -6,
    -120,   100,   482,   482,  -120,  -120,    81,   299,   482,   921,
     921,   471,    88,   -28,    -6,  -120,    10,    10,    23,  -120,
    -120,  -120,  -120,    85,   116,   -28,    91,  -120,  -120,    10,
     107,   482,    97,  -120,   130,   127,  -120,   -13,   128,  -120,
     140,   140,   140,   140,   140,   140,    70,    70,    70,    70,
    -120,  -120,  -120,  -120,  -120,  -120,   113,   139,  -120,  -120,
    -120,   171,   131,    -6,   132,   138,   164,  -120,  -120,     1,
     389,   551,   142,  -120,    -6,  -120,   149,   921,  -120,   471,
     404,  -120,   172,   150,   155,   212,   -16,  -120,   404,   482,
     137,  -120,  -120,   -28,  -120,  -120,   482,   482,  -120,   921,
    -120,  -120,   471,  -120,   -24,   625,   143,   157,    33,   159,
    -120,   482,   471,   471,  -120,   218,   471,  -120,   221,   140,
     699,   165,   182,   180,  -120,  -120,  -120,  -120,   158,  -120,
     140,  -120,   156,   174,   163,   482,  -120,   921,   921,   -24,
     482,   215,  -120,  -120,   140,   773,   847,  -120,    98,   471,
    -120,  -120,  -120,  -120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,    89,    -7,    19,  -114,  -120,   -21,   123,
     226,   112,  -119,    30,   203,   175,   -42,    -2,    94,    50,
    -120,  -120
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -120
static const yytype_int16 yytable[] =
{
      46,    46,    57,    61,    62,    63,    64,   114,   115,    60,
      66,   129,    68,    69,   252,    70,    75,   129,   197,    79,
     130,   103,    43,    88,    90,    90,   130,    88,    96,   156,
     210,   211,   102,   106,    53,   104,   107,    94,   108,    32,
     109,   110,    44,    32,   157,   123,   124,    81,    71,    90,
      42,    72,    32,    82,   192,    87,    89,    91,   148,    87,
      44,   253,    32,    98,   123,   124,    73,    74,   105,   100,
      44,    32,   142,   125,   126,    32,    71,   194,   145,   238,
     111,   116,    99,    95,  -119,   190,   191,    71,    32,    42,
     162,   112,   125,   126,    41,   131,    47,    47,   245,   140,
      32,   163,   267,    90,    90,    65,   247,    67,   132,    90,
     177,   178,    76,   136,   254,    80,   127,   128,    83,   141,
     260,   146,    92,   147,    97,    45,    48,   193,   195,    90,
     177,   149,   150,    41,   202,   166,   167,   113,   151,   165,
     171,   172,   123,   124,   168,    88,   207,   169,   170,    90,
     179,   214,   204,   164,   133,   134,   135,   213,   285,   286,
     137,   196,   219,   221,   138,   220,   123,   124,   139,   222,
     125,   126,   224,   144,   143,   226,   292,    87,   227,   228,
     229,   212,   123,   124,   123,   124,   232,   231,   152,   153,
     236,   230,   154,   155,   125,   126,   233,   235,   244,    42,
      42,   242,   248,   102,   102,   266,   216,   217,   123,   124,
     125,   126,   125,   126,   256,   249,   237,    90,   177,   223,
     250,   265,    77,    78,   269,   277,   177,   198,   199,   200,
     278,   202,   279,   203,   281,   280,   125,   126,   102,   282,
      90,   283,    46,    41,    41,   289,   268,   218,   215,   246,
      90,    90,   257,   102,    90,    93,   123,   124,   287,   208,
      42,    42,   123,   124,   251,   123,   124,    42,     0,     0,
     273,     0,   261,   275,     0,     0,     0,    46,   102,   102,
       0,     0,   271,   272,   125,   126,   274,    90,     0,    42,
     125,   126,     0,   125,   126,    42,     0,   234,   186,   187,
     188,   189,     0,     0,    41,    41,     0,     0,   243,     0,
      42,    41,     0,     0,     0,     0,     0,     0,     0,   293,
     180,   181,   182,   183,   184,   185,     0,    42,    42,     0,
       0,     0,     0,    41,     0,    42,    42,     0,    47,    41,
       0,     0,     0,    49,    50,   205,   206,   117,    51,     0,
       0,   209,     0,     0,    41,     0,   118,   119,   120,   121,
     122,   123,   124,     0,    52,    31,    32,     0,    84,     0,
       0,    41,    41,    47,   225,     0,     0,     0,     0,    41,
      41,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,     0,     1,     2,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,     0,   255,     0,     0,     0,     0,     0,     0,   258,
     259,     0,    26,     0,   239,   240,    27,    28,    49,    50,
       0,    29,    30,    51,   270,    31,    32,    33,     0,     0,
       0,     0,     0,    34,    35,    36,     0,     0,     0,    52,
      31,    32,     0,   173,     0,     0,     0,     0,   284,     0,
       1,     2,     3,   288,     4,     5,     6,     7,     8,     9,
      10,    11,     0,    12,    13,    14,    15,    16,     0,     0,
       0,    17,    18,    19,    20,    21,    22,     0,   101,    23,
      24,     0,     0,    25,     0,    49,    50,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    49,    50,     0,     0,
      26,    51,     0,     0,    27,    28,    52,    31,    32,    29,
      30,     0,     0,    31,    32,    33,     0,    52,    31,     0,
       0,    34,    35,    36,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
       0,     0,   241,    29,    30,     0,     0,    31,    32,    33,
       0,     0,     0,     0,     0,    34,    35,    36,     1,     2,
       3,     0,     4,     5,     6,     7,     8,     9,    10,    11,
       0,    12,    13,    14,    15,    16,     0,   264,     0,    17,
      18,    19,    20,    21,    22,     0,     0,    23,    24,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,    31,    32,    33,     0,     0,     0,     0,     0,    34,
      35,    36,     1,     2,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,   276,    27,    28,     0,     0,
       0,    29,    30,     0,     0,    31,    32,    33,     0,     0,
       0,     0,     0,    34,    35,    36,     1,     2,     3,     0,
       4,     5,     6,     7,     8,     9,    10,    11,     0,    12,
      13,    14,    15,    16,     0,     0,     0,    17,    18,    19,
      20,    21,    22,     0,     0,    23,    24,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
      27,    28,     0,     0,   290,    29,    30,     0,     0,    31,
      32,    33,     0,     0,     0,     0,     0,    34,    35,    36,
       1,     2,     3,     0,     4,     5,     6,     7,     8,     9,
      10,    11,     0,    12,    13,    14,    15,    16,     0,   291,
       0,    17,    18,    19,    20,    21,    22,     0,     0,    23,
      24,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,    31,    32,    33,     0,     0,     0,     0,
       0,    34,    35,    36,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,    31,    32,    33,
       0,     0,     0,     0,     0,    34,    35,    36
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,     7,     8,    49,    50,    14,
      12,    30,    14,    15,    30,    33,    18,    30,   132,    21,
      39,    30,    79,    25,    26,    27,    39,    29,    30,     6,
     149,   150,    39,    30,     4,    44,    33,    33,    35,    67,
      37,    38,    66,    67,    21,    44,    45,    70,    66,    51,
       0,    69,    67,    65,    69,    25,    26,    27,    77,    29,
      66,    77,    67,    14,    44,    45,    16,    17,    77,     0,
      66,    67,    52,    72,    73,    67,    66,    69,    80,    78,
      77,    51,    33,    79,    49,   127,   128,    66,    67,    39,
      69,    49,    72,    73,     0,    77,     2,     3,   217,    65,
      67,   103,    69,   105,   106,    11,   220,    13,    49,   111,
     112,   113,    18,    69,   228,    21,    46,    47,    24,    65,
     239,    65,    28,    52,    30,     2,     3,   129,   130,   131,
     132,    54,    60,    39,   136,   105,   106,    43,    30,    30,
      67,   111,    44,    45,    69,   147,    65,    69,    69,   151,
      48,   153,    52,   103,    60,    61,    62,    69,   277,   278,
      66,   131,    77,   165,    70,    49,    44,    45,    74,    78,
      72,    73,    65,    79,    52,    78,    78,   147,    48,    52,
      52,   151,    44,    45,    44,    45,    15,    48,    94,    95,
      52,    78,    98,    99,    72,    73,    65,    65,    49,   149,
     150,    59,    30,   210,   211,    48,   156,   157,    44,    45,
      72,    73,    72,    73,    77,    65,    52,   219,   220,   169,
      65,    78,    19,    20,    65,    60,   228,   133,   134,   135,
      48,   233,    52,   139,    78,    77,    72,    73,   245,    65,
     242,    78,   244,   149,   150,    30,   248,   158,   154,   219,
     252,   253,   233,   260,   256,    29,    44,    45,   279,   147,
     210,   211,    44,    45,    52,    44,    45,   217,    -1,    -1,
      52,    -1,   242,    52,    -1,    -1,    -1,   279,   285,   286,
      -1,    -1,   252,   253,    72,    73,   256,   289,    -1,   239,
      72,    73,    -1,    72,    73,   245,    -1,   203,   123,   124,
     125,   126,    -1,    -1,   210,   211,    -1,    -1,   214,    -1,
     260,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,
     117,   118,   119,   120,   121,   122,    -1,   277,   278,    -1,
      -1,    -1,    -1,   239,    -1,   285,   286,    -1,   244,   245,
      -1,    -1,    -1,    44,    45,   142,   143,    30,    49,    -1,
      -1,   148,    -1,    -1,   260,    -1,    39,    40,    41,    42,
      43,    44,    45,    -1,    65,    66,    67,    -1,    69,    -1,
      -1,   277,   278,   279,   171,    -1,    -1,    -1,    -1,   285,
     286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     237,    -1,    53,    -1,    55,    56,    57,    58,    44,    45,
      -1,    62,    63,    49,   251,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    65,
      66,    67,    -1,    69,    -1,    -1,    -1,    -1,   275,    -1,
       3,     4,     5,   280,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    -1,    -1,    36,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      53,    49,    -1,    -1,    57,    58,    65,    66,    67,    62,
      63,    -1,    -1,    66,    67,    68,    -1,    65,    66,    -1,
      -1,    74,    75,    76,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    -1,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,    -1,
      -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      63,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    16,    17,    18,    19,    20,    24,    25,    26,
      27,    28,    29,    32,    33,    36,    53,    57,    58,    62,
      63,    66,    67,    68,    74,    75,    76,    81,    84,    92,
      97,    98,    99,    79,    66,    89,    97,    98,    89,    44,
      45,    49,    65,    93,    94,    95,    96,    97,    98,    99,
      14,    97,    97,    97,    97,    98,    97,    98,    97,    97,
      33,    66,    69,    99,    99,    97,    98,    94,    94,    97,
      98,    70,    65,    98,    69,    90,    91,    93,    97,    93,
      97,    93,    98,    90,    33,    79,    97,    98,    14,    33,
       0,    31,    84,    30,    44,    77,    30,    33,    35,    37,
      38,    77,    49,    98,    96,    96,    93,    30,    39,    40,
      41,    42,    43,    44,    45,    72,    73,    46,    47,    30,
      39,    77,    49,    98,    98,    98,    69,    98,    98,    98,
      65,    65,    52,    52,    98,    97,    65,    52,    77,    54,
      60,    30,    98,    98,    98,    98,     6,    21,    82,    83,
     100,   101,    69,    97,    99,    30,    93,    93,    69,    69,
      69,    67,    93,    69,    86,    87,    93,    97,    97,    48,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      96,    96,    69,    97,    69,    97,    93,    86,    98,    98,
      98,    85,    97,    98,    52,    94,    94,    65,    91,    94,
      92,    92,    93,    69,    97,    98,    99,    99,    83,    77,
      49,    97,    78,    99,    65,    94,    78,    48,    52,    52,
      78,    48,    15,    65,    98,    65,    52,    52,    78,    55,
      56,    61,    59,    98,    49,    92,    93,    86,    30,    65,
      65,    52,    30,    77,    86,    94,    77,    85,    94,    94,
      92,    93,    88,    89,    22,    78,    48,    69,    97,    65,
      94,    93,    93,    52,    93,    52,    56,    60,    48,    52,
      77,    78,    65,    78,    94,    92,    92,    88,    94,    30,
      61,    22,    78,    93
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1787 of yacc.c  */
#line 73 "grammar.y"
    {  pila_programas[idx_prg] = ((yyvsp[(1) - (1)].nodo)); /* stmtseq */ ;  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 76 "grammar.y"
    {
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
 	pila_programas[idx_prg] = ((yyvsp[(1) - (3)].nodo)); /* stmtseq */ ;  idx_prg++; }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 83 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* un procedimiento  */ }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 84 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(2) - (2)].nodo) ; /*varios procedim.*/ }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 89 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* un procedimiento  */ }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 90 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* una funcion  */ }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 95 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_num, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asignacion*/}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 96 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asign literal*/}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 97 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_alfa_var, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asign literal*/}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 98 "grammar.y"
    { (yyval.nodo) = nodo2(sumar_alfa, (yyvsp[(1) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); /*suma alfa*/}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 99 "grammar.y"
    { (yyval.nodo) = nodo2(dimensionar, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dimensionar un vector entero */ }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 100 "grammar.y"
    { (yyval.nodo) = nodo3(dimensionar, (yyvsp[(2) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(5) - (5)].nodo)); /*dimensionar un vector entero */ }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 101 "grammar.y"
    { (yyval.nodo) = nodo2(dimensionar_alfa, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dimensionar un vector strings */ }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 102 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(6) - (6)].nodo) );  }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 103 "grammar.y"
    { (yyval.nodo) = nodo4(asigna_vector, (yyvsp[(1) - (9)].nodo), (yyvsp[(3) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(9) - (9)].nodo) );  }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 104 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector_alfa, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(6) - (6)].nodo) );  }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 105 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector_alfa2, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(6) - (6)].nodo) );  }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 106 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector_alfa3, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(5) - (6)].nodo) );  }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 107 "grammar.y"
    { (yyval.nodo) = nodo4(asigna_vector_alfa4, (yyvsp[(1) - (9)].nodo), (yyvsp[(3) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(8) - (9)].nodo) );  }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 108 "grammar.y"
    {  (yyval.nodo) = nodo1(llamar, (yyvsp[(2) - (2)].nodo)) ;/*llamar proced.*/}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 109 "grammar.y"
    {  (yyval.nodo) = nodo3(llamar, (yyvsp[(3) - (6)].nodo), (yyvsp[(5) - (6)].nodo), (yyvsp[(1) - (6)].nodo)) ;/*llamar proced.*/}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 110 "grammar.y"
    {  (yyval.nodo) = nodo2(llamar, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo)) ;/*llamar proced.*/}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 111 "grammar.y"
    { (yyval.nodo) = nodo1( retorno, (yyvsp[(2) - (2)].nodo));    }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 112 "grammar.y"
    { (yyval.nodo) = nodo1( retorno, (yyvsp[(2) - (2)].nodo));    }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 113 "grammar.y"
    { (yyval.nodo) = nodo1(decimales, (yyvsp[(2) - (2)].nodo) ) ; }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 114 "grammar.y"
    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 115 "grammar.y"
    { (yyval.nodo) = nodo3(si, (yyvsp[(2) - (7)].nodo), (yyvsp[(4) - (7)].nodo), (yyvsp[(6) - (7)].nodo)); /*if con else */}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 116 "grammar.y"
    { (yyval.nodo) = nodo2(si, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*if sin else*/}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 117 "grammar.y"
    { (yyval.nodo) = nodo2(mientras, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*while*/}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 118 "grammar.y"
    {(yyval.nodo) = nodo4(desde, (yyvsp[(2) - (9)].nodo), (yyvsp[(4) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(8) - (9)].nodo)); /*for*/}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 119 "grammar.y"
    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)) ;  }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 120 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[(3) - (4)].nodo)) ;  }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 121 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 122 "grammar.y"
    { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 123 "grammar.y"
    { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(5) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ;  }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 124 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[(1) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo)) ;  }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 125 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ;  }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 126 "grammar.y"
    { (yyval.nodo) = nodo1(mensaje,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 127 "grammar.y"
    {   (yyval.nodo) = nodo1(interpreta, (yyvsp[(2) - (2)].nodo));  }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 128 "grammar.y"
    { (yyval.nodo) = nodo4(graficos, (yyvsp[(2) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo));   }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 129 "grammar.y"
    { (yyval.nodo) = nodo4(dibuja_linea, (yyvsp[(2) - (8)].nodo), (yyvsp[(4) - (8)].nodo), (yyvsp[(6) - (8)].nodo), (yyvsp[(8) - (8)].nodo)) ; }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 130 "grammar.y"
    { (yyval.nodo) = nodo3(dibuja_circulo, (yyvsp[(2) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ; }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 131 "grammar.y"
    {(yyval.nodo)=nodo2(convertir_texto_a_numero, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo));}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 132 "grammar.y"
    {(yyval.nodo)=nodo2(convertir_numero_a_texto, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo));}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 133 "grammar.y"
    {  (yyval.nodo) = nodo1(interpreta, (yyvsp[(2) - (2)].nodo) );  }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 134 "grammar.y"
    { (yyval.nodo)=nodo0(stop, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 135 "grammar.y"
    { (yyval.nodo)=nodo2(abrir, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 136 "grammar.y"
    { (yyval.nodo)=nodo1(cerrar, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 137 "grammar.y"
    { (yyval.nodo) = nodo1(leer,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable numerica*/}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 138 "grammar.y"
    { (yyval.nodo)=nodo3(leer_archivo, (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo)); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 139 "grammar.y"
    { (yyval.nodo)=nodo2(escribir_archivo, (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 140 "grammar.y"
    { (yyval.nodo)=nodo4(escribir_archivo, (yyvsp[(3) - (8)].nodo), (yyvsp[(4) - (8)].nodo), (yyvsp[(6) - (8)].nodo), (yyvsp[(8) - (8)].nodo)); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 141 "grammar.y"
    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable alfa*/}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 142 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 143 "grammar.y"
    { (yyval.nodo)=nodo1(vaciar, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.nodo)=nodo0(continuar, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 145 "grammar.y"
    { (yyval.nodo)=nodo0(salir, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 146 "grammar.y"
    { (yyval.nodo) = nodo3(buscar_clave,  (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 147 "grammar.y"
    { (yyval.nodo) = nodo3(insertar_clave,  (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 148 "grammar.y"
    { (yyval.nodo) = nodo1(eliminar_clave,  (yyvsp[(2) - (2)].nodo)); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 149 "grammar.y"
    { (yyval.nodo)=nodo1(use_indice, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 150 "grammar.y"
    { (yyval.nodo)=nodo0(close_indice, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 151 "grammar.y"
    { (yyval.nodo) = nodo1(push,  (yyvsp[(2) - (2)].nodo)); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 152 "grammar.y"
    { (yyval.nodo) = nodo1(pop ,  (yyvsp[(2) - (2)].nodo)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 153 "grammar.y"
    { (yyval.nodo) = nodo1(actualizar, (yyvsp[(3) - (3)].nodo)); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 154 "grammar.y"
    { (yyval.nodo) = nodo3(definir_registro, (yyvsp[(2) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo));
                        pila_records[idx_rec] = (yyval.nodo)   ; 
			array_variables[(int) (yyvsp[(2) - (5)].nodo)->num].procedimiento = idx_rec  ;
			idx_rec++;
 }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 159 "grammar.y"
    { (yyval.nodo)=nodo2(buscar_registro, (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 160 "grammar.y"
    { (yyval.nodo)=nodo2(actualizar_registro, (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 161 "grammar.y"
    { (yyval.nodo) = nodo0(pausa, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 165 "grammar.y"
    { (yyval.nodo) = nodo2(listacampos, (yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo)); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 166 "grammar.y"
    { (yyval.nodo) = nodo3(listacampos, (yyvsp[(3) - (3)].nodo), (yyvsp[(1) - (3)].nodo), (yyvsp[(2) - (3)].nodo)); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 171 "grammar.y"
    {(yyval.nodo) = nodo1(lista_parametros, (yyvsp[(1) - (1)].nodo));}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 172 "grammar.y"
    { (yyval.nodo)=nodo2(lista_parametros, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 176 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 177 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 178 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 183 "grammar.y"
    {(yyval.nodo) = nodo1(lista_argumentos, (yyvsp[(1) - (1)].nodo));}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 184 "grammar.y"
    { (yyval.nodo) = nodo2(lista_argumentos, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 188 "grammar.y"
    {(yyval.nodo) = (yyvsp[(1) - (1)].nodo);}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 189 "grammar.y"
    {(yyval.nodo) = (yyvsp[(1) - (1)].nodo);}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 193 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo) ; /*lista expr*/ }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 194 "grammar.y"
    { (yyval.nodo)=nodo2 (secuencia, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo))  ; /*varias lista expr, separadas por coma*/ }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 198 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[(1) - (1)].nodo)); /*lista expresion2*/}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 199 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[(1) - (1)].nodo) ); /* un literal*/}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 200 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[(1) - (1)].nodo)); /* una variable literal*/}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 201 "grammar.y"
    { (yyval.nodo)=nodo2(imprimir_var_vectoralfa, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo)); /* una variable literal*/}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 205 "grammar.y"
    { (yyval.nodo) = nodo2(secuencia, (yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo)); /*una seq de comandos*/}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 206 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*un comando*/}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 210 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expresion2*/}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 211 "grammar.y"
    { (yyval.nodo) = nodo2(igualque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*igualdad*/}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 212 "grammar.y"
    { (yyval.nodo) = nodo2(noigualque,    (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*no igual*/}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 213 "grammar.y"
    { (yyval.nodo) = nodo2(menorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor que*/}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 214 "grammar.y"
    { (yyval.nodo) = nodo2(menorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor o igual que*/}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 215 "grammar.y"
    { (yyval.nodo) = nodo2(mayorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor que*/}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 216 "grammar.y"
    { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor o igual que*/}
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 217 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 218 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 219 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 220 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 224 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expr2*/}
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 225 "grammar.y"
    { (yyval.nodo) = nodo2(suma, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*suma*/}
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 226 "grammar.y"
    { (yyval.nodo) = nodo2(resta, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*resta*/}
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 227 "grammar.y"
    { (yyval.nodo) = nodo2(or, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*or*/}
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 228 "grammar.y"
    { (yyval.nodo) = nodo2(and, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*and*/}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 232 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 233 "grammar.y"
    { (yyval.nodo) = nodo2(multiplica, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*multiplicar*/}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 234 "grammar.y"
    { (yyval.nodo) = nodo2 (divide, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dividir*/}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 238 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (2)].nodo); /*positivo*/}
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 239 "grammar.y"
    { (yyval.nodo) = nodo1(negativo, (yyvsp[(2) - (2)].nodo)); /*negativo*/}
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 240 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (3)].nodo); /*expr enter parentesis*/}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 241 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo); /*numero*/}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 242 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador variable*/}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 243 "grammar.y"
    { (yyval.nodo) = nodo2(evalua_vector, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo));   }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 244 "grammar.y"
    { (yyval.nodo) = nodo3(evalua_vector, (yyvsp[(1) - (7)].nodo), (yyvsp[(3) - (7)].nodo), (yyvsp[(6) - (7)].nodo));   }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 245 "grammar.y"
    {  (yyval.nodo) = nodo2(llamar, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo)) ;/*llamar proced.*/}
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 249 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador string*/}
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 252 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo);  /* nombre designador */ }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 255 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo) ;  /*designador proced.*/ }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 259 "grammar.y"
    { 
			(yyval.nodo) = nodo2(procedimiento, (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo)) ;/*un procedimiento*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[(2) - (4)].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[(2) - (4)].nodo)->num].tipo = 'P'  ;
                        printf("P: %s\n", array_variables[(int) (yyvsp[(2) - (4)].nodo)->num].nombre);
			idx_prc++;
			}
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 270 "grammar.y"
    { 
			(yyval.nodo) = nodo3(funcion, (yyvsp[(2) - (7)].nodo), (yyvsp[(4) - (7)].nodo), (yyvsp[(6) - (7)].nodo)) ;/*una funcion*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[(2) - (7)].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[(2) - (7)].nodo)->num].tipo = 'F'  ;
                        printf("F: %s\n", array_variables[(int) (yyvsp[(2) - (7)].nodo)->num].nombre);
			idx_prc++;
			}
    break;


/* Line 1787 of yacc.c  */
#line 2577 "grammar.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 280 "grammar.y"



