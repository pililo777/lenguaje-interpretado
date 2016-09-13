/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "grammar.y" /* yacc.c:339  */

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

#line 88 "grammar.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
    BUSCAR = 259,
    INSERTAR = 260,
    ELIMINAR = 261,
    USE_INDICE = 262,
    CLOSE_INDICE = 263,
    STOP = 264,
    REGISTRO = 265,
    FINREGISTRO = 266,
    ABRIR = 267,
    CERRAR = 268,
    MOSTRAR = 269,
    VACIAR = 270,
    LLAMAR = 271,
    PROC = 272,
    END = 273,
    PROCNAME = 274,
    GRAFICOS = 275,
    DIM = 276,
    LINEA = 277,
    CIRCULO = 278,
    CONVERTIR = 279,
    EVALUAR = 280,
    EQ = 281,
    TERMINAR = 282,
    DECIMALES = 283,
    VENTANA = 284,
    FIN = 285,
    BOTON = 286,
    MENSAJE = 287,
    ETIQUETA = 288,
    TEXTO = 289,
    NE = 290,
    LT = 291,
    LE = 292,
    GT = 293,
    GE = 294,
    PLUS = 295,
    MINUS = 296,
    MULT = 297,
    DIVIDE = 298,
    RPAREN = 299,
    LPAREN = 300,
    ASSIGN = 301,
    SEMICOLON = 302,
    COMMA = 303,
    IF = 304,
    THEN = 305,
    ELSE = 306,
    FI = 307,
    WHILE = 308,
    FOR = 309,
    TO = 310,
    DO = 311,
    OD = 312,
    PRINT = 313,
    LEER = 314,
    BORRAR = 315,
    NUMBER = 316,
    NAME = 317,
    SNAME = 318,
    LITERAL = 319,
    DOBLECOMILLA = 320,
    OR = 321,
    AND = 322,
    CONTINUAR = 323,
    SALIR = 324,
    ACTUALIZAR = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 24 "grammar.y" /* yacc.c:355  */

 ast * nodo;

#line 203 "grammar.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "grammar.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  87
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   794

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    73,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    75,    82,    83,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   142,   143,   147,
     148,   153,   154,   158,   159,   160,   161,   167,   168,   172,
     173,   174,   175,   176,   177,   178,   179,   183,   184,   185,
     186,   187,   191,   192,   193,   197,   198,   199,   200,   201,
     202,   206,   209,   212,   216
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "GUARDAR", "BUSCAR", "INSERTAR",
  "ELIMINAR", "USE_INDICE", "CLOSE_INDICE", "STOP", "REGISTRO",
  "FINREGISTRO", "ABRIR", "CERRAR", "MOSTRAR", "VACIAR", "LLAMAR", "PROC",
  "END", "PROCNAME", "GRAFICOS", "DIM", "LINEA", "CIRCULO", "CONVERTIR",
  "EVALUAR", "EQ", "TERMINAR", "DECIMALES", "VENTANA", "FIN", "BOTON",
  "MENSAJE", "ETIQUETA", "TEXTO", "NE", "LT", "LE", "GT", "GE", "PLUS",
  "MINUS", "MULT", "DIVIDE", "RPAREN", "LPAREN", "ASSIGN", "SEMICOLON",
  "COMMA", "IF", "THEN", "ELSE", "FI", "WHILE", "FOR", "TO", "DO", "OD",
  "PRINT", "LEER", "BORRAR", "NUMBER", "NAME", "SNAME", "LITERAL",
  "DOBLECOMILLA", "OR", "AND", "CONTINUAR", "SALIR", "ACTUALIZAR", "'['",
  "']'", "'#'", "$accept", "ROOT", "procedimientos", "statement",
  "lista_campos", "lista_expr", "lista_expr2", "stmtseq", "expression",
  "expr2", "expr3", "expr4", "sdesignator", "designator",
  "proc_designator", "procedimiento", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    91,    93,    35
};
# endif

