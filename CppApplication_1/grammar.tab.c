/* A Bison parser, made by GNU Bison 3.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
//line 2 "grammar.y"

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

//line 92 "grammar.tab.c"

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
# define YYDEBUG 1
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
//line 24 "grammar.y"

 ast * nodo;

//line 225 "grammar.tab.c"

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
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   997

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

#define YYUNDEFTOK  2
#define YYMAXUTOK   331


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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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
  "proc_designator", "procedimiento", "funcion", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,    91,    93,    35
};
# endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-120)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,    89,    -7,    19,  -114,  -120,   -21,   123,
     226,   112,  -119,    30,   203,   175,   -42,    -2,    94,    50,
    -120,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,   158,   159,    38,   201,   174,   175,   262,   263,
      85,    86,    39,   176,    54,    55,    56,    40,    58,    59,
     160,   161
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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
static const yytype_int8 yystos[] =
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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
                       yystos[yyssp[yyi + 1 - yynrhs]],
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
      int yyn = yypact[*yyssp];
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
  int yytoken = 0; // yydebug=1;
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
//line 73 "grammar.y"
              {  
                  //ast * ptr1;
                  
                  //printf("yyvsp[0].nodo está en: %p\n", (ast *) yyvsp[0].nodo ); 
                  pila_programas [idx_prg] =  yyvsp[0].nodo;                     /* stmtseq */ 
                  //printf("pila programas 0 está en: %p\n", (ast *) (pila_programas) [(idx_prg)] ); 
                  
                  //ptr1 =  pila_programas [idx_prg] ;
                  //printf ("REDUCCION: A pointer is %p bytes\n", ptr1);
                  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); }
//line 1743 "grammar.tab.c"
    break;

  case 3:
//line 76 "grammar.y"
                                   {
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
        //printf("yyvsp[0].nodo está en: %p\n", yyvsp[-2].nodo ); 
 	(pila_programas) [(idx_prg)] = ((yyvsp[-2].nodo)); /* stmtseq */ ; 
        idx_prg++; }
//line 1752 "grammar.tab.c"
    break;

  case 4:
//line 83 "grammar.y"
                 { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* un procedimiento  */ }
//line 1758 "grammar.tab.c"
    break;

  case 5:
//line 84 "grammar.y"
                              { (yyval.nodo) =  (yyvsp[0].nodo) ; /*varios procedim.*/ }
//line 1764 "grammar.tab.c"
    break;

  case 6:
//line 89 "grammar.y"
                   { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* un procedimiento  */ }
//line 1770 "grammar.tab.c"
    break;

  case 7:
//line 90 "grammar.y"
           { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* una funcion  */ }
//line 1776 "grammar.tab.c"
    break;

  case 8:
