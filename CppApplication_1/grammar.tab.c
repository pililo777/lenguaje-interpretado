/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "grammar.y"

#include "nodo.h"
extern ast * nodo0(tiponodo Tipo, ast * a);
extern ast * nodo1(tiponodo Tipo, ast * a);
extern ast * nodo2(tiponodo Tipo, ast * a, ast * b);
extern ast * nodo3(tiponodo Tipo, ast * a, ast * b, ast * c);
extern ast * nodo4(tiponodo Tipo, ast * a, ast * b, ast * c, ast * d);
extern ast * nodo5(tiponodo Tipo, ast * a, ast * b, ast * c, ast * d, ast * e);

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

#line 98 "grammar.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 233 "grammar.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  104
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1072

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

#define YYUNDEFTOK  2
#define YYMAXUTOK   333


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    81,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    82,    89,    90,    95,    96,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     167,   168,   169,   173,   174,   179,   180,   184,   185,   186,
     191,   192,   196,   197,   201,   202,   206,   207,   208,   209,
     213,   214,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   232,   233,   234,   235,   236,   240,   241,
     242,   246,   247,   248,   249,   250,   251,   252,   253,   257,
     260,   263,   267,   278
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
  "DIM", "LINEA", "CIRCULO", "RECTANGULO", "PUNTO", "CONVERTIR", "EVALUAR",
  "EQ", "TERMINAR", "DECIMALES", "VENTANA", "FIN", "BOTON", "MENSAJE",
  "ETIQUETA", "TEXTO", "NE", "LT", "LE", "GT", "GE", "PLUS", "MINUS",
  "MULT", "DIVIDE", "RPAREN", "LPAREN", "ASSIGN", "SEMICOLON", "COMMA",
  "IF", "THEN", "ELSE", "FI", "WHILE", "FOR", "TO", "DO", "OD", "PRINT",
  "LEER", "BORRAR", "NUMBER", "NAME", "SNAME", "PAUSA", "LITERAL",
  "STRING", "DOBLECOMILLA", "OR", "AND", "CONTINUAR", "SALIR",
  "ACTUALIZAR", "'['", "']'", "'#'", "$accept", "ROOT", "procedimientos",
  "subprograma", "statement", "lista_campos", "lista_parametros",
  "parametro", "lista_argumentos", "variable", "lista_expr", "lista_expr2",
  "stmtseq", "expression", "expr2", "expr3", "expr4", "sdesignator",
  "designator", "proc_designator", "procedimiento", "funcion", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    91,
      93,    35
};
# endif