#define YYPACT_NINF -121

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     724,   -69,    -7,   -39,   -39,   -39,  -121,  -121,   -33,   -39,
     -33,   -39,   -39,   -20,   -28,   -30,    91,    91,   -30,   -27,
       3,   -33,   215,    82,    82,   -33,   215,    14,  -121,  -121,
    -121,  -121,    45,    54,  -121,   384,    -4,    -3,   -33,   -33,
     -33,   -33,  -121,  -121,     7,   -33,  -121,  -121,  -121,   -33,
    -121,  -121,  -121,   -33,    19,    23,    91,    91,    82,  -121,
     157,     4,  -121,    21,   174,   -33,   -39,  -121,  -121,    32,
    -121,    46,  -121,  -121,    22,   -19,    25,    71,    42,    73,
      46,   -33,   -33,  -121,  -121,   -33,   -33,  -121,    90,  -121,
     -13,    86,    82,    82,    44,    49,    56,    61,    82,   -39,
     -33,   -33,   -33,   -39,  -121,  -121,   -33,  -121,  -121,  -121,
    -121,    85,    91,    91,    91,    91,    91,    91,    91,    82,
      91,  -121,  -121,    69,   215,    91,    91,    91,    91,    91,
      91,    75,    91,   724,   724,    82,    77,   -39,   -33,  -121,
     -28,    90,  -121,  -121,    64,   -39,    70,  -121,  -121,   -28,
      93,    91,    84,   101,  -121,  -121,  -121,   152,   104,   -33,
    -121,     4,     4,   186,     4,     4,  -121,  -121,    94,   202,
    -121,  -121,    29,    29,    29,    29,    29,    29,  -121,    38,
     316,   452,   112,  -121,   -33,  -121,   724,  -121,    82,  -121,
     145,   114,   115,   206,   151,   130,  -121,   -39,  -121,    91,
    -121,    91,  -121,   724,  -121,  -121,    82,  -121,   520,   107,
      27,   121,  -121,    91,    82,   122,  -121,   218,    29,   588,
     131,  -121,  -121,  -121,  -121,  -121,    29,  -121,  -121,    91,
    -121,   724,    29,   656,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    54,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    91,
      48,    49,     0,     0,    68,     2,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,    40,    46,    47,     0,
      93,    31,    16,     0,     0,     0,     0,     0,     0,    88,
       0,    77,    82,    89,     0,     0,     0,    37,    17,     0,
      64,    30,    61,    63,    69,    65,     0,     0,     0,     0,
      18,     0,     0,    45,    41,     0,     0,     1,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    25,     0,    11,    10,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     3,     4,     7,     8,     0,     0,     6,    26,     0,
       0,     0,     0,    43,    57,    50,    51,     0,     0,     0,
      87,    78,    79,     0,    80,    81,    83,    84,     0,     0,
      23,    62,    70,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,    24,     0,    58,     0,     5,     0,     9,
       0,     0,     0,     0,     0,     0,    56,    59,    32,     0,
      90,     0,    66,     0,    20,    21,     0,    42,     0,     0,
       0,     0,    28,     0,     0,     0,    60,     0,    34,     0,
       0,    94,    15,    13,    14,    27,    29,    12,    44,     0,
      19,     0,    33,     0,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,   -34,    -8,   165,    68,  -120,   102,   -11,
     -96,   -45,   146,     0,   -12,    52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    33,   141,    34,   157,    71,    72,    35,    73,    74,
      61,    62,    36,    63,    52,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,    89,    53,    39,    38,    60,    64,   131,    44,    49,
      46,   109,   110,   180,   181,    55,   161,   162,    66,   164,
     165,    69,    90,    93,    29,    79,    94,    84,    95,    28,
      96,    97,    28,    29,    50,    37,    91,    67,    99,   100,
     101,   102,    50,    81,    51,   104,   117,   118,   125,   105,
      29,   143,   132,   106,    87,    85,    29,   126,   127,   128,
     129,   130,   112,   113,    68,   121,   208,    92,    98,   112,
     113,   103,   166,   167,    86,   133,    28,    29,   112,   113,
     107,   136,   137,   219,   108,   138,   139,    82,   115,   116,
      29,   223,   119,   123,   124,   115,   116,   131,   134,   135,
     154,   155,   156,   163,   115,   116,   159,   140,   148,   169,
     202,   233,   145,   149,   172,   173,   174,   175,   176,   177,
     150,   179,    56,    57,   151,    76,    78,    58,   186,   160,
     170,    56,    57,    37,    37,   188,    58,   191,   185,   178,
     193,   183,   190,    59,    28,    29,    89,    89,    40,    41,
      42,    43,    59,    28,   192,    45,   194,    47,    48,   198,
     111,    54,   195,   196,    65,   197,   200,   206,    75,    77,
      77,   210,    75,    83,    89,   211,   212,   214,   215,   222,
      37,    37,   225,   228,   207,    89,    37,   231,   217,   216,
     218,    80,   171,   187,   146,   147,     0,   112,   113,    89,
     152,     0,   226,    37,    77,   114,     0,     0,    37,     0,
       0,     0,   122,     0,   112,   113,     0,     0,   232,    37,
       0,   168,   120,   115,   116,     0,   112,   113,     0,     0,
       0,    37,     0,    37,   199,     0,   144,   182,    77,    77,
     115,   116,   112,   113,    77,   153,   112,   113,     0,   158,
     201,     0,   115,   116,   213,    56,    57,     0,   112,   113,
      58,     0,     0,     0,     0,    77,   229,     0,   115,   116,
      75,     0,   115,   116,     0,     0,    59,    28,    29,    70,
       0,    77,     0,   184,   115,   116,     0,     0,     0,     0,
     209,   189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,     0,     0,   227,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,     0,    77,     0,    14,    15,    16,    17,
      18,    19,     0,   158,    20,    21,     0,     0,    22,     0,
       0,     0,    77,     0,     0,     0,   224,     0,     0,     0,
      77,     0,     0,     0,     0,    23,     0,   203,   204,    24,
      25,     0,     0,     0,    26,    27,     0,     0,    28,    29,
       0,     0,     0,     0,    30,    31,    32,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,     0,     0,     0,    14,    15,    16,    17,    18,    19,
       0,    88,    20,    21,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,    24,    25,     0,
       0,     0,    26,    27,     0,     0,    28,    29,     0,     0,
       0,     0,    30,    31,    32,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,     0,
       0,     0,    14,    15,    16,    17,    18,    19,     0,     0,
      20,    21,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,    24,    25,     0,     0,   205,
      26,    27,     0,     0,    28,    29,     0,     0,     0,     0,
      30,    31,    32,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,    13,     0,   221,     0,
      14,    15,    16,    17,    18,    19,     0,     0,    20,    21,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,    24,    25,     0,     0,     0,    26,    27,
       0,     0,    28,    29,     0,     0,     0,     0,    30,    31,
      32,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,     0,     0,     0,    14,    15,
      16,    17,    18,    19,     0,     0,    20,    21,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
     230,    24,    25,     0,     0,     0,    26,    27,     0,     0,
      28,    29,     0,     0,     0,     0,    30,    31,    32,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,     0,     0,     0,    14,    15,    16,    17,
      18,    19,     0,     0,    20,    21,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,    24,
      25,     0,     0,   234,    26,    27,     0,     0,    28,    29,
       0,     0,     0,     0,    30,    31,    32,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,     0,     0,     0,    14,    15,    16,    17,    18,    19,
       0,     0,    20,    21,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,    24,    25,     0,
       0,     0,    26,    27,     0,     0,    28,    29,     0,     0,
       0,     0,    30,    31,    32
};