//line 95 "grammar.y"
                           { (yyval.nodo) = nodo2(asigna_num, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asignacion*/}
//line 1782 "grammar.tab.c"
    break;

  case 9:
//line 96 "grammar.y"
                          { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
//line 1788 "grammar.tab.c"
    break;

  case 10:
//line 97 "grammar.y"
                              { (yyval.nodo) = nodo2(asigna_alfa_var, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
//line 1794 "grammar.tab.c"
    break;

  case 11:
//line 98 "grammar.y"
                                   { (yyval.nodo) = nodo2(sumar_alfa, (yyvsp[-3].nodo), (yyvsp[0].nodo)); /*suma alfa*/}
//line 1800 "grammar.tab.c"
    break;

  case 12:
//line 99 "grammar.y"
                         { (yyval.nodo) = nodo2(dimensionar, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector entero */ }
//line 1806 "grammar.tab.c"
    break;

  case 13:
//line 100 "grammar.y"
                                     { (yyval.nodo) = nodo3(dimensionar, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*dimensionar un vector entero */ }
//line 1812 "grammar.tab.c"
    break;

  case 14:
//line 101 "grammar.y"
                          { (yyval.nodo) = nodo2(dimensionar_alfa, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector strings */ }
//line 1818 "grammar.tab.c"
    break;

  case 15:
//line 102 "grammar.y"
                                              { (yyval.nodo) = nodo3(asigna_vector, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
//line 1824 "grammar.tab.c"
    break;

  case 16:
//line 103 "grammar.y"
                                                                 { (yyval.nodo) = nodo4(asigna_vector, (yyvsp[-8].nodo), (yyvsp[-6].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
//line 1830 "grammar.tab.c"
    break;

  case 17:
//line 104 "grammar.y"
                                            { (yyval.nodo) = nodo3(asigna_vector_alfa, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
//line 1836 "grammar.tab.c"
    break;

  case 18:
//line 105 "grammar.y"
                                                { (yyval.nodo) = nodo3(asigna_vector_alfa2, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
//line 1842 "grammar.tab.c"
    break;

  case 19:
//line 106 "grammar.y"
                                                { (yyval.nodo) = nodo3(asigna_vector_alfa3, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo) );  }
//line 1848 "grammar.tab.c"
    break;

  case 20:
//line 107 "grammar.y"
                                                                { (yyval.nodo) = nodo4(asigna_vector_alfa4, (yyvsp[-8].nodo), (yyvsp[-6].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo) );  }
//line 1854 "grammar.tab.c"
    break;

  case 21:
//line 108 "grammar.y"
                           {  (yyval.nodo) = nodo1(llamar, (yyvsp[0].nodo)) ;/*llamar proced.*/}
//line 1860 "grammar.tab.c"
    break;

  case 22:
//line 109 "grammar.y"
                                                                  {  (yyval.nodo) = nodo3(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo), (yyvsp[-5].nodo)) ;/*llamar proced.*/}
//line 1866 "grammar.tab.c"
    break;

  case 23:
//line 110 "grammar.y"
                                                   {  (yyval.nodo) = nodo2(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*llamar proced.*/}
//line 1872 "grammar.tab.c"
    break;

  case 24:
//line 111 "grammar.y"
                      { (yyval.nodo) = nodo1( retorno, (yyvsp[0].nodo));    }
//line 1878 "grammar.tab.c"
    break;

  case 25:
//line 112 "grammar.y"
                       { (yyval.nodo) = nodo1( retorno, (yyvsp[0].nodo));    }
//line 1884 "grammar.tab.c"
    break;

  case 26:
//line 113 "grammar.y"
                    { (yyval.nodo) = nodo1(decimales, (yyvsp[0].nodo) ) ; }
//line 1890 "grammar.tab.c"
    break;

  case 27:
//line 114 "grammar.y"
                    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
//line 1896 "grammar.tab.c"
    break;

  case 28:
//line 115 "grammar.y"
                                             { (yyval.nodo) = nodo3(si, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if con else */}
//line 1902 "grammar.tab.c"
    break;

  case 29:
//line 116 "grammar.y"
                                { (yyval.nodo) = nodo2(si, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if sin else*/}
//line 1908 "grammar.tab.c"
    break;

  case 30:
//line 117 "grammar.y"
                                 { (yyval.nodo) = nodo2(mientras, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*while*/}
//line 1914 "grammar.tab.c"
    break;

  case 31:
//line 118 "grammar.y"
                                                           {(yyval.nodo) = nodo4(desde, (yyvsp[-7].nodo), (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*for*/}
//line 1920 "grammar.tab.c"
    break;

  case 32:
//line 119 "grammar.y"
                                    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
//line 1926 "grammar.tab.c"
    break;

  case 33:
//line 120 "grammar.y"
                                  { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[-1].nodo)) ;  }
//line 1932 "grammar.tab.c"
    break;

  case 34:
//line 121 "grammar.y"
                            { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[0].nodo)) ;  }
//line 1938 "grammar.tab.c"
    break;

  case 35:
//line 122 "grammar.y"
                             { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
//line 1944 "grammar.tab.c"
    break;

  case 36:
//line 123 "grammar.y"
                                                         { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
//line 1950 "grammar.tab.c"
    break;

  case 37:
//line 124 "grammar.y"
                                            { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
//line 1956 "grammar.tab.c"
    break;

  case 38:
//line 125 "grammar.y"
                                           { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
//line 1962 "grammar.tab.c"
    break;

  case 39:
//line 126 "grammar.y"
                      { (yyval.nodo) = nodo1(mensaje,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
//line 1968 "grammar.tab.c"
    break;

  case 40:
//line 127 "grammar.y"
                 {   (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo));  }
//line 1974 "grammar.tab.c"
    break;

  case 41:
//line 128 "grammar.y"
                                                            { (yyval.nodo) = nodo4(graficos, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo));   }
//line 1980 "grammar.tab.c"
    break;

  case 42:
//line 129 "grammar.y"
                                                  { (yyval.nodo) = nodo4(dibuja_linea, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
//line 1986 "grammar.tab.c"
    break;

  case 43:
//line 130 "grammar.y"
                                        { (yyval.nodo) = nodo3(dibuja_circulo, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
//line 1992 "grammar.tab.c"
    break;

  case 44:
//line 131 "grammar.y"
                                   {(yyval.nodo)=nodo2(convertir_texto_a_numero, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
//line 1998 "grammar.tab.c"
    break;

  case 45:
//line 132 "grammar.y"
                                   {(yyval.nodo)=nodo2(convertir_numero_a_texto, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
//line 2004 "grammar.tab.c"
    break;

  case 46:
//line 133 "grammar.y"
                   {  (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo) );  }
//line 2010 "grammar.tab.c"
    break;

  case 47:
//line 134 "grammar.y"
       { (yyval.nodo)=nodo0(stop, (yyvsp[0].nodo)); }
//line 2016 "grammar.tab.c"
    break;

  case 48:
//line 135 "grammar.y"
                               { (yyval.nodo)=nodo2(abrir, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2022 "grammar.tab.c"
    break;

  case 49:
//line 136 "grammar.y"
                    { (yyval.nodo)=nodo1(cerrar, (yyvsp[0].nodo)); }
//line 2028 "grammar.tab.c"
    break;

  case 50:
//line 137 "grammar.y"
                    { (yyval.nodo) = nodo1(leer,  (yyvsp[0].nodo)) ; /*leer variable numerica*/}
//line 2034 "grammar.tab.c"
    break;

  case 51:
//line 138 "grammar.y"
                                              { (yyval.nodo)=nodo3(leer_archivo, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2040 "grammar.tab.c"
    break;

  case 52:
//line 139 "grammar.y"
                                      { (yyval.nodo)=nodo2(escribir_archivo, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2046 "grammar.tab.c"
    break;

  case 53:
//line 140 "grammar.y"
                                                               { (yyval.nodo)=nodo4(escribir_archivo, (yyvsp[-5].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
//line 2052 "grammar.tab.c"
    break;

  case 54:
//line 141 "grammar.y"
                    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[0].nodo)) ; /*leer variable alfa*/}
//line 2058 "grammar.tab.c"
    break;

  case 55:
//line 142 "grammar.y"
                      { (yyval.nodo)=nodo1(mostrar, (yyvsp[0].nodo)); }
//line 2064 "grammar.tab.c"
    break;

  case 56:
//line 143 "grammar.y"
                     { (yyval.nodo)=nodo1(vaciar, (yyvsp[0].nodo)); }
//line 2070 "grammar.tab.c"
    break;

  case 57:
//line 144 "grammar.y"
            { (yyval.nodo)=nodo0(continuar, (yyvsp[0].nodo)); }
//line 2076 "grammar.tab.c"
    break;

  case 58:
//line 145 "grammar.y"
        { (yyval.nodo)=nodo0(salir, (yyvsp[0].nodo)); }
//line 2082 "grammar.tab.c"
    break;

  case 59:
//line 146 "grammar.y"
                                           { (yyval.nodo) = nodo3(buscar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2088 "grammar.tab.c"
    break;

  case 60:
//line 147 "grammar.y"
                                               { (yyval.nodo) = nodo3(insertar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2094 "grammar.tab.c"
    break;

  case 61:
//line 148 "grammar.y"
                          { (yyval.nodo) = nodo1(eliminar_clave,  (yyvsp[0].nodo)); }
//line 2100 "grammar.tab.c"
    break;

  case 62:
//line 149 "grammar.y"
                         { (yyval.nodo)=nodo1(use_indice, (yyvsp[0].nodo)); }
//line 2106 "grammar.tab.c"
    break;

  case 63:
//line 150 "grammar.y"
                { (yyval.nodo)=nodo0(close_indice, (yyvsp[0].nodo)); }
//line 2112 "grammar.tab.c"
    break;

  case 64:
//line 151 "grammar.y"
                       { (yyval.nodo) = nodo1(push,  (yyvsp[0].nodo)); }
//line 2118 "grammar.tab.c"
    break;

  case 65:
//line 152 "grammar.y"
                       { (yyval.nodo) = nodo1(pop ,  (yyvsp[0].nodo)); }
//line 2124 "grammar.tab.c"
    break;

  case 66:
//line 153 "grammar.y"
                                { (yyval.nodo) = nodo1(actualizar, (yyvsp[0].nodo)); }
//line 2130 "grammar.tab.c"
    break;

  case 67:
//line 154 "grammar.y"
                                                       { (yyval.nodo) = nodo3(definir_registro, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo));
                        pila_records[idx_rec] = (yyval.nodo)   ; 
			array_variables[(int) (yyvsp[-3].nodo)->num].procedimiento = idx_rec  ;
			idx_rec++;
 }
//line 2140 "grammar.tab.c"
    break;

  case 68:
//line 159 "grammar.y"
                                        { (yyval.nodo)=nodo2(buscar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2146 "grammar.tab.c"
    break;

  case 69:
//line 160 "grammar.y"
                                            { (yyval.nodo)=nodo2(actualizar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2152 "grammar.tab.c"
    break;

  case 70:
//line 161 "grammar.y"
        { (yyval.nodo) = nodo0(pausa, (yyvsp[0].nodo)); }
//line 2158 "grammar.tab.c"
    break;

  case 71:
//line 165 "grammar.y"
                    { (yyval.nodo) = nodo2(listacampos, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
//line 2164 "grammar.tab.c"
    break;

  case 72:
//line 166 "grammar.y"
                                  { (yyval.nodo) = nodo3(listacampos, (yyvsp[0].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo)); }
//line 2170 "grammar.tab.c"
    break;

  case 73:
//line 171 "grammar.y"
            {(yyval.nodo) = nodo1(lista_parametros, (yyvsp[0].nodo));}
//line 2176 "grammar.tab.c"
    break;

  case 74:
//line 172 "grammar.y"
                                   { (yyval.nodo)=nodo2(lista_parametros, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
//line 2182 "grammar.tab.c"
    break;

  case 75:
//line 176 "grammar.y"
             { (yyval.nodo)=(yyvsp[0].nodo); }
//line 2188 "grammar.tab.c"
    break;

  case 76:
//line 177 "grammar.y"
          { (yyval.nodo)=(yyvsp[0].nodo); }
//line 2194 "grammar.tab.c"
    break;

  case 77:
//line 178 "grammar.y"
              { (yyval.nodo)=(yyvsp[0].nodo); }
//line 2200 "grammar.tab.c"
    break;

  case 78:
//line 183 "grammar.y"
         {(yyval.nodo) = nodo1(lista_argumentos, (yyvsp[0].nodo));}
//line 2206 "grammar.tab.c"
    break;

  case 79:
//line 184 "grammar.y"
                                  { (yyval.nodo) = nodo2(lista_argumentos, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
//line 2212 "grammar.tab.c"
    break;

  case 80:
//line 188 "grammar.y"
             {(yyval.nodo) = (yyvsp[0].nodo);}
//line 2218 "grammar.tab.c"
    break;

  case 81:
//line 189 "grammar.y"
             {(yyval.nodo) = (yyvsp[0].nodo);}
//line 2224 "grammar.tab.c"
    break;

  case 82:
//line 193 "grammar.y"
               { (yyval.nodo)=(yyvsp[0].nodo) ; /*lista expr*/ }
//line 2230 "grammar.tab.c"
    break;

  case 83:
//line 194 "grammar.y"
                               { (yyval.nodo)=nodo2 (secuencia, (yyvsp[-2].nodo), (yyvsp[0].nodo))  ; /*varias lista expr, separadas por coma*/ }
//line 2236 "grammar.tab.c"
    break;

  case 84:
//line 198 "grammar.y"
               { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[0].nodo)); /*lista expresion2*/}
//line 2242 "grammar.tab.c"
    break;

  case 85:
//line 199 "grammar.y"
               { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[0].nodo) ); /* un literal*/}
//line 2248 "grammar.tab.c"
    break;

  case 86:
//line 200 "grammar.y"
               { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[0].nodo)); /* una variable literal*/}
//line 2254 "grammar.tab.c"
    break;

  case 87:
//line 201 "grammar.y"
                             { (yyval.nodo)=nodo2(imprimir_var_vectoralfa, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /* una variable literal*/}
//line 2260 "grammar.tab.c"
    break;

  case 88:
//line 205 "grammar.y"
                    { (yyval.nodo) = nodo2(secuencia, (ast *) (yyvsp[-1].nodo), (ast *) (yyvsp[0].nodo)); /*una seq de comandos*/}
//line 2266 "grammar.tab.c"
    break;

  case 89:
//line 206 "grammar.y"
            { (yyval.nodo) = (yyvsp[0].nodo); /*un comando*/}
//line 2272 "grammar.tab.c"
    break;

  case 90:
//line 210 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); /* expresion2*/}
//line 2278 "grammar.tab.c"
    break;

  case 91:
//line 211 "grammar.y"
                 { (yyval.nodo) = nodo2(igualque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*igualdad*/}
//line 2284 "grammar.tab.c"
    break;

  case 92:
//line 212 "grammar.y"
                 { (yyval.nodo) = nodo2(noigualque,    (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*no igual*/}
//line 2290 "grammar.tab.c"
    break;

  case 93:
//line 213 "grammar.y"
                 { (yyval.nodo) = nodo2(menorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor que*/}
//line 2296 "grammar.tab.c"
    break;

  case 94:
//line 214 "grammar.y"
                 { (yyval.nodo) = nodo2(menorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor o igual que*/}
//line 2302 "grammar.tab.c"
    break;

  case 95:
//line 215 "grammar.y"
                 { (yyval.nodo) = nodo2(mayorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor que*/}
//line 2308 "grammar.tab.c"
    break;

  case 96:
//line 216 "grammar.y"
                 { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor o igual que*/}
//line 2314 "grammar.tab.c"
    break;

  case 97:
//line 217 "grammar.y"
                         { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
//line 2320 "grammar.tab.c"
    break;

  case 98:
//line 218 "grammar.y"
                             { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
//line 2326 "grammar.tab.c"
    break;

  case 99:
//line 219 "grammar.y"
                         { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
//line 2332 "grammar.tab.c"
    break;

  case 100:
//line 220 "grammar.y"
                             { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
//line 2338 "grammar.tab.c"
    break;

  case 101:
//line 224 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); /* expr2*/}
//line 2344 "grammar.tab.c"
    break;

  case 102:
//line 225 "grammar.y"
                   { (yyval.nodo) = nodo2(suma, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*suma*/}
//line 2350 "grammar.tab.c"
    break;

  case 103:
//line 226 "grammar.y"
                    { (yyval.nodo) = nodo2(resta, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*resta*/}
//line 2356 "grammar.tab.c"
    break;

  case 104:
//line 227 "grammar.y"
                 { (yyval.nodo) = nodo2(or, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*or*/}
//line 2362 "grammar.tab.c"
    break;

  case 105:
//line 228 "grammar.y"
                   { (yyval.nodo) = nodo2(and, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*and*/}
//line 2368 "grammar.tab.c"
    break;

  case 106:
//line 232 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); }
//line 2374 "grammar.tab.c"
    break;

  case 107:
//line 233 "grammar.y"
                   { (yyval.nodo) = nodo2(multiplica, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*multiplicar*/}
//line 2380 "grammar.tab.c"
    break;

  case 108:
//line 234 "grammar.y"
                     { (yyval.nodo) = nodo2 (divide, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*dividir*/}
//line 2386 "grammar.tab.c"
    break;

  case 109:
//line 238 "grammar.y"
             { (yyval.nodo) = (yyvsp[0].nodo); /*positivo*/}
//line 2392 "grammar.tab.c"
    break;

  case 110:
//line 239 "grammar.y"
              { (yyval.nodo) = nodo1(negativo, (yyvsp[0].nodo)); /*negativo*/}
//line 2398 "grammar.tab.c"
    break;

  case 111:
//line 240 "grammar.y"
                           { (yyval.nodo) = (yyvsp[-1].nodo); /*expr enter parentesis*/}
//line 2404 "grammar.tab.c"
    break;

  case 112:
//line 241 "grammar.y"
         { (yyval.nodo) =  (yyvsp[0].nodo); /*numero*/}
//line 2410 "grammar.tab.c"
    break;

  case 113:
//line 242 "grammar.y"
             { (yyval.nodo) = (yyvsp[0].nodo); /*designador variable*/}
//line 2416 "grammar.tab.c"
    break;

  case 114:
//line 243 "grammar.y"
                                { (yyval.nodo) = nodo2(evalua_vector, (yyvsp[-3].nodo), (yyvsp[-1].nodo));   }
//line 2422 "grammar.tab.c"
    break;

  case 115:
//line 244 "grammar.y"
                                                     { (yyval.nodo) = nodo3(evalua_vector, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-1].nodo));   }
//line 2428 "grammar.tab.c"
    break;

  case 116:
//line 245 "grammar.y"
                                                   {  (yyval.nodo) = nodo2(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*llamar proced.*/}
//line 2434 "grammar.tab.c"
    break;

  case 117:
//line 249 "grammar.y"
        { (yyval.nodo) = (yyvsp[0].nodo); /*designador string*/}
//line 2440 "grammar.tab.c"
    break;

  case 118:
//line 252 "grammar.y"
       { (yyval.nodo) = (yyvsp[0].nodo);  /* nombre designador */ }
//line 2446 "grammar.tab.c"
    break;

  case 119:
//line 255 "grammar.y"
       { (yyval.nodo) =  (yyvsp[0].nodo) ;  /*designador proced.*/ }
//line 2452 "grammar.tab.c"
    break;

  case 120:
//line 259 "grammar.y"
                                    { 
			(yyval.nodo) = nodo2(procedimiento, (yyvsp[-2].nodo), (yyvsp[-1].nodo)) ;/*un procedimiento*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[-2].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[-2].nodo)->num].tipo = 'P'  ;
                        printf("P: %s\n", array_variables[(int) (yyvsp[-2].nodo)->num].nombre);
			idx_prc++;
			}
//line 2466 "grammar.tab.c"
    break;

  case 121:
//line 270 "grammar.y"
                                                                      { 
			(yyval.nodo) = nodo3(funcion, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*una funcion*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[-5].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[-5].nodo)->num].tipo = 'F'  ;
                        printf("F: %s\n", array_variables[(int) (yyvsp[-5].nodo)->num].nombre);
			idx_prc++;
			}
//line 2480 "grammar.tab.c"
    break;


//line 2484 "grammar.tab.c"

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
//line 280 "grammar.y"