#define YYPACT_NINF (-137)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-122)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     994,   -46,    17,    17,     2,    -5,   -28,   -28,   -28,  -137,
    -137,   -23,   -28,   -23,   -28,   -28,     5,   -14,    17,   313,
     313,   313,   313,    17,   -15,    25,   -23,   298,     2,     2,
     -23,   298,   -13,    16,  -137,  -137,  -137,  -137,     9,    63,
    -137,   538,   -18,    -1,    21,   -23,  -137,  -137,  -137,  -137,
    -137,   313,   313,     2,  -137,  -137,   146,    42,  -137,     1,
      18,    51,   -23,   -23,   -23,  -137,  -137,    46,   -23,  -137,
    -137,  -137,   -23,  -137,  -137,  -137,   -23,    55,    56,    73,
      90,   148,   157,   -23,   -28,  -137,  -137,    58,  -137,    72,
    -137,  -137,   -17,    79,     1,    67,   108,    72,   -23,   -23,
    -137,  -137,   -23,   -23,  -137,    11,  -137,    35,   109,     2,
       2,    71,    74,    75,    80,     2,   343,   -28,  -137,  -137,
     104,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   -19,     8,     2,   343,   -23,   -23,   -23,
     -28,  -137,  -137,   -23,  -137,   102,   313,   313,   313,   313,
    -137,  -137,    91,   298,   313,   994,   994,     2,    92,   -28,
     -23,  -137,   -14,   -14,    11,  -137,  -137,  -137,  -137,    88,
     117,   -28,    95,  -137,  -137,   -14,   105,   313,    96,  -137,
     121,   119,  -137,     1,   123,  -137,   182,   182,   182,   182,
     182,   182,    42,    42,    42,    42,  -137,  -137,  -137,  -137,
    -137,  -137,    99,   130,  -137,  -137,  -137,   192,   118,   -23,
     142,   170,   230,   235,   182,  -137,  -137,     0,   424,   614,
     149,  -137,   -23,  -137,   161,   994,  -137,     2,   343,  -137,
     181,   152,   160,   268,   -21,  -137,   343,   313,   151,  -137,
    -137,   -28,  -137,  -137,   313,   313,   313,  -137,   994,  -137,
    -137,     2,  -137,    17,   690,   153,   188,    12,   175,  -137,
     313,     2,     2,  -137,   279,     2,  -137,   281,   182,   283,
     766,   178,   193,   194,  -137,  -137,  -137,  -137,   167,  -137,
     182,  -137,   172,   180,   187,   313,   313,  -137,   994,   994,
      17,   313,   237,  -137,  -137,   182,   182,   842,   918,  -137,
      19,     2,  -137,  -137,  -137,  -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   119,    72,    59,    60,     0,     0,
      91,     2,     0,     0,     0,     0,   120,    66,    83,    82,
      67,     0,     0,     0,   114,    24,    92,   103,   108,    25,
     115,     0,     0,     0,     0,    63,    64,     0,     0,    51,
      57,    58,     0,   121,    40,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    26,     0,    87,    39,
      84,    86,    88,     0,     0,     0,     0,    27,     0,     0,
      56,    52,     0,     0,     1,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    34,     0,    14,    12,     0,     0,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     3,     4,     6,     7,     9,    10,
       0,     0,     0,     8,    35,     0,     0,     0,     0,    78,
       0,    75,    77,    79,    54,   113,    93,    94,    95,    96,
      97,    98,   104,   105,   106,   107,   109,   110,    99,   100,
     101,   102,     0,     0,    70,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    45,    32,    85,     0,     0,     0,
       0,    33,     0,    71,     0,     0,     5,     0,     0,    11,
       0,     0,     0,     0,     0,    23,     0,     0,   116,   118,
      69,    73,    41,    13,     0,     0,     0,    89,     0,    29,
      30,     0,    53,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    76,     0,     0,    74,     0,    43,     0,
       0,     0,     0,    80,   122,    19,    22,    17,    18,    36,
      38,    15,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,    55,   117,    42,    44,     0,     0,    81,
       0,     0,    31,   123,    20,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,   107,    -4,    37,  -118,  -137,   -11,    93,
     249,   132,  -136,   155,   253,   173,   -44,    -2,    98,    43,
    -137,  -137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    39,   164,   165,    40,   207,   180,   181,   272,   273,
      89,    90,    41,   182,    56,    57,    58,    42,    60,    61,
     166,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    48,    59,    63,    64,    65,    66,   118,   119,    62,
      68,   261,    70,    71,   107,   133,    77,   162,   203,   218,
     219,    83,    98,   102,   134,    92,    94,    94,   108,    92,
     100,   110,   163,   133,   111,    45,   112,   106,   113,   114,
      72,    34,   134,    44,   103,    46,   127,   128,    51,    52,
      34,    94,   198,    53,    73,    46,    34,    85,   262,    75,
      76,   109,   154,   104,    34,   127,   128,  -121,    99,    54,
      33,    34,   116,    73,   129,   130,    74,    34,   115,   200,
     247,    34,   151,   277,    44,    46,    34,   196,   197,   254,
     131,   132,    86,   129,   130,    47,    50,   135,    43,   304,
      49,    49,   136,    73,    34,   169,   168,    94,    94,    67,
     256,    69,   270,    94,   183,   184,    78,   140,   263,   127,
     128,    84,   144,   145,    87,   152,   153,   146,    96,   156,
     101,   199,   201,    94,   183,   155,   127,   128,   208,    43,
     157,   171,   174,   117,   147,   175,   176,   129,   130,   177,
     170,    92,   297,   298,   185,    94,   210,   222,   215,    55,
     137,   138,   139,   221,   129,   130,   141,   227,   228,   229,
     142,   235,   232,   236,   143,   230,   234,   237,   121,   238,
     239,   150,    91,    93,    95,   241,    91,   122,   123,   124,
     125,   126,   127,   128,   127,   128,   158,   159,    44,    44,
     160,   161,   148,   127,   128,   224,   225,   240,   120,   243,
     251,   149,   253,   257,   106,   106,   127,   128,   231,   258,
     129,   130,   129,   130,   244,    94,   183,   259,   127,   128,
     265,   129,   130,   275,   183,   204,   205,   206,   276,   208,
     288,   209,   279,   289,   129,   130,   291,   293,   290,    94,
     106,    48,   292,    43,    43,   278,   129,   130,   223,    94,
      94,    44,    44,    94,   172,   173,   106,   294,    44,   301,
     178,   226,    79,    80,    81,    82,   127,   128,   266,   299,
      97,   127,   128,     0,   245,   216,     0,     0,    48,   246,
     202,    44,     0,   106,   106,     0,     0,    44,     0,    94,
     192,   193,   194,   195,   129,   130,     0,   242,    91,   129,
     130,     0,   220,    44,   127,   128,    43,    43,     0,     0,
     252,     0,   260,    43,     0,   127,   128,   127,   128,   127,
     128,    44,    44,   283,     0,   285,     0,   286,     0,     0,
      44,    44,   129,   130,    51,    52,    43,     0,     0,    53,
       0,    49,    43,   129,   130,   129,   130,   129,   130,    51,
      52,     0,     0,     0,    53,    54,    33,    34,    43,    88,
       0,     0,     0,     0,   186,   187,   188,   189,   190,   191,
      54,    33,   255,     0,     0,     0,    43,    43,    49,    51,
      52,     0,     0,     0,    53,    43,    43,     0,     0,   211,
     212,   213,   214,     0,     0,     0,   271,   217,     0,     0,
      54,    33,    34,     0,   179,     0,   281,   282,     0,     0,
     284,     0,     0,     0,     0,     0,     0,     1,     2,     3,
     233,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,   305,     0,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   248,   249,    29,    30,     0,     0,     0,    31,    32,
     264,     0,    33,    34,    35,     0,     0,   267,   268,   269,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,   296,
       0,     1,     2,     3,   300,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
       0,   105,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,     0,     0,    33,    34,    35,     0,
       0,     0,     0,     0,    36,    37,    38,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,    29,    30,     0,     0,   250,    31,    32,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
      36,    37,    38,     1,     2,     3,     0,     4,     5,     6,
       7,     8,     9,    10,    11,     0,    12,    13,    14,    15,
      16,     0,   274,     0,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,    29,
      30,     0,     0,     0,    31,    32,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,    36,    37,    38,     1,
       2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,   287,    29,    30,     0,     0,     0,
      31,    32,     0,     0,    33,    34,    35,     0,     0,     0,
       0,     0,    36,    37,    38,     1,     2,     3,     0,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    12,    13,
      14,    15,    16,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,    29,    30,     0,     0,   302,    31,    32,     0,     0,
      33,    34,    35,     0,     0,     0,     0,     0,    36,    37,
      38,     1,     2,     3,     0,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,     0,
     303,     0,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,     0,     0,    33,    34,    35,     0,
       0,     0,     0,     0,    36,    37,    38,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,    29,    30,     0,     0,     0,    31,    32,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
      36,    37,    38
};

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,     7,     8,    51,    52,    14,
      12,    32,    14,    15,    32,    32,    18,     6,   136,   155,
     156,    23,    35,    14,    41,    27,    28,    29,    46,    31,
      32,    32,    21,    32,    35,    81,    37,    41,    39,    40,
      35,    69,    41,     0,    35,    68,    46,    47,    46,    47,
      69,    53,    71,    51,    68,    68,    69,    72,    79,    16,
      17,    79,    79,     0,    69,    46,    47,    51,    81,    67,
      68,    69,    51,    68,    74,    75,    71,    69,    79,    71,
      80,    69,    84,    71,    41,    68,    69,   131,   132,   225,
      48,    49,    67,    74,    75,     2,     3,    79,     0,    80,
       2,     3,    51,    68,    69,   107,    71,   109,   110,    11,
     228,    13,   248,   115,   116,   117,    18,    71,   236,    46,
      47,    23,    67,    67,    26,    67,    54,    54,    30,    62,
      32,   133,   134,   135,   136,    56,    46,    47,   140,    41,
      32,    32,    71,    45,    54,    71,    71,    74,    75,    69,
     107,   153,   288,   289,    50,   157,    54,   159,    67,     4,
      62,    63,    64,    71,    74,    75,    68,    79,    51,   171,
      72,    50,    67,    54,    76,    80,    80,    54,    32,    80,
      50,    83,    27,    28,    29,    67,    31,    41,    42,    43,
      44,    45,    46,    47,    46,    47,    98,    99,   155,   156,
     102,   103,    54,    46,    47,   162,   163,    15,    53,    67,
      61,    54,    51,    32,   218,   219,    46,    47,   175,    67,
      74,    75,    74,    75,    54,   227,   228,    67,    46,    47,
      79,    74,    75,    80,   236,   137,   138,   139,    50,   241,
      62,   143,    67,    50,    74,    75,    79,    67,    54,   251,
     254,   253,    80,   155,   156,   257,    74,    75,   160,   261,
     262,   218,   219,   265,   109,   110,   270,    80,   225,    32,
     115,   164,    19,    20,    21,    22,    46,    47,   241,   290,
      31,    46,    47,    -1,    54,   153,    -1,    -1,   290,    54,
     135,   248,    -1,   297,   298,    -1,    -1,   254,    -1,   301,
     127,   128,   129,   130,    74,    75,    -1,   209,   153,    74,
      75,    -1,   157,   270,    46,    47,   218,   219,    -1,    -1,
     222,    -1,    54,   225,    -1,    46,    47,    46,    47,    46,
      47,   288,   289,    54,    -1,    54,    -1,    54,    -1,    -1,
     297,   298,    74,    75,    46,    47,   248,    -1,    -1,    51,
      -1,   253,   254,    74,    75,    74,    75,    74,    75,    46,
      47,    -1,    -1,    -1,    51,    67,    68,    69,   270,    71,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      67,    68,   227,    -1,    -1,    -1,   288,   289,   290,    46,
      47,    -1,    -1,    -1,    51,   297,   298,    -1,    -1,   146,
     147,   148,   149,    -1,    -1,    -1,   251,   154,    -1,    -1,
      67,    68,    69,    -1,    71,    -1,   261,   262,    -1,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
     177,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,   301,    -1,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    -1,    -1,    -1,    64,    65,
     237,    -1,    68,    69,    70,    -1,    -1,   244,   245,   246,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
      -1,     3,     4,     5,   291,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    65,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    64,    65,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      64,    65,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    59,    60,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    -1,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    65,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,
      -1,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    16,    17,    18,    19,    20,    24,    25,    26,
      27,    28,    29,    30,    31,    34,    35,    38,    55,    59,
      60,    64,    65,    68,    69,    70,    76,    77,    78,    83,
      86,    94,    99,   100,   101,    81,    68,    91,    99,   100,
      91,    46,    47,    51,    67,    95,    96,    97,    98,    99,
     100,   101,    14,    99,    99,    99,    99,   100,    99,   100,
      99,    99,    35,    68,    71,   101,   101,    99,   100,    96,
      96,    96,    96,    99,   100,    72,    67,   100,    71,    92,
      93,    95,    99,    95,    99,    95,   100,    92,    35,    81,
      99,   100,    14,    35,     0,    33,    86,    32,    46,    79,
      32,    35,    37,    39,    40,    79,    51,   100,    98,    98,
      95,    32,    41,    42,    43,    44,    45,    46,    47,    74,
      75,    48,    49,    32,    41,    79,    51,   100,   100,   100,
      71,   100,   100,   100,    67,    67,    54,    54,    54,    54,
     100,    99,    67,    54,    79,    56,    62,    32,   100,   100,
     100,   100,     6,    21,    84,    85,   102,   103,    71,    99,
     101,    32,    95,    95,    71,    71,    71,    69,    95,    71,
      88,    89,    95,    99,    99,    50,    96,    96,    96,    96,
      96,    96,    97,    97,    97,    97,    98,    98,    71,    99,
      71,    99,    95,    88,   100,   100,   100,    87,    99,   100,
      54,    96,    96,    96,    96,    67,    93,    96,    94,    94,
      95,    71,    99,   100,   101,   101,    85,    79,    51,    99,
      80,   101,    67,    96,    80,    50,    54,    54,    80,    50,
      15,    67,   100,    67,    54,    54,    54,    80,    57,    58,
      63,    61,   100,    51,    94,    95,    88,    32,    67,    67,
      54,    32,    79,    88,    96,    79,    87,    96,    96,    96,
      94,    95,    90,    91,    22,    80,    50,    71,    99,    67,
      96,    95,    95,    54,    95,    54,    54,    58,    62,    50,
      54,    79,    80,    67,    80,    96,    96,    94,    94,    90,
      96,    32,    63,    22,    80,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    99,
     100,   101,   102,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     1,     3,     3,
       3,     4,     3,     5,     3,     6,     9,     6,     6,     6,
       9,     2,     6,     4,     2,     2,     2,     2,     7,     5,
       5,     9,     4,     4,     3,     3,     6,     5,     6,     2,
       2,     5,     8,     6,     8,     4,     3,     3,     2,     1,
       3,     2,     2,     5,     4,     8,     2,     2,     2,     1,
       1,     4,     4,     2,     2,     1,     2,     2,     3,     5,
       4,     4,     1,     2,     3,     1,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     4,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     2,     2,     3,     1,     1,     4,     7,     4,     1,
       1,     1,     4,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 79 "grammar.y"
              {  pila_programas[idx_prg] = ((yyvsp[0].nodo)); /* stmtseq */ ;  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); }