static const yytype_int16 yycheck[] =
{
       0,    35,    14,    10,    73,    16,    17,    26,     8,    29,
      10,    56,    57,   133,   134,    15,   112,   113,    18,   115,
     116,    21,    26,    26,    63,    25,    29,    27,    31,    62,
      33,    34,    62,    63,    62,    35,    40,    64,    38,    39,
      40,    41,    62,    29,    64,    45,    42,    43,    26,    49,
      63,    64,    71,    53,     0,    10,    63,    35,    36,    37,
      38,    39,    40,    41,    61,    65,   186,    71,    71,    40,
      41,    64,   117,   118,    29,    50,    62,    63,    40,    41,
      61,    81,    82,   203,    61,    85,    86,    73,    66,    67,
      63,    64,    71,    61,    48,    66,    67,    26,    56,    26,
     100,   101,   102,   114,    66,    67,   106,    17,    64,   120,
      72,   231,    26,    64,   125,   126,   127,   128,   129,   130,
      64,   132,    40,    41,    63,    23,    24,    45,   140,    44,
      61,    40,    41,   133,   134,    71,    45,   149,   138,    64,
     151,    64,    72,    61,    62,    63,   180,   181,     2,     3,
       4,     5,    61,    62,    61,     9,    72,    11,    12,   159,
      58,    15,    61,    11,    18,    61,    72,    55,    22,    23,
      24,    26,    26,    27,   208,    61,    61,    26,    48,    72,
     180,   181,    61,    61,   184,   219,   186,    56,   199,   197,
     201,    26,   124,   141,    92,    93,    -1,    40,    41,   233,
      98,    -1,   213,   203,    58,    48,    -1,    -1,   208,    -1,
      -1,    -1,    66,    -1,    40,    41,    -1,    -1,   229,   219,
      -1,   119,    48,    66,    67,    -1,    40,    41,    -1,    -1,
      -1,   231,    -1,   233,    48,    -1,    90,   135,    92,    93,
      66,    67,    40,    41,    98,    99,    40,    41,    -1,   103,
      48,    -1,    66,    67,    48,    40,    41,    -1,    40,    41,
      45,    -1,    -1,    -1,    -1,   119,    48,    -1,    66,    67,
     124,    -1,    66,    67,    -1,    -1,    61,    62,    63,    64,
      -1,   135,    -1,   137,    66,    67,    -1,    -1,    -1,    -1,
     188,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,   188,    -1,    20,    21,    22,    23,
      24,    25,    -1,   197,    28,    29,    -1,    -1,    32,    -1,
      -1,    -1,   206,    -1,    -1,    -1,   210,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,    59,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      52,    53,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    68,    69,    70,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    68,    69,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    12,
      13,    14,    15,    16,    20,    21,    22,    23,    24,    25,
      28,    29,    32,    49,    53,    54,    58,    59,    62,    63,
      68,    69,    70,    75,    77,    81,    86,    87,    73,    10,
      86,    86,    86,    86,    87,    86,    87,    86,    86,    29,
      62,    64,    88,    88,    86,    87,    40,    41,    45,    61,
      83,    84,    85,    87,    83,    86,    87,    64,    61,    87,
      64,    79,    80,    82,    83,    86,    82,    86,    82,    87,
      79,    29,    73,    86,    87,    10,    29,     0,    27,    77,
      26,    40,    71,    26,    29,    31,    33,    34,    71,    87,
      87,    87,    87,    64,    87,    87,    87,    61,    61,    85,
      85,    82,    40,    41,    48,    66,    67,    42,    43,    71,
      48,    87,    86,    61,    48,    26,    35,    36,    37,    38,
      39,    26,    71,    50,    56,    26,    87,    87,    87,    87,
      17,    76,    89,    64,    86,    26,    82,    82,    64,    64,
      64,    63,    82,    86,    87,    87,    87,    78,    86,    87,
      44,    84,    84,    83,    84,    84,    85,    85,    82,    83,
      61,    80,    83,    83,    83,    83,    83,    83,    64,    83,
      81,    81,    82,    64,    86,    87,    88,    89,    71,    86,
      72,    88,    61,    83,    72,    61,    11,    61,    87,    48,
      72,    48,    72,    51,    52,    57,    55,    87,    81,    82,
      26,    61,    61,    48,    26,    48,    78,    83,    83,    81,
      82,    18,    72,    64,    86,    61,    83,    82,    61,    48,
      52,    56,    83,    81,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    80,    80,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    87,    88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     3,     3,     3,     4,
       3,     3,     6,     6,     6,     6,     2,     2,     2,     7,
       5,     5,     9,     4,     4,     3,     3,     6,     5,     6,
       2,     2,     5,     8,     6,     3,     3,     2,     1,     3,
       2,     2,     5,     4,     7,     2,     2,     2,     1,     1,
       4,     4,     2,     2,     1,     3,     5,     4,     4,     2,
       3,     1,     3,     1,     1,     1,     4,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     2,     2,     3,     1,     1,
       4,     1,     1,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 72 "grammar.y" /* yacc.c:1646  */
    {  pila_programas[idx_prg] = ((yyvsp[0].nodo)); /* stmtseq */ ;  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); }
