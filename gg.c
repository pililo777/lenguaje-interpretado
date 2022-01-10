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
#line 3 "grammar.y"

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
/* Line 387 of yacc.c  */
#line 25 "grammar.y"

 ast * nodo;


/* Line 387 of yacc.c  */
#line 215 "grammar.tab.c"
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
#line 243 "grammar.tab.c"

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
#define YYFINAL  101
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1088

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  295

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    80,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    16,    18,    22,
      24,    28,    32,    37,    41,    47,    51,    58,    68,    75,
      82,    89,    99,   102,   109,   114,   117,   120,   123,   126,
     134,   140,   146,   156,   161,   166,   170,   174,   181,   187,
     194,   197,   200,   206,   215,   222,   226,   230,   233,   235,
     239,   242,   245,   251,   256,   265,   268,   271,   274,   276,
     278,   283,   288,   291,   294,   296,   299,   302,   306,   312,
     317,   322,   324,   327,   331,   333,   337,   339,   341,   343,
     345,   349,   351,   353,   355,   359,   361,   363,   365,   370,
     373,   375,   377,   381,   385,   389,   393,   397,   401,   405,
     409,   413,   417,   419,   423,   427,   431,   435,   437,   441,
     445,   448,   451,   455,   457,   459,   464,   472,   477,   479,
     481,   483,   488
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      82,     0,    -1,    93,    -1,    93,    31,    83,    -1,    84,
      -1,    83,    84,    -1,   101,    -1,   102,    -1,    99,    30,
      94,    -1,    61,    -1,    98,    30,    70,    -1,    98,    30,
      98,    -1,    98,    44,    30,    98,    -1,    25,    99,    66,
      -1,    25,    99,    66,    52,    66,    -1,    25,    98,    66,
      -1,    99,    78,    94,    79,    30,    94,    -1,    99,    78,
      94,    79,    78,    94,    79,    30,    94,    -1,    98,    78,
      94,    79,    30,    70,    -1,    98,    78,    94,    79,    30,
      98,    -1,    98,    30,    98,    78,    94,    79,    -1,    98,
      78,    94,    79,    30,    98,    78,    95,    79,    -1,    20,
     100,    -1,    98,    30,   100,    49,    87,    48,    -1,   100,
      49,    87,    48,    -1,     7,    94,    -1,     7,    98,    -1,
      32,    66,    -1,    63,    91,    -1,    53,    94,    54,    93,
      55,    93,    56,    -1,    53,    94,    54,    93,    56,    -1,
      57,    94,    60,    93,    62,    -1,    58,    99,    30,    94,
      59,    94,    60,    93,    62,    -1,    33,    99,    66,    66,
      -1,    64,    33,    99,    70,    -1,    20,    33,    99,    -1,
      99,    33,    70,    -1,    99,    35,    70,   100,    66,    66,
      -1,    99,    37,    70,    66,    66,    -1,    99,    38,    68,
      95,    52,    95,    -1,    36,    91,    -1,    20,    70,    -1,
      24,   100,    99,    99,    99,    -1,    26,    95,    52,    95,
      52,    95,    52,    95,    -1,    27,    95,    52,    95,    52,
      95,    -1,    28,    98,    99,    -1,    28,    99,    98,    -1,
      29,    71,    -1,    13,    -1,    16,    98,    99,    -1,    17,
      99,    -1,    64,    99,    -1,    64,    80,    99,    98,    99,
      -1,     3,    80,    99,    98,    -1,     3,    80,    99,    98,
      52,    95,    52,    66,    -1,    64,    98,    -1,    18,    98,
      -1,    19,    98,    -1,    75,    -1,    76,    -1,     8,    98,
      99,    99,    -1,     9,    98,    99,    99,    -1,    10,    98,
      -1,    11,    98,    -1,    12,    -1,     4,    90,    -1,     5,
      90,    -1,    77,    33,    99,    -1,    14,    99,    70,    86,
      15,    -1,     8,    14,    99,    99,    -1,    77,    14,    99,
      99,    -1,    69,    -1,    98,    66,    -1,    98,    66,    86,
      -1,    88,    -1,    88,    52,    87,    -1,    94,    -1,    70,
      -1,    98,    -1,    90,    -1,    90,    52,    89,    -1,    99,
      -1,    98,    -1,    92,    -1,    91,    52,    92,    -1,    94,
      -1,    70,    -1,    98,    -1,    98,    78,    95,    79,    -1,
      93,    85,    -1,    85,    -1,    95,    -1,    95,    30,    95,
      -1,    95,    39,    95,    -1,    95,    40,    95,    -1,    95,
      41,    95,    -1,    95,    42,    95,    -1,    95,    43,    95,
      -1,    98,    30,    70,    -1,    98,    30,    98,    -1,    98,
      39,    70,    -1,    98,    39,    98,    -1,    96,    -1,    95,
      44,    96,    -1,    95,    45,    96,    -1,    95,    73,    96,
      -1,    95,    74,    96,    -1,    97,    -1,    96,    46,    97,
      -1,    96,    47,    97,    -1,    44,    97,    -1,    45,    97,
      -1,    49,    94,    48,    -1,    66,    -1,    99,    -1,    99,
      78,    94,    79,    -1,    99,    78,    94,    79,    78,    94,
      79,    -1,   100,    49,    87,    48,    -1,    68,    -1,    67,
      -1,    67,    -1,    21,   100,    93,    22,    -1,     6,   100,
      49,    89,    48,    93,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    78,    85,    86,    91,    92,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   162,
     163,   164,   168,   169,   174,   175,   179,   180,   181,   186,
     187,   191,   192,   196,   197,   201,   202,   203,   204,   208,
     209,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   227,   228,   229,   230,   231,   235,   236,   237,
     241,   242,   243,   244,   245,   246,   247,   248,   252,   255,
     258,   262,   273
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
  "FI", "WHILE", "FOR", "TO", "DO", "MAKETOKEN", "OD", "PRINT", "LEER",
  "BORRAR", "NUMBER", "NAME", "SNAME", "PAUSA", "LITERAL", "STRING",
  "DOBLECOMILLA", "OR", "AND", "CONTINUAR", "SALIR", "ACTUALIZAR", "'['",
  "']'", "'#'", "$accept", "ROOT", "procedimientos", "subprograma",
  "statement", "lista_campos", "lista_parametros", "parametro",
  "lista_argumentos", "variable", "lista_expr", "lista_expr2", "stmtseq",
  "expression", "expr2", "expr3", "expr4", "sdesignator", "designator",
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
     325,   326,   327,   328,   329,   330,   331,   332,    91,    93,
      35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    99,
     100,   101,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     1,     3,     1,
       3,     3,     4,     3,     5,     3,     6,     9,     6,     6,
       6,     9,     2,     6,     4,     2,     2,     2,     2,     7,
       5,     5,     9,     4,     4,     3,     3,     6,     5,     6,
       2,     2,     5,     8,     6,     3,     3,     2,     1,     3,
       2,     2,     5,     4,     8,     2,     2,     2,     1,     1,
       4,     4,     2,     2,     1,     2,     2,     3,     5,     4,
       4,     1,     2,     3,     1,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     4,     2,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       2,     2,     3,     1,     1,     4,     7,     4,     1,     1,
       1,     4,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,   119,   118,    71,    58,    59,     0,     0,    90,
       2,     0,     0,     0,     0,   119,    65,    82,    81,    66,
       0,     0,     0,   113,    25,    91,   102,   107,    26,   114,
       0,     0,     0,     0,    62,    63,     0,     0,    50,    56,
      57,     0,   120,    41,    22,     0,     0,     0,     0,     0,
       0,     0,    47,    27,     0,    86,    40,    83,    85,    87,
       0,     0,     0,     0,    28,     0,     0,    55,    51,     0,
       0,     1,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    35,
       0,    15,    13,     0,     0,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     3,
       4,     6,     7,    10,    11,     0,     0,     0,     8,    36,
       0,     0,     0,     0,    77,     0,    74,    76,    78,    53,
     112,    92,    93,    94,    95,    96,    97,   103,   104,   105,
     106,   108,   109,    98,    99,   100,   101,     0,     0,    69,
      60,    61,     0,     0,     0,     0,     0,     0,    33,    84,
       0,     0,     0,     0,    34,     0,    70,     0,     0,     5,
       0,     0,    12,     0,     0,     0,     0,     0,    24,     0,
       0,   115,   117,    68,    72,    42,    14,     0,     0,    88,
       0,    30,    31,     0,    52,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,    75,     0,     0,    73,     0,
      44,     0,     0,     0,    79,   121,    20,    23,    18,    19,
      37,    39,    16,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    54,   116,    43,     0,     0,    80,     0,
       0,    32,   122,    21,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    38,   159,   160,    39,   202,   175,   176,   263,   264,
      86,    87,    40,   177,    55,    56,    57,    41,    59,    60,
     161,   162
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -143
static const yytype_int16 yypact[] =
{
    1011,   -59,   -20,   -20,   254,    -3,   -41,   -41,   -41,  -143,
    -143,     2,   -41,     2,   -41,   -41,     7,    15,   -20,   302,
     302,   -20,    42,    48,     2,   248,   254,   254,     2,  -143,
     248,    -7,    59,  -143,  -143,  -143,  -143,     3,   115,  -143,
     561,   -12,     0,    71,     2,  -143,  -143,  -143,  -143,  -143,
     302,   302,   254,  -143,  -143,    12,    44,  -143,    45,    46,
      72,     2,     2,     2,  -143,  -143,    53,     2,  -143,  -143,
    -143,     2,  -143,  -143,  -143,     2,    61,    68,    74,    88,
       2,   -41,  -143,  -143,    79,  -143,    99,  -143,  -143,    -8,
     100,    45,    93,   127,    99,     2,     2,  -143,  -143,     2,
       2,  -143,    28,  -143,    13,   130,   254,   254,    85,    86,
     102,    95,   254,   296,   -41,  -143,  -143,   129,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
      26,    29,   254,   296,     2,     2,     2,   -41,  -143,  -143,
       2,  -143,   122,   302,   302,  -143,  -143,   113,   248,   302,
    1011,  1011,   254,   110,   -41,     2,  -143,    15,    15,    28,
    -143,  -143,  -143,  -143,   103,   133,   -41,   104,  -143,  -143,
      15,   124,   302,   119,  -143,   144,   141,  -143,    45,   150,
    -143,    94,    94,    94,    94,    94,    94,    44,    44,    44,
      44,  -143,  -143,  -143,  -143,  -143,  -143,   128,   157,  -143,
    -143,  -143,   191,   146,     2,   148,   114,   126,  -143,  -143,
      27,   486,   636,   156,  -143,     2,  -143,   174,  1011,  -143,
     254,   296,  -143,   192,   160,   167,   151,   -10,  -143,   296,
     302,   161,  -143,  -143,   -41,  -143,  -143,   302,   302,  -143,
    1011,  -143,  -143,   254,  -143,   -20,   711,   163,   198,    39,
     188,  -143,   302,   254,   254,  -143,   164,   254,  -143,   176,
      94,   786,   196,   210,   207,  -143,  -143,  -143,  -143,   183,
    -143,    94,  -143,   184,   199,   185,   302,  -143,  1011,  1011,
     -20,   302,   232,  -143,  -143,    94,   861,   936,  -143,    43,
     254,  -143,  -143,  -143,  -143
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,   107,    -1,    33,  -126,  -143,    -9,    56,
     240,   131,  -142,    37,   211,   -81,   -36,    -2,   173,   125,
    -143,  -143
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -121
static const yytype_int16 yytable[] =
{
      47,    47,    58,    62,    63,    64,    65,   198,   211,   212,
      67,    61,    69,    70,   115,   116,    76,    99,   104,    80,
     253,    44,   130,    89,    91,    91,    95,    33,    89,    97,
     107,   131,   105,   108,   157,   109,   100,   110,   111,   103,
      71,    54,   118,   187,   188,   189,   190,    45,    33,   158,
      91,   119,   120,   121,   122,   123,   124,   125,    46,    49,
      45,    33,    88,    90,    92,    33,   106,    88,   254,    45,
     149,   124,   125,    96,    72,   130,   246,    73,   112,   146,
      72,    33,    72,   163,   131,   126,   127,   124,   125,   117,
     128,   129,   191,   192,    33,   248,   193,    33,   261,   195,
     126,   127,   164,   255,    91,    91,   239,    33,  -120,   268,
      91,   178,   179,    82,    83,   101,   126,   127,   124,   125,
     113,   133,   293,   137,   132,    43,   143,   141,   194,   196,
      91,   178,   124,   125,   142,   203,   286,   287,   124,   125,
     144,    74,    75,   167,   168,   147,    89,   126,   127,   173,
      91,   148,   215,   151,   150,   169,   170,   152,   124,   125,
     166,   126,   127,   172,   222,    43,   237,   126,   127,   197,
     124,   125,   171,    42,   205,    48,    48,   180,   238,   208,
     214,   220,   221,   223,    66,    88,    68,   126,   127,   213,
     225,    77,   228,   229,    81,   124,   125,    84,   227,   126,
     127,    93,   230,   252,    98,   232,   233,   231,   124,   125,
     103,   103,   234,    42,   236,   243,   274,   114,    91,   178,
     124,   125,   249,   245,   126,   127,   250,   178,   276,   165,
      78,    79,   203,   251,   134,   135,   136,   126,   127,   257,
     138,    91,   266,    47,   139,   103,   267,   269,   140,   126,
     127,    91,    91,   145,   270,    91,   278,   247,   279,   280,
     103,   281,   290,   282,   284,   283,   219,   258,   153,   154,
      94,   288,   155,   156,     0,    43,    43,     0,    47,   209,
     262,     0,   217,   218,     0,   103,   103,     0,    91,     0,
     272,   273,    50,    51,   275,   224,     0,    52,    50,    51,
       0,     0,     0,    52,     0,     0,     0,   199,   200,   201,
       0,     0,     0,   204,    53,    32,    33,     0,    85,     0,
      53,    32,    33,    42,    42,     0,     0,   294,   216,   181,
     182,   183,   184,   185,   186,     0,    43,    43,     0,     0,
      50,    51,     0,    43,     0,    52,    50,    51,     0,     0,
       0,    52,     0,     0,   206,   207,     0,     0,     0,     0,
     210,     0,    53,    32,    33,    43,   174,     0,    53,    32,
       0,    43,     0,     0,     0,     0,     0,   235,     0,     0,
       0,     0,     0,   226,    42,    42,    43,     0,   244,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    43,     0,     0,     0,     0,     0,
       0,    43,    43,    42,     0,     0,     0,     0,    48,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,   259,   260,
       0,    42,    42,    48,     0,     0,     0,     0,     0,    42,
      42,     0,     0,   271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   285,     0,     1,
       2,     3,   289,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,     0,     0,     0,
      17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,   240,   241,    27,    28,     0,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    34,     0,     0,     0,     0,
       0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,   102,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,    37,     1,
       2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,     0,     0,     0,
      17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    27,    28,     0,     0,    29,   242,    30,
      31,     0,     0,    32,    33,    34,     0,     0,     0,     0,
       0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,     0,   265,     0,    17,    18,    19,    20,    21,
      22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,    37,     1,
       2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,     0,     0,     0,
      17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,   277,    27,    28,     0,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    34,     0,     0,     0,     0,
       0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
       0,     0,    29,   291,    30,    31,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,    37,     1,
       2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,     0,   292,     0,
      17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    27,    28,     0,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    34,     0,     0,     0,     0,
       0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
      15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,    37
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-143)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,     7,     8,   133,   150,   151,
      12,    14,    14,    15,    50,    51,    18,    14,    30,    21,
      30,    80,    30,    25,    26,    27,    33,    68,    30,    31,
      30,    39,    44,    33,     6,    35,    33,    37,    38,    40,
      33,     4,    30,   124,   125,   126,   127,    67,    68,    21,
      52,    39,    40,    41,    42,    43,    44,    45,     2,     3,
      67,    68,    25,    26,    27,    68,    78,    30,    78,    67,
      78,    44,    45,    80,    67,    30,   218,    70,    78,    81,
      67,    68,    67,    70,    39,    73,    74,    44,    45,    52,
      46,    47,   128,   129,    68,   221,    70,    68,   240,    70,
      73,    74,   104,   229,   106,   107,    79,    68,    49,    70,
     112,   113,   114,    71,    66,     0,    73,    74,    44,    45,
      49,    49,    79,    70,    78,     0,    52,    66,   130,   131,
     132,   133,    44,    45,    66,   137,   278,   279,    44,    45,
      52,    16,    17,   106,   107,    66,   148,    73,    74,   112,
     152,    52,   154,    60,    54,    70,    70,    30,    44,    45,
      30,    73,    74,    68,   166,    40,    52,    73,    74,   132,
      44,    45,    70,     0,    52,     2,     3,    48,    52,    66,
      70,    78,    49,    79,    11,   148,    13,    73,    74,   152,
      66,    18,    48,    52,    21,    44,    45,    24,    79,    73,
      74,    28,    52,    52,    31,    48,    15,    79,    44,    45,
     211,   212,    66,    40,    66,    59,    52,    44,   220,   221,
      44,    45,    30,    49,    73,    74,    66,   229,    52,   104,
      19,    20,   234,    66,    61,    62,    63,    73,    74,    78,
      67,   243,    79,   245,    71,   246,    48,   249,    75,    73,
      74,   253,   254,    80,    66,   257,    60,   220,    48,    52,
     261,    78,    30,    79,    79,    66,   159,   234,    95,    96,
      30,   280,    99,   100,    -1,   150,   151,    -1,   280,   148,
     243,    -1,   157,   158,    -1,   286,   287,    -1,   290,    -1,
     253,   254,    44,    45,   257,   170,    -1,    49,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    -1,   134,   135,   136,
      -1,    -1,    -1,   140,    66,    67,    68,    -1,    70,    -1,
      66,    67,    68,   150,   151,    -1,    -1,   290,   155,   118,
     119,   120,   121,   122,   123,    -1,   211,   212,    -1,    -1,
      44,    45,    -1,   218,    -1,    49,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    66,    67,    68,   240,    70,    -1,    66,    67,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      -1,    -1,    -1,   172,   211,   212,   261,    -1,   215,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,   286,   287,   240,    -1,    -1,    -1,    -1,   245,   246,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,
      -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,   237,   238,
      -1,   278,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,    -1,     3,
       4,     5,   281,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    -1,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    -1,    63,    64,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    -1,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    -1,    63,    64,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    56,    57,    58,    -1,    -1,    61,    -1,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    63,    64,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    -1,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    -1,    63,    64,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    16,    17,    18,    19,    20,    24,    25,    26,
      27,    28,    29,    32,    33,    36,    53,    57,    58,    61,
      63,    64,    67,    68,    69,    75,    76,    77,    82,    85,
      93,    98,    99,   100,    80,    67,    90,    98,    99,    90,
      44,    45,    49,    66,    94,    95,    96,    97,    98,    99,
     100,    14,    98,    98,    98,    98,    99,    98,    99,    98,
      98,    33,    67,    70,   100,   100,    98,    99,    95,    95,
      98,    99,    71,    66,    99,    70,    91,    92,    94,    98,
      94,    98,    94,    99,    91,    33,    80,    98,    99,    14,
      33,     0,    31,    85,    30,    44,    78,    30,    33,    35,
      37,    38,    78,    49,    99,    97,    97,    94,    30,    39,
      40,    41,    42,    43,    44,    45,    73,    74,    46,    47,
      30,    39,    78,    49,    99,    99,    99,    70,    99,    99,
      99,    66,    66,    52,    52,    99,    98,    66,    52,    78,
      54,    60,    30,    99,    99,    99,    99,     6,    21,    83,
      84,   101,   102,    70,    98,   100,    30,    94,    94,    70,
      70,    70,    68,    94,    70,    87,    88,    94,    98,    98,
      48,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    97,    97,    70,    98,    70,    98,    94,    87,    99,
      99,    99,    86,    98,    99,    52,    95,    95,    66,    92,
      95,    93,    93,    94,    70,    98,    99,   100,   100,    84,
      78,    49,    98,    79,   100,    66,    95,    79,    48,    52,
      52,    79,    48,    15,    66,    99,    66,    52,    52,    79,
      55,    56,    62,    59,    99,    49,    93,    94,    87,    30,
      66,    66,    52,    30,    78,    87,    95,    78,    86,    95,
      95,    93,    94,    89,    90,    22,    79,    48,    70,    98,
      66,    95,    94,    94,    52,    94,    52,    56,    60,    48,
      52,    78,    79,    66,    79,    95,    93,    93,    89,    95,
      30,    62,    22,    79,    94
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
#line 75 "grammar.y"
    {  pila_programas[idx_prg] = ((yyvsp[(1) - (1)].nodo)); /* stmtseq */ ;  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 78 "grammar.y"
    {
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
 	pila_programas[idx_prg] = ((yyvsp[(1) - (3)].nodo)); /* stmtseq */ ;  idx_prg++; }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 85 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* un procedimiento  */ }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 86 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(2) - (2)].nodo) ; /*varios procedim.*/ }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 91 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* un procedimiento  */ }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 92 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* una funcion  */ }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 97 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_num, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asignacion*/}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 98 "grammar.y"
    {    printf  (  "hello, world\n" ) ;     }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 99 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asign literal*/}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 100 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_alfa_var, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asign literal*/}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 101 "grammar.y"
    { (yyval.nodo) = nodo2(sumar_alfa, (yyvsp[(1) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); /*suma alfa*/}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 102 "grammar.y"
    { (yyval.nodo) = nodo2(dimensionar, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dimensionar un vector entero */ }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 103 "grammar.y"
    { (yyval.nodo) = nodo3(dimensionar, (yyvsp[(2) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(5) - (5)].nodo)); /*dimensionar un vector entero */ }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 104 "grammar.y"
    { (yyval.nodo) = nodo2(dimensionar_alfa, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dimensionar un vector strings */ }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 105 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(6) - (6)].nodo) );  }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 106 "grammar.y"
    { (yyval.nodo) = nodo4(asigna_vector, (yyvsp[(1) - (9)].nodo), (yyvsp[(3) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(9) - (9)].nodo) );  }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 107 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector_alfa, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(6) - (6)].nodo) );  }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 108 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector_alfa2, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(6) - (6)].nodo) );  }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 109 "grammar.y"
    { (yyval.nodo) = nodo3(asigna_vector_alfa3, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(5) - (6)].nodo) );  }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 110 "grammar.y"
    { (yyval.nodo) = nodo4(asigna_vector_alfa4, (yyvsp[(1) - (9)].nodo), (yyvsp[(3) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(8) - (9)].nodo) );  }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 111 "grammar.y"
    {  (yyval.nodo) = nodo1(llamar, (yyvsp[(2) - (2)].nodo)) ;/*llamar proced.*/}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 112 "grammar.y"
    {  (yyval.nodo) = nodo3(llamar, (yyvsp[(3) - (6)].nodo), (yyvsp[(5) - (6)].nodo), (yyvsp[(1) - (6)].nodo)) ;/*llamar proced.*/}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 113 "grammar.y"
    {  (yyval.nodo) = nodo2(llamar, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo)) ;/*llamar proced.*/}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 114 "grammar.y"
    { (yyval.nodo) = nodo1( retorno, (yyvsp[(2) - (2)].nodo));    }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 115 "grammar.y"
    { (yyval.nodo) = nodo1( retorno, (yyvsp[(2) - (2)].nodo));    }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 116 "grammar.y"
    { (yyval.nodo) = nodo1(decimales, (yyvsp[(2) - (2)].nodo) ) ; }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 117 "grammar.y"
    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 118 "grammar.y"
    { (yyval.nodo) = nodo3(si, (yyvsp[(2) - (7)].nodo), (yyvsp[(4) - (7)].nodo), (yyvsp[(6) - (7)].nodo)); /*if con else */}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 119 "grammar.y"
    { (yyval.nodo) = nodo2(si, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*if sin else*/}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 120 "grammar.y"
    { (yyval.nodo) = nodo2(mientras, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*while*/}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 121 "grammar.y"
    {(yyval.nodo) = nodo4(desde, (yyvsp[(2) - (9)].nodo), (yyvsp[(4) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(8) - (9)].nodo)); /*for*/}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 122 "grammar.y"
    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)) ;  }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 123 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[(3) - (4)].nodo)) ;  }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 124 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 125 "grammar.y"
    { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 126 "grammar.y"
    { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(5) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ;  }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 127 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[(1) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo)) ;  }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 128 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ;  }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 129 "grammar.y"
    { (yyval.nodo) = nodo1(mensaje,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 130 "grammar.y"
    {   (yyval.nodo) = nodo1(interpreta, (yyvsp[(2) - (2)].nodo));  }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 131 "grammar.y"
    { (yyval.nodo) = nodo4(graficos, (yyvsp[(2) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo));   }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 132 "grammar.y"
    { (yyval.nodo) = nodo4(dibuja_linea, (yyvsp[(2) - (8)].nodo), (yyvsp[(4) - (8)].nodo), (yyvsp[(6) - (8)].nodo), (yyvsp[(8) - (8)].nodo)) ; }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 133 "grammar.y"
    { (yyval.nodo) = nodo3(dibuja_circulo, (yyvsp[(2) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ; }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 134 "grammar.y"
    {(yyval.nodo)=nodo2(convertir_texto_a_numero, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo));}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 135 "grammar.y"
    {(yyval.nodo)=nodo2(convertir_numero_a_texto, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo));}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 136 "grammar.y"
    {  (yyval.nodo) = nodo1(interpreta, (yyvsp[(2) - (2)].nodo) );  }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 137 "grammar.y"
    { (yyval.nodo)=nodo0(stop, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 138 "grammar.y"
    { (yyval.nodo)=nodo2(abrir, (yyvsp[(2) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 139 "grammar.y"
    { (yyval.nodo)=nodo1(cerrar, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 140 "grammar.y"
    { (yyval.nodo) = nodo1(leer,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable numerica*/}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 141 "grammar.y"
    { (yyval.nodo)=nodo3(leer_archivo, (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo)); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 142 "grammar.y"
    { (yyval.nodo)=nodo2(escribir_archivo, (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 143 "grammar.y"
    { (yyval.nodo)=nodo4(escribir_archivo, (yyvsp[(3) - (8)].nodo), (yyvsp[(4) - (8)].nodo), (yyvsp[(6) - (8)].nodo), (yyvsp[(8) - (8)].nodo)); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable alfa*/}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 145 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 146 "grammar.y"
    { (yyval.nodo)=nodo1(vaciar, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 147 "grammar.y"
    { (yyval.nodo)=nodo0(continuar, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 148 "grammar.y"
    { (yyval.nodo)=nodo0(salir, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 149 "grammar.y"
    { (yyval.nodo) = nodo3(buscar_clave,  (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 150 "grammar.y"
    { (yyval.nodo) = nodo3(insertar_clave,  (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 151 "grammar.y"
    { (yyval.nodo) = nodo1(eliminar_clave,  (yyvsp[(2) - (2)].nodo)); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 152 "grammar.y"
    { (yyval.nodo)=nodo1(use_indice, (yyvsp[(2) - (2)].nodo)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 153 "grammar.y"
    { (yyval.nodo)=nodo0(close_indice, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 154 "grammar.y"
    { (yyval.nodo) = nodo1(push,  (yyvsp[(2) - (2)].nodo)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 155 "grammar.y"
    { (yyval.nodo) = nodo1(pop ,  (yyvsp[(2) - (2)].nodo)); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 156 "grammar.y"
    { (yyval.nodo) = nodo1(actualizar, (yyvsp[(3) - (3)].nodo)); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 157 "grammar.y"
    { (yyval.nodo) = nodo3(definir_registro, (yyvsp[(2) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo));
                        pila_records[idx_rec] = (yyval.nodo)   ; 
			array_variables[(int) (yyvsp[(2) - (5)].nodo)->num].procedimiento = idx_rec  ;
			idx_rec++;
 }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 162 "grammar.y"
    { (yyval.nodo)=nodo2(buscar_registro, (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 163 "grammar.y"
    { (yyval.nodo)=nodo2(actualizar_registro, (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 164 "grammar.y"
    { (yyval.nodo) = nodo0(pausa, (yyvsp[(1) - (1)].nodo)); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 168 "grammar.y"
    { (yyval.nodo) = nodo2(listacampos, (yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo)); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 169 "grammar.y"
    { (yyval.nodo) = nodo3(listacampos, (yyvsp[(3) - (3)].nodo), (yyvsp[(1) - (3)].nodo), (yyvsp[(2) - (3)].nodo)); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 174 "grammar.y"
    {(yyval.nodo) = nodo1(lista_parametros, (yyvsp[(1) - (1)].nodo));}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 175 "grammar.y"
    { (yyval.nodo)=nodo2(lista_parametros, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 179 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 180 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 181 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 186 "grammar.y"
    {(yyval.nodo) = nodo1(lista_argumentos, (yyvsp[(1) - (1)].nodo));}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 187 "grammar.y"
    { (yyval.nodo) = nodo2(lista_argumentos, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 191 "grammar.y"
    {(yyval.nodo) = (yyvsp[(1) - (1)].nodo);}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 192 "grammar.y"
    {(yyval.nodo) = (yyvsp[(1) - (1)].nodo);}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 196 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo) ; /*lista expr*/ }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 197 "grammar.y"
    { (yyval.nodo)=nodo2 (secuencia, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo))  ; /*varias lista expr, separadas por coma*/ }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 201 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[(1) - (1)].nodo)); /*lista expresion2*/}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 202 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[(1) - (1)].nodo) ); /* un literal*/}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 203 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[(1) - (1)].nodo)); /* una variable literal*/}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 204 "grammar.y"
    { (yyval.nodo)=nodo2(imprimir_var_vectoralfa, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo)); /* una variable literal*/}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 208 "grammar.y"
    { (yyval.nodo) = nodo2(secuencia, (yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo)); /*una seq de comandos*/}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 209 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*un comando*/}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 213 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expresion2*/}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 214 "grammar.y"
    { (yyval.nodo) = nodo2(igualque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*igualdad*/}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 215 "grammar.y"
    { (yyval.nodo) = nodo2(noigualque,    (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*no igual*/}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 216 "grammar.y"
    { (yyval.nodo) = nodo2(menorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor que*/}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 217 "grammar.y"
    { (yyval.nodo) = nodo2(menorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor o igual que*/}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 218 "grammar.y"
    { (yyval.nodo) = nodo2(mayorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor que*/}
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 219 "grammar.y"
    { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor o igual que*/}
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 220 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 221 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 222 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 223 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 227 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expr2*/}
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 228 "grammar.y"
    { (yyval.nodo) = nodo2(suma, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*suma*/}
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 229 "grammar.y"
    { (yyval.nodo) = nodo2(resta, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*resta*/}
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 230 "grammar.y"
    { (yyval.nodo) = nodo2(or, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*or*/}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 231 "grammar.y"
    { (yyval.nodo) = nodo2(and, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*and*/}
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 235 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 236 "grammar.y"
    { (yyval.nodo) = nodo2(multiplica, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*multiplicar*/}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 237 "grammar.y"
    { (yyval.nodo) = nodo2 (divide, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dividir*/}
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 241 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (2)].nodo); /*positivo*/}
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 242 "grammar.y"
    { (yyval.nodo) = nodo1(negativo, (yyvsp[(2) - (2)].nodo)); /*negativo*/}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 243 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (3)].nodo); /*expr enter parentesis*/}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 244 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo); /*numero*/}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 245 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador variable*/}
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 246 "grammar.y"
    { (yyval.nodo) = nodo2(evalua_vector, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo));   }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 247 "grammar.y"
    { (yyval.nodo) = nodo3(evalua_vector, (yyvsp[(1) - (7)].nodo), (yyvsp[(3) - (7)].nodo), (yyvsp[(6) - (7)].nodo));   }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 248 "grammar.y"
    {  (yyval.nodo) = nodo2(llamar, (yyvsp[(1) - (4)].nodo), (yyvsp[(3) - (4)].nodo)) ;/*llamar proced.*/}
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 252 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador string*/}
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 255 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo);  /* nombre designador */ }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 258 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo) ;  /*designador proced.*/ }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 262 "grammar.y"
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

  case 122:
/* Line 1787 of yacc.c  */
#line 273 "grammar.y"
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
#line 2603 "grammar.tab.c"
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
#line 283 "grammar.y"