#line 1771 "grammar.tab.c"
    break;

  case 3:
#line 82 "grammar.y"
                                   {
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
 	pila_programas[idx_prg] = ((yyvsp[-2].nodo)); /* stmtseq */ ;  idx_prg++; }
#line 1780 "grammar.tab.c"
    break;

  case 4:
#line 89 "grammar.y"
                 { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* un procedimiento  */ }
#line 1786 "grammar.tab.c"
    break;

  case 5:
#line 90 "grammar.y"
                              { (yyval.nodo) =  (yyvsp[0].nodo) ; /*varios procedim.*/ }
#line 1792 "grammar.tab.c"
    break;

  case 6:
#line 95 "grammar.y"
                   { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* un procedimiento  */ }
#line 1798 "grammar.tab.c"
    break;

  case 7:
#line 96 "grammar.y"
           { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* una funcion  */ }
#line 1804 "grammar.tab.c"
    break;

  case 8:
#line 101 "grammar.y"
                           { (yyval.nodo) = nodo2(asigna_num, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asignacion*/}
#line 1810 "grammar.tab.c"
    break;

  case 9:
#line 102 "grammar.y"
                          { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
#line 1816 "grammar.tab.c"
    break;

  case 10:
#line 103 "grammar.y"
                              { (yyval.nodo) = nodo2(asigna_alfa_var, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
#line 1822 "grammar.tab.c"
    break;

  case 11:
#line 104 "grammar.y"
                                   { (yyval.nodo) = nodo2(sumar_alfa, (yyvsp[-3].nodo), (yyvsp[0].nodo)); /*suma alfa*/}
#line 1828 "grammar.tab.c"
    break;

  case 12:
#line 105 "grammar.y"
                         { (yyval.nodo) = nodo2(dimensionar, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector entero */ }
#line 1834 "grammar.tab.c"
    break;

  case 13:
#line 106 "grammar.y"
                                     { (yyval.nodo) = nodo3(dimensionar, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*dimensionar un vector entero */ }
#line 1840 "grammar.tab.c"
    break;

  case 14:
#line 107 "grammar.y"
                          { (yyval.nodo) = nodo2(dimensionar_alfa, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector strings */ }
#line 1846 "grammar.tab.c"
    break;

  case 15:
#line 108 "grammar.y"
                                              { (yyval.nodo) = nodo3(asigna_vector, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1852 "grammar.tab.c"
    break;

  case 16:
#line 109 "grammar.y"
                                                                 { (yyval.nodo) = nodo4(asigna_vector, (yyvsp[-8].nodo), (yyvsp[-6].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1858 "grammar.tab.c"
    break;

  case 17:
#line 110 "grammar.y"
                                            { (yyval.nodo) = nodo3(asigna_vector_alfa, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1864 "grammar.tab.c"
    break;

  case 18:
#line 111 "grammar.y"
                                                { (yyval.nodo) = nodo3(asigna_vector_alfa2, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1870 "grammar.tab.c"
    break;

  case 19:
#line 112 "grammar.y"
                                                { (yyval.nodo) = nodo3(asigna_vector_alfa3, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo) );  }
#line 1876 "grammar.tab.c"
    break;

  case 20:
#line 113 "grammar.y"
                                                                { (yyval.nodo) = nodo4(asigna_vector_alfa4, (yyvsp[-8].nodo), (yyvsp[-6].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo) );  }
#line 1882 "grammar.tab.c"
    break;

  case 21:
#line 114 "grammar.y"
                           {  (yyval.nodo) = nodo1(llamar, (yyvsp[0].nodo)) ;/*llamar proced.*/}
#line 1888 "grammar.tab.c"
    break;

  case 22:
#line 115 "grammar.y"
                                                                  {  (yyval.nodo) = nodo3(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo), (yyvsp[-5].nodo)) ;/*llamar proced.*/}
#line 1894 "grammar.tab.c"
    break;

  case 23:
#line 116 "grammar.y"
                                                   {  (yyval.nodo) = nodo2(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*llamar proced.*/}
#line 1900 "grammar.tab.c"
    break;

  case 24:
#line 117 "grammar.y"
                      { (yyval.nodo) = nodo1( retorno, (yyvsp[0].nodo));    }
#line 1906 "grammar.tab.c"
    break;

  case 25:
#line 118 "grammar.y"
                       { (yyval.nodo) = nodo1( retorno, (yyvsp[0].nodo));    }
#line 1912 "grammar.tab.c"
    break;

  case 26:
#line 119 "grammar.y"
                    { (yyval.nodo) = nodo1(decimales, (yyvsp[0].nodo) ) ; }
#line 1918 "grammar.tab.c"
    break;

  case 27:
#line 120 "grammar.y"
                    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
#line 1924 "grammar.tab.c"
    break;

  case 28:
#line 121 "grammar.y"
                                             { (yyval.nodo) = nodo3(si, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if con else */}
#line 1930 "grammar.tab.c"
    break;

  case 29:
#line 122 "grammar.y"
                                { (yyval.nodo) = nodo2(si, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if sin else*/}
#line 1936 "grammar.tab.c"
    break;

  case 30:
#line 123 "grammar.y"
                                 { (yyval.nodo) = nodo2(mientras, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*while*/}
#line 1942 "grammar.tab.c"
    break;

  case 31:
#line 124 "grammar.y"
                                                           {(yyval.nodo) = nodo4(desde, (yyvsp[-7].nodo), (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*for*/}
#line 1948 "grammar.tab.c"
    break;

  case 32:
#line 125 "grammar.y"
                                    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1954 "grammar.tab.c"
    break;

  case 33:
#line 126 "grammar.y"
                                  { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[-1].nodo)) ;  }
#line 1960 "grammar.tab.c"
    break;

  case 34:
#line 127 "grammar.y"
                            { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[0].nodo)) ;  }
#line 1966 "grammar.tab.c"
    break;

  case 35:
#line 128 "grammar.y"
                             { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
#line 1972 "grammar.tab.c"
    break;

  case 36:
#line 129 "grammar.y"
                                                         { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1978 "grammar.tab.c"
    break;

  case 37:
#line 130 "grammar.y"
                                            { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1984 "grammar.tab.c"
    break;

  case 38:
#line 131 "grammar.y"
                                           { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
#line 1990 "grammar.tab.c"
    break;

  case 39:
#line 132 "grammar.y"
                      { (yyval.nodo) = nodo1(mensaje,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
#line 1996 "grammar.tab.c"
    break;

  case 40:
#line 133 "grammar.y"
                 {   (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo));  }
#line 2002 "grammar.tab.c"
    break;

  case 41:
#line 134 "grammar.y"
                                                            { (yyval.nodo) = nodo4(graficos, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo));   }
#line 2008 "grammar.tab.c"
    break;

  case 42:
#line 135 "grammar.y"
                                                  { (yyval.nodo) = nodo4(dibuja_linea, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
#line 2014 "grammar.tab.c"
    break;

  case 43:
#line 136 "grammar.y"
                                        { (yyval.nodo) = nodo3(dibuja_circulo, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
#line 2020 "grammar.tab.c"
    break;

  case 44:
#line 137 "grammar.y"
                                                       { (yyval.nodo) = nodo4(dibuja_rectangulo, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
#line 2026 "grammar.tab.c"
    break;

  case 45:
#line 138 "grammar.y"
                           { (yyval.nodo) = nodo2(dibuja_punto, (yyvsp[-2].nodo), (yyvsp[0].nodo) ) ; }
#line 2032 "grammar.tab.c"
    break;

  case 46:
#line 139 "grammar.y"
                                   {(yyval.nodo)=nodo2(convertir_texto_a_numero, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
#line 2038 "grammar.tab.c"
    break;

  case 47:
#line 140 "grammar.y"
                                   {(yyval.nodo)=nodo2(convertir_numero_a_texto, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
#line 2044 "grammar.tab.c"
    break;

  case 48:
#line 141 "grammar.y"
                   {  (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo) );  }
#line 2050 "grammar.tab.c"
    break;

  case 49:
#line 142 "grammar.y"
       { (yyval.nodo)=nodo0(stop, (yyvsp[0].nodo)); }
#line 2056 "grammar.tab.c"
    break;

  case 50:
#line 143 "grammar.y"
                               { (yyval.nodo)=nodo2(abrir, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2062 "grammar.tab.c"
    break;

  case 51:
#line 144 "grammar.y"
                    { (yyval.nodo)=nodo1(cerrar, (yyvsp[0].nodo)); }
#line 2068 "grammar.tab.c"
    break;

  case 52:
#line 145 "grammar.y"
                    { (yyval.nodo) = nodo1(leer,  (yyvsp[0].nodo)) ; /*leer variable numerica*/}
#line 2074 "grammar.tab.c"
    break;

  case 53:
#line 146 "grammar.y"
                                              { (yyval.nodo)=nodo3(leer_archivo, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2080 "grammar.tab.c"
    break;

  case 54:
#line 147 "grammar.y"
                                      { (yyval.nodo)=nodo2(escribir_archivo, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2086 "grammar.tab.c"
    break;

  case 55:
#line 148 "grammar.y"
                                                               { (yyval.nodo)=nodo4(escribir_archivo, (yyvsp[-5].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2092 "grammar.tab.c"
    break;

  case 56:
#line 149 "grammar.y"
                    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[0].nodo)) ; /*leer variable alfa*/}
#line 2098 "grammar.tab.c"
    break;

  case 57:
#line 150 "grammar.y"
                      { (yyval.nodo)=nodo1(mostrar, (yyvsp[0].nodo)); }
#line 2104 "grammar.tab.c"
    break;

  case 58:
#line 151 "grammar.y"
                     { (yyval.nodo)=nodo1(vaciar, (yyvsp[0].nodo)); }
#line 2110 "grammar.tab.c"
    break;

  case 59:
#line 152 "grammar.y"
            { (yyval.nodo)=nodo0(continuar, (yyvsp[0].nodo)); }
#line 2116 "grammar.tab.c"
    break;

  case 60:
#line 153 "grammar.y"
        { (yyval.nodo)=nodo0(salir, (yyvsp[0].nodo)); }
#line 2122 "grammar.tab.c"
    break;

  case 61:
#line 154 "grammar.y"
                                           { (yyval.nodo) = nodo3(buscar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2128 "grammar.tab.c"
    break;

  case 62:
#line 155 "grammar.y"
                                               { (yyval.nodo) = nodo3(insertar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2134 "grammar.tab.c"
    break;

  case 63:
#line 156 "grammar.y"
                          { (yyval.nodo) = nodo1(eliminar_clave,  (yyvsp[0].nodo)); }
#line 2140 "grammar.tab.c"
    break;

  case 64:
#line 157 "grammar.y"
                         { (yyval.nodo)=nodo1(use_indice, (yyvsp[0].nodo)); }
#line 2146 "grammar.tab.c"
    break;

  case 65:
#line 158 "grammar.y"
                { (yyval.nodo)=nodo0(close_indice, (yyvsp[0].nodo)); }
#line 2152 "grammar.tab.c"
    break;

  case 66:
#line 159 "grammar.y"
                       { (yyval.nodo) = nodo1(push,  (yyvsp[0].nodo)); }
#line 2158 "grammar.tab.c"
    break;

  case 67:
#line 160 "grammar.y"
                       { (yyval.nodo) = nodo1(pop ,  (yyvsp[0].nodo)); }
#line 2164 "grammar.tab.c"
    break;

  case 68:
#line 161 "grammar.y"
                                { (yyval.nodo) = nodo1(actualizar, (yyvsp[0].nodo)); }
#line 2170 "grammar.tab.c"
    break;

  case 69:
#line 162 "grammar.y"
                                                       { (yyval.nodo) = nodo3(definir_registro, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo));
                        pila_records[idx_rec] = (yyval.nodo)   ; 
			array_variables[(int) (yyvsp[-3].nodo)->num].procedimiento = idx_rec  ;
			idx_rec++;
 }
#line 2180 "grammar.tab.c"
    break;

  case 70:
#line 167 "grammar.y"
                                        { (yyval.nodo)=nodo2(buscar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2186 "grammar.tab.c"
    break;

  case 71:
#line 168 "grammar.y"
                                            { (yyval.nodo)=nodo2(actualizar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2192 "grammar.tab.c"
    break;

  case 72:
#line 169 "grammar.y"
        { (yyval.nodo) = nodo0(pausa, (yyvsp[0].nodo)); }
#line 2198 "grammar.tab.c"
    break;

  case 73:
#line 173 "grammar.y"
                    { (yyval.nodo) = nodo2(listacampos, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2204 "grammar.tab.c"
    break;

  case 74:
#line 174 "grammar.y"
                                  { (yyval.nodo) = nodo3(listacampos, (yyvsp[0].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo)); }
#line 2210 "grammar.tab.c"
    break;

  case 75:
#line 179 "grammar.y"
            {(yyval.nodo) = nodo1(lista_parametros, (yyvsp[0].nodo));}
#line 2216 "grammar.tab.c"
    break;

  case 76:
#line 180 "grammar.y"
                                   { (yyval.nodo)=nodo2(lista_parametros, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2222 "grammar.tab.c"
    break;

  case 77:
#line 184 "grammar.y"
             { (yyval.nodo)=(yyvsp[0].nodo); }
#line 2228 "grammar.tab.c"
    break;

  case 78:
#line 185 "grammar.y"
          { (yyval.nodo)=(yyvsp[0].nodo); }
#line 2234 "grammar.tab.c"
    break;

  case 79:
#line 186 "grammar.y"
              { (yyval.nodo)=(yyvsp[0].nodo); }
#line 2240 "grammar.tab.c"
    break;

  case 80:
#line 191 "grammar.y"
         {(yyval.nodo) = nodo1(lista_argumentos, (yyvsp[0].nodo));}
#line 2246 "grammar.tab.c"
    break;

  case 81:
#line 192 "grammar.y"
                                  { (yyval.nodo) = nodo2(lista_argumentos, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2252 "grammar.tab.c"
    break;

  case 82:
#line 196 "grammar.y"
             {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2258 "grammar.tab.c"
    break;

  case 83:
#line 197 "grammar.y"
             {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2264 "grammar.tab.c"
    break;

  case 84:
#line 201 "grammar.y"
               { (yyval.nodo)=(yyvsp[0].nodo) ; /*lista expr*/ }
#line 2270 "grammar.tab.c"
    break;

  case 85:
#line 202 "grammar.y"
                               { (yyval.nodo)=nodo2 (secuencia, (yyvsp[-2].nodo), (yyvsp[0].nodo))  ; /*varias lista expr, separadas por coma*/ }
#line 2276 "grammar.tab.c"
    break;

  case 86:
#line 206 "grammar.y"
               { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[0].nodo)); /*lista expresion2*/}
#line 2282 "grammar.tab.c"
    break;

  case 87:
#line 207 "grammar.y"
               { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[0].nodo) ); /* un literal*/}
#line 2288 "grammar.tab.c"
    break;

  case 88:
#line 208 "grammar.y"
               { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[0].nodo)); /* una variable literal*/}
#line 2294 "grammar.tab.c"
    break;

  case 89:
#line 209 "grammar.y"
                             { (yyval.nodo)=nodo2(imprimir_var_vectoralfa, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /* una variable literal*/}
#line 2300 "grammar.tab.c"
    break;

  case 90:
#line 213 "grammar.y"
                    { (yyval.nodo) = nodo2(secuencia, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*una seq de comandos*/}
#line 2306 "grammar.tab.c"
    break;

  case 91:
#line 214 "grammar.y"
            { (yyval.nodo) = (yyvsp[0].nodo); /*un comando*/}
#line 2312 "grammar.tab.c"
    break;

  case 92:
#line 218 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); /* expresion2*/}
#line 2318 "grammar.tab.c"
    break;

  case 93:
#line 219 "grammar.y"
                 { (yyval.nodo) = nodo2(igualque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*igualdad*/}
#line 2324 "grammar.tab.c"
    break;

  case 94:
#line 220 "grammar.y"
                 { (yyval.nodo) = nodo2(noigualque,    (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*no igual*/}
#line 2330 "grammar.tab.c"
    break;

  case 95:
#line 221 "grammar.y"
                 { (yyval.nodo) = nodo2(menorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor que*/}
#line 2336 "grammar.tab.c"
    break;

  case 96:
#line 222 "grammar.y"
                 { (yyval.nodo) = nodo2(menorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor o igual que*/}
#line 2342 "grammar.tab.c"
    break;

  case 97:
#line 223 "grammar.y"
                 { (yyval.nodo) = nodo2(mayorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor que*/}
#line 2348 "grammar.tab.c"
    break;

  case 98:
#line 224 "grammar.y"
                 { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor o igual que*/}
#line 2354 "grammar.tab.c"
    break;

  case 99:
#line 225 "grammar.y"
                         { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2360 "grammar.tab.c"
    break;

  case 100:
#line 226 "grammar.y"
                             { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2366 "grammar.tab.c"
    break;

  case 101:
#line 227 "grammar.y"
                         { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2372 "grammar.tab.c"
    break;

  case 102:
#line 228 "grammar.y"
                             { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2378 "grammar.tab.c"
    break;

  case 103:
#line 232 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); /* expr2*/}
#line 2384 "grammar.tab.c"
    break;

  case 104:
#line 233 "grammar.y"
                   { (yyval.nodo) = nodo2(suma, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*suma*/}
#line 2390 "grammar.tab.c"
    break;

  case 105:
#line 234 "grammar.y"
                    { (yyval.nodo) = nodo2(resta, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*resta*/}
#line 2396 "grammar.tab.c"
    break;

  case 106:
#line 235 "grammar.y"
                 { (yyval.nodo) = nodo2(or, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*or*/}
#line 2402 "grammar.tab.c"
    break;

  case 107:
#line 236 "grammar.y"
                   { (yyval.nodo) = nodo2(and, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*and*/}
#line 2408 "grammar.tab.c"
    break;

  case 108:
#line 240 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2414 "grammar.tab.c"
    break;

  case 109:
#line 241 "grammar.y"
                   { (yyval.nodo) = nodo2(multiplica, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*multiplicar*/}
#line 2420 "grammar.tab.c"
    break;

  case 110:
#line 242 "grammar.y"
                     { (yyval.nodo) = nodo2 (divide, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*dividir*/}
#line 2426 "grammar.tab.c"
    break;

  case 111:
#line 246 "grammar.y"
             { (yyval.nodo) = (yyvsp[0].nodo); /*positivo*/}
#line 2432 "grammar.tab.c"
    break;

  case 112:
#line 247 "grammar.y"
              { (yyval.nodo) = nodo1(negativo, (yyvsp[0].nodo)); /*negativo*/}
#line 2438 "grammar.tab.c"
    break;

  case 113:
#line 248 "grammar.y"
                           { (yyval.nodo) = (yyvsp[-1].nodo); /*expr enter parentesis*/}
#line 2444 "grammar.tab.c"
    break;

  case 114:
#line 249 "grammar.y"
         { (yyval.nodo) =  (yyvsp[0].nodo); /*numero*/}
#line 2450 "grammar.tab.c"
    break;

  case 115:
#line 250 "grammar.y"
             { (yyval.nodo) = (yyvsp[0].nodo); /*designador variable*/}
#line 2456 "grammar.tab.c"
    break;

  case 116:
#line 251 "grammar.y"
                                { (yyval.nodo) = nodo2(evalua_vector, (yyvsp[-3].nodo), (yyvsp[-1].nodo));   }
#line 2462 "grammar.tab.c"
    break;

  case 117:
#line 252 "grammar.y"
                                                     { (yyval.nodo) = nodo3(evalua_vector, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-1].nodo));   }
#line 2468 "grammar.tab.c"
    break;

  case 118:
#line 253 "grammar.y"
                                                   {  (yyval.nodo) = nodo2(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*llamar proced.*/}
#line 2474 "grammar.tab.c"
    break;

  case 119:
#line 257 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); /*designador string*/}
#line 2480 "grammar.tab.c"
    break;

  case 120:
#line 260 "grammar.y"
       { (yyval.nodo) = (yyvsp[0].nodo);  /* nombre designador */ }
#line 2486 "grammar.tab.c"
    break;

  case 121:
#line 263 "grammar.y"
       { (yyval.nodo) =  (yyvsp[0].nodo) ;  /*designador proced.*/ }
#line 2492 "grammar.tab.c"
    break;

  case 122:
#line 267 "grammar.y"
                                    { 
			(yyval.nodo) = nodo2(procedimiento, (yyvsp[-2].nodo), (yyvsp[-1].nodo)) ;/*un procedimiento*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[-2].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[-2].nodo)->num].tipo = 'P'  ;
                        printf("P: %s\n", array_variables[(int) (yyvsp[-2].nodo)->num].nombre);
			idx_prc++;
			}
#line 2506 "grammar.tab.c"
    break;

  case 123:
#line 278 "grammar.y"
                                                                      { 
			(yyval.nodo) = nodo3(funcion, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*una funcion*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[-5].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[-5].nodo)->num].tipo = 'F'  ;
                        printf("F: %s\n", array_variables[(int) (yyvsp[-5].nodo)->num].nombre);
			idx_prc++;
			}
#line 2520 "grammar.tab.c"
    break;


#line 2524 "grammar.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 288 "grammar.y"