#line 1567 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "grammar.y" /* yacc.c:1646  */
    {
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
 	pila_programas[idx_prg] = ((yyvsp[-2].nodo)); /* stmtseq */ ;  idx_prg++; }
#line 1576 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 82 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* un procedimiento  */ }
#line 1582 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 83 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo) ; /*varios procedim.*/ }
#line 1588 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 87 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(asigna_num, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asignacion*/}
#line 1594 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 88 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
#line 1600 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 89 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(asigna_alfa_var, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
#line 1606 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 90 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(sumar_alfa, (yyvsp[-3].nodo), (yyvsp[0].nodo)); /*suma alfa*/}
#line 1612 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(dimensionar, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector entero */ }
#line 1618 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(dimensionar_alfa, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector strings */ }
#line 1624 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1630 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector_alfa, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1636 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector_alfa2, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1642 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector_alfa3, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo) );  }
#line 1648 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "grammar.y" /* yacc.c:1646  */
    {  (yyval.nodo) = nodo1(llamar, (yyvsp[0].nodo)) ;/*llamar proced.*/}
#line 1654 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(decimales, (yyvsp[0].nodo) ) ; }
#line 1660 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
#line 1666 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 100 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(si, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if con else */}
#line 1672 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 101 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(si, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if sin else*/}
#line 1678 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 102 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(mientras, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*while*/}
#line 1684 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 103 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo) = nodo4(desde, (yyvsp[-7].nodo), (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*for*/}
#line 1690 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 104 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1696 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 105 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[-1].nodo)) ;  }
#line 1702 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[0].nodo)) ;  }
#line 1708 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 107 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
#line 1714 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 108 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1720 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 109 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1726 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 110 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
#line 1732 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 111 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(mensaje,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
#line 1738 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 112 "grammar.y" /* yacc.c:1646  */
    {   (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo));  }
#line 1744 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 113 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo4(graficos, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo));   }
#line 1750 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 114 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo4(dibuja_linea, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
#line 1756 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 115 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(dibuja_circulo, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
#line 1762 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 116 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo)=nodo2(convertir_texto_a_numero, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
#line 1768 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 117 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo)=nodo2(convertir_numero_a_texto, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
#line 1774 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 118 "grammar.y" /* yacc.c:1646  */
    {  (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo) );  }
#line 1780 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 119 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(stop, (yyvsp[0].nodo)); }
#line 1786 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 120 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(abrir, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1792 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 121 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(cerrar, (yyvsp[0].nodo)); }
#line 1798 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 122 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(leer,  (yyvsp[0].nodo)) ; /*leer variable numerica*/}
#line 1804 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo3(leer_archivo, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1810 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 124 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(escribir_archivo, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1816 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 125 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo4(escribir_archivo, (yyvsp[-4].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1822 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 126 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[0].nodo)) ; /*leer variable alfa*/}
#line 1828 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 127 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(mostrar, (yyvsp[0].nodo)); }
#line 1834 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 128 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(vaciar, (yyvsp[0].nodo)); }
#line 1840 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 129 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(continuar, (yyvsp[0].nodo)); }
#line 1846 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 130 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(salir, (yyvsp[0].nodo)); }
#line 1852 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 131 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(buscar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1858 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 132 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(insertar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1864 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(eliminar_clave,  (yyvsp[0].nodo)); }
#line 1870 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(use_indice, (yyvsp[0].nodo)); }
#line 1876 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(close_indice, (yyvsp[0].nodo)); }
#line 1882 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(actualizar, (yyvsp[0].nodo)); }
#line 1888 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "grammar.y" /* yacc.c:1646  */
    {printf("uno...\n"); (yyval.nodo) = nodo3(definir_registro, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo));
                        pila_records[idx_rec] = (yyval.nodo)   ; 
			array_variables[(int) (yyvsp[-3].nodo)->num].procedimiento = idx_rec  ;
			idx_rec++;
 }
#line 1898 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 142 "grammar.y" /* yacc.c:1646  */
    {printf("dos...\n"); (yyval.nodo)=nodo2(buscar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1904 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "grammar.y" /* yacc.c:1646  */
    {printf("tres...\n"); (yyval.nodo)=nodo2(actualizar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1910 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 147 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(listacampos, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1916 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 148 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(listacampos, (yyvsp[0].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo)); }
#line 1922 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 153 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=(yyvsp[0].nodo) ; /*lista expr*/ }
#line 1928 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 154 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2 (secuencia, (yyvsp[-2].nodo), (yyvsp[0].nodo))  ; /*varias lista expr, separadas por coma*/ }
#line 1934 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 158 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[0].nodo)); /*lista expresion2*/}
#line 1940 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 159 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[0].nodo) ); /* un literal*/}
#line 1946 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 160 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[0].nodo)); /* una variable literal*/}
#line 1952 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 161 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(imprimir_var_vectoralfa, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /* una variable literal*/}
#line 1958 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(secuencia, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*una seq de comandos*/}
#line 1964 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*un comando*/}
#line 1970 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 172 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /* expresion2*/}
#line 1976 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 173 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(igualque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*igualdad*/}
#line 1982 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 174 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(noigualque,    (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*no igual*/}
#line 1988 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 175 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(menorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor que*/}
#line 1994 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 176 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(menorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor o igual que*/}
#line 2000 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 177 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(mayorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor que*/}
#line 2006 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 178 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor o igual que*/}
#line 2012 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 179 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2018 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 183 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /* expr2*/}
#line 2024 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 184 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(suma, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*suma*/}
#line 2030 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 185 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(resta, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*resta*/}
#line 2036 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 186 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(or, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*or*/}
#line 2042 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 187 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(and, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*and*/}
#line 2048 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 191 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2054 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 192 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(multiplica, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*multiplicar*/}
#line 2060 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 193 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2 (divide, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*dividir*/}
#line 2066 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 197 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*positivo*/}
#line 2072 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 198 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(negativo, (yyvsp[0].nodo)); /*negativo*/}
#line 2078 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 199 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); /*expr enter parentesis*/}
#line 2084 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 200 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo); /*numero*/}
#line 2090 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 201 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*designador variable*/}
#line 2096 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 202 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(evalua_vector, (yyvsp[-3].nodo), (yyvsp[-1].nodo));   }
#line 2102 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 206 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*designador string*/}
#line 2108 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 209 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);  /* nombre designador */ }
#line 2114 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 212 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo) ;  /*designador proced.*/ }
#line 2120 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 216 "grammar.y" /* yacc.c:1646  */
    { 
			(yyval.nodo) = nodo2(procedimiento, (yyvsp[-2].nodo), (yyvsp[-1].nodo)) ;/*un procedimiento*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[-2].nodo)->num].procedimiento = idx_prc  ;
			idx_prc++;
			}
#line 2132 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2136 "grammar.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 223 "grammar.y" /* yacc.c:1906  */



