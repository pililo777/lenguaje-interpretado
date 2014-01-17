/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 2 "grammar.y"

#include "nodo.h"
#include "stdio.h"
 
#define MSDOS
//char constantes[127][127];
//char variables[127][127];


/* Line 268 of yacc.c  */
#line 81 "grammar.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LLAMAR = 258,
     PROC = 259,
     END = 260,
     PROCNAME = 261,
     EQ = 262,
     TERMINAR = 263,
     DECIMALES = 264,
     VENTANA = 265,
     FIN = 266,
     BOTON = 267,
     MENSAJE = 268,
     ETIQUETA = 269,
     TEXTO = 270,
     NE = 271,
     LT = 272,
     LE = 273,
     GT = 274,
     GE = 275,
     PLUS = 276,
     MINUS = 277,
     MULT = 278,
     DIVIDE = 279,
     RPAREN = 280,
     LPAREN = 281,
     ASSIGN = 282,
     SEMICOLON = 283,
     COMMA = 284,
     IF = 285,
     THEN = 286,
     ELSE = 287,
     FI = 288,
     WHILE = 289,
     FOR = 290,
     TO = 291,
     DO = 292,
     OD = 293,
     PRINT = 294,
     LEER = 295,
     BORRAR = 296,
     NUMBER = 297,
     NAME = 298,
     SNAME = 299,
     LITERAL = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 11 "grammar.y"

 elnodo * nodo;



/* Line 293 of yacc.c  */
#line 168 "grammar.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 180 "grammar.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    13,    16,    20,    24,
      27,    30,    33,    36,    39,    47,    53,    59,    69,    74,
      79,    84,    88,    92,    99,   105,   111,   114,   116,   119,
     121,   125,   128,   130,   134,   136,   138,   140,   143,   145,
     147,   151,   155,   159,   163,   167,   171,   175,   177,   181,
     185,   187,   191,   195,   198,   201,   205,   207,   209,   211,
     213,   215
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    55,    -1,    55,     8,    48,    -1,     8,
      -1,    63,    -1,    48,    63,    -1,    61,     7,    56,    -1,
      60,     7,    45,    -1,     3,    62,    -1,     9,    42,    -1,
      39,    53,    -1,    40,    60,    -1,    40,    61,    -1,    30,
      56,    31,    55,    32,    55,    33,    -1,    30,    56,    31,
      55,    33,    -1,    34,    56,    37,    55,    38,    -1,    35,
      61,     7,    56,    36,    56,    37,    55,    38,    -1,    10,
      50,     5,    10,    -1,    10,    61,    42,    42,    -1,    40,
      10,    61,    45,    -1,     3,    10,    61,    -1,    61,    10,
      45,    -1,    61,    12,    45,    62,    42,    42,    -1,    61,
      14,    45,    42,    42,    -1,    61,    15,    44,    42,    42,
      -1,    13,    53,    -1,    45,    -1,    45,    51,    -1,    52,
      -1,    51,    29,    52,    -1,    12,    45,    -1,    54,    -1,
      53,    29,    54,    -1,    56,    -1,    45,    -1,    60,    -1,
      55,    49,    -1,    49,    -1,    57,    -1,    57,     7,    57,
      -1,    57,    16,    57,    -1,    57,    17,    57,    -1,    57,
      18,    57,    -1,    57,    19,    57,    -1,    57,    20,    57,
      -1,    60,     7,    45,    -1,    58,    -1,    57,    21,    58,
      -1,    57,    22,    58,    -1,    59,    -1,    58,    23,    59,
      -1,    58,    24,    59,    -1,    21,    59,    -1,    22,    59,
      -1,    26,    56,    25,    -1,    42,    -1,    61,    -1,    44,
      -1,    43,    -1,    43,    -1,     4,    62,    55,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    55,    56,    60,    61,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    88,    89,    93,
      94,    98,   101,   102,   106,   107,   108,   112,   113,   117,
     118,   119,   120,   121,   122,   123,   124,   128,   129,   130,
     134,   135,   136,   140,   141,   142,   143,   144,   148,   151,
     154,   158
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LLAMAR", "PROC", "END", "PROCNAME",
  "EQ", "TERMINAR", "DECIMALES", "VENTANA", "FIN", "BOTON", "MENSAJE",
  "ETIQUETA", "TEXTO", "NE", "LT", "LE", "GT", "GE", "PLUS", "MINUS",
  "MULT", "DIVIDE", "RPAREN", "LPAREN", "ASSIGN", "SEMICOLON", "COMMA",
  "IF", "THEN", "ELSE", "FI", "WHILE", "FOR", "TO", "DO", "OD", "PRINT",
  "LEER", "BORRAR", "NUMBER", "NAME", "SNAME", "LITERAL", "$accept",
  "ROOT", "procedimientos", "statement", "defventana", "defcontroles",
  "lista_controles", "lista_expr", "lista_expr2", "stmtseq", "expression",
  "expr2", "expr3", "expr4", "sdesignator", "designator",
  "proc_designator", "procedimiento", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    50,    50,    51,
      51,    52,    53,    53,    54,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    57,
      58,    58,    58,    59,    59,    59,    59,    59,    60,    61,
      62,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     2,     3,     3,     2,
       2,     2,     2,     2,     7,     5,     5,     9,     4,     4,
       4,     3,     3,     6,     5,     5,     2,     1,     2,     1,
       3,     2,     1,     3,     1,     1,     1,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     2,     2,     3,     1,     1,     1,     1,
       1,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     4,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    58,     0,    38,     2,     0,     0,     0,    60,
       9,    10,    27,     0,     0,     0,     0,     0,    56,    35,
      26,    32,    34,    39,    47,    50,    36,    57,     0,     0,
       0,     0,    11,     0,    12,    13,     1,     0,    37,     0,
       0,     0,     0,     0,     0,    21,     0,    28,    29,     0,
       0,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     5,     8,     7,    22,     0,     0,     0,    31,
       0,    18,    19,    55,    33,    40,    41,    42,    43,    44,
      45,    48,    49,    51,    52,    46,     0,     0,     0,    20,
       0,     6,     0,     0,     0,    30,     0,    15,    16,     0,
       0,     0,    24,    25,     0,     0,    61,    23,    14,     0,
       0,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    81,    14,    23,    57,    58,    30,    31,    15,
      32,    33,    34,    35,    16,    37,    20,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -76
static const yytype_int16 yypact[] =
{
      53,    -1,   -76,   -13,    -8,     5,    58,    58,    -7,     5,
      11,   -76,   -76,    41,   -76,   124,    37,    18,    -7,   -76,
     -76,   -76,    46,    55,    22,    48,    48,    58,   -76,   -76,
      24,   -76,   -76,   249,    15,   -76,    65,   -76,    34,    65,
      38,    71,    24,    -7,   -76,   -76,   -76,    77,   -76,    44,
      58,    54,    59,    60,    42,   -76,    64,    69,   -76,    72,
      61,   -76,   -76,    86,     5,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    68,   220,   220,    58,    74,
      80,    77,   -76,   -76,   -76,   -76,    80,    75,    89,   -76,
      46,   -76,   -76,   -76,   -76,     2,     2,     2,     2,     2,
       2,    15,    15,   -76,   -76,   -76,   112,   140,    92,   -76,
     220,   -76,    93,    94,    96,   -76,   220,   -76,   -76,    58,
     182,    97,   -76,   -76,   163,   103,   -76,   -76,   -76,   220,
     201,   -76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,   -76,   -12,   -76,   -76,    51,   139,    98,   -70,
      -5,   207,   -20,    -6,     7,     0,   -75,    76
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,    38,    40,    48,    24,   110,   106,   107,    41,    18,
      45,   112,    36,    39,    39,    17,    36,    44,    55,    61,
      62,    43,    63,    71,    72,    50,    25,    26,    51,    21,
      52,    27,    53,    54,    39,    11,    11,    22,    73,    74,
     120,    46,    19,    79,    49,    84,   124,    28,    11,    12,
      29,   101,   102,    64,    11,    12,     1,    39,    56,   130,
      59,     2,     3,     4,    60,    76,     5,   103,   104,    25,
      26,    36,    75,   108,    27,    77,    17,    17,    78,    25,
      26,    80,    91,     6,    27,    39,    88,     7,     8,    83,
      28,    11,     9,    10,    48,    48,    11,    12,    90,    85,
      28,    11,    12,    92,    86,    87,    17,    17,    48,    89,
      17,    93,    48,   105,   125,     1,    17,   113,    48,   109,
      17,     3,     4,    19,    17,     5,    39,     1,   119,    17,
      17,   114,    47,     3,     4,   121,   122,     5,   123,   127,
     129,   115,     6,     1,   116,   117,     7,     8,    42,     3,
       4,     9,    10,     5,     6,    11,    12,   111,     7,     8,
       0,     0,    94,     9,    10,     0,     1,    11,    12,     0,
       6,     0,     3,     4,     7,     8,     5,     0,   118,     9,
      10,     0,     0,    11,    12,     1,     0,   126,     0,     0,
       0,     3,     4,     6,     0,     5,   128,     7,     8,     0,
       0,     0,     9,    10,     1,     0,    11,    12,     0,     0,
       3,     4,     6,     0,     5,     0,     7,     8,     0,     0,
       0,     9,    10,     1,     0,    11,    12,     0,     0,     3,
       4,     6,     0,     5,     0,     7,     8,     0,     0,   131,
       9,    10,     0,     0,    11,    12,     0,     0,     0,     0,
       6,     0,     0,     0,     7,     8,    65,     0,     0,     9,
      10,     0,     0,    11,    12,    66,    67,    68,    69,    70,
      71,    72,    95,    96,    97,    98,    99,   100
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-76))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     6,     7,    15,     4,    80,    76,    77,     8,    10,
      10,    86,     5,     6,     7,    15,     9,    10,    18,    25,
      26,    10,    27,    21,    22,     7,    21,    22,    10,    42,
      12,    26,    14,    15,    27,    43,    43,    45,    23,    24,
     110,     0,    43,    43,     7,    50,   116,    42,    43,    44,
      45,    71,    72,    29,    43,    44,     3,    50,    12,   129,
       5,     8,     9,    10,    42,    31,    13,    73,    74,    21,
      22,    64,     7,    78,    26,    37,    76,    77,     7,    21,
      22,     4,    10,    30,    26,    78,    44,    34,    35,    45,
      42,    43,    39,    40,   106,   107,    43,    44,    29,    45,
      42,    43,    44,    42,    45,    45,   106,   107,   120,    45,
     110,    25,   124,    45,   119,     3,   116,    42,   130,    45,
     120,     9,    10,    43,   124,    13,   119,     3,    36,   129,
     130,    42,     8,     9,    10,    42,    42,    13,    42,    42,
      37,    90,    30,     3,    32,    33,    34,    35,     9,     9,
      10,    39,    40,    13,    30,    43,    44,    81,    34,    35,
      -1,    -1,    64,    39,    40,    -1,     3,    43,    44,    -1,
      30,    -1,     9,    10,    34,    35,    13,    -1,    38,    39,
      40,    -1,    -1,    43,    44,     3,    -1,     5,    -1,    -1,
      -1,     9,    10,    30,    -1,    13,    33,    34,    35,    -1,
      -1,    -1,    39,    40,     3,    -1,    43,    44,    -1,    -1,
       9,    10,    30,    -1,    13,    -1,    34,    35,    -1,    -1,
      -1,    39,    40,     3,    -1,    43,    44,    -1,    -1,     9,
      10,    30,    -1,    13,    -1,    34,    35,    -1,    -1,    38,
      39,    40,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    35,     7,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    16,    17,    18,    19,    20,
      21,    22,    65,    66,    67,    68,    69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    10,    13,    30,    34,    35,    39,
      40,    43,    44,    47,    49,    55,    60,    61,    10,    43,
      62,    42,    45,    50,    61,    21,    22,    26,    42,    45,
      53,    54,    56,    57,    58,    59,    60,    61,    56,    60,
      56,    61,    53,    10,    60,    61,     0,     8,    49,     7,
       7,    10,    12,    14,    15,    61,    12,    51,    52,     5,
      42,    59,    59,    56,    29,     7,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     7,    31,    37,     7,    61,
       4,    48,    63,    45,    56,    45,    45,    45,    44,    45,
      29,    10,    42,    25,    54,    57,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    45,    55,    55,    56,    45,
      62,    63,    62,    42,    42,    52,    32,    33,    38,    36,
      55,    42,    42,    42,    55,    56,     5,    42,    33,    37,
      55,    38
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


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
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  *++yyvsp = yylval;

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

/* Line 1806 of yacc.c  */
#line 54 "grammar.y"
    {  pila_programas[idx_prg] = ((yyvsp[(1) - (1)].nodo)); /* stmtseq */ ;  idx_prg++ ; }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 55 "grammar.y"
    { pila_programas[idx_prg] = ((yyvsp[(1) - (3)].nodo)); /* stmtseq */ ;  idx_prg++; }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 56 "grammar.y"
    { xmain ("fin del programa\n");  }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 60 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo)  ;  /* un procedimiento  */ }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 61 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(2) - (2)].nodo) ; /*varios procedim.*/ }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 65 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_num, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asignacion*/}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 66 "grammar.y"
    { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*asign literal*/}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 67 "grammar.y"
    {  (yyval.nodo) = nodo1(llamar, (yyvsp[(2) - (2)].nodo)) ;/*llamar proced.*/}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 68 "grammar.y"
    { (yyval.nodo) = nodo1(decimales, (yyvsp[(2) - (2)].nodo) ) ; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 69 "grammar.y"
    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 70 "grammar.y"
    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable alfa*/}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 71 "grammar.y"
    { (yyval.nodo) = nodo1(leer,  (yyvsp[(2) - (2)].nodo)) ; /*leer variable numerica*/}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 72 "grammar.y"
    { (yyval.nodo) = nodo3(si, (yyvsp[(2) - (7)].nodo), (yyvsp[(4) - (7)].nodo), (yyvsp[(6) - (7)].nodo)); /*if con else */}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 73 "grammar.y"
    { (yyval.nodo) = nodo2(si, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*if sin else*/}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 74 "grammar.y"
    { (yyval.nodo) = nodo2(mientras, (yyvsp[(2) - (5)].nodo), (yyvsp[(4) - (5)].nodo)); /*while*/}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 75 "grammar.y"
    {(yyval.nodo) = nodo4(desde, (yyvsp[(2) - (9)].nodo), (yyvsp[(4) - (9)].nodo), (yyvsp[(6) - (9)].nodo), (yyvsp[(8) - (9)].nodo)); /*for*/}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 76 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (4)].nodo) ; }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 77 "grammar.y"
    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo), (yyvsp[(4) - (4)].nodo)) ;  }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 78 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[(3) - (4)].nodo)) ;  }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 79 "grammar.y"
    { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 80 "grammar.y"
    { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ;  }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 81 "grammar.y"
    { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[(1) - (6)].nodo), (yyvsp[(3) - (6)].nodo), (yyvsp[(4) - (6)].nodo), (yyvsp[(5) - (6)].nodo), (yyvsp[(6) - (6)].nodo)) ;  }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 82 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[(1) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo)) ;  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 83 "grammar.y"
    { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[(1) - (5)].nodo), (yyvsp[(3) - (5)].nodo), (yyvsp[(4) - (5)].nodo), (yyvsp[(5) - (5)].nodo)) ;  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 84 "grammar.y"
    { (yyval.nodo) = nodo1(mensaje,  (yyvsp[(2) - (2)].nodo)); /*imprimir lista expr*/}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 88 "grammar.y"
    {  (yyval.nodo) = nodo1(ventana, (yyvsp[(1) - (1)].nodo)) ;  }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 89 "grammar.y"
    { (yyval.nodo)=(yyvsp[(2) - (2)].nodo); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 93 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo) ; }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 94 "grammar.y"
    { (yyval.nodo) = nodo2( secuencia_controles, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 98 "grammar.y"
    { (yyval.nodo) = nodo1(guardar_boton, (yyvsp[(2) - (2)].nodo)) ; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 101 "grammar.y"
    { (yyval.nodo)=(yyvsp[(1) - (1)].nodo) ; /*lista expr*/ }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 102 "grammar.y"
    { (yyval.nodo)=nodo2 (secuencia, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo))  ; /*varias lista expr, separadas por coma*/ }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 106 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[(1) - (1)].nodo)); /*lista expresion2*/}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 107 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[(1) - (1)].nodo) ); /* un literal*/}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 108 "grammar.y"
    { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[(1) - (1)].nodo)); /* una variable literal*/}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 112 "grammar.y"
    { (yyval.nodo) = nodo2(secuencia, (yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo)); /*una seq de comandos*/}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 113 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*un comando*/}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 117 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expresion2*/}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 118 "grammar.y"
    { (yyval.nodo) = nodo2(igualque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*igualdad*/}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 119 "grammar.y"
    { (yyval.nodo) = nodo2(noigualque,    (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*no igual*/}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 120 "grammar.y"
    { (yyval.nodo) = nodo2(menorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor que*/}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 121 "grammar.y"
    { (yyval.nodo) = nodo2(menorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*menor o igual que*/}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 122 "grammar.y"
    { (yyval.nodo) = nodo2(mayorque,      (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor que*/}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 123 "grammar.y"
    { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*mayor o igual que*/}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 124 "grammar.y"
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)) ; /*asigna literal*/}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 128 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /* expr2*/}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 129 "grammar.y"
    { (yyval.nodo) = nodo2(suma, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*suma*/}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 130 "grammar.y"
    { (yyval.nodo) = nodo2(resta, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*resta*/}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 134 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 135 "grammar.y"
    { (yyval.nodo) = nodo2(multiplica, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*multiplicar*/}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 136 "grammar.y"
    { (yyval.nodo) = nodo2 (divide, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); /*dividir*/}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 140 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (2)].nodo); /*positivo*/}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 141 "grammar.y"
    { (yyval.nodo) = nodo1(negativo, (yyvsp[(2) - (2)].nodo)); /*negativo*/}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 142 "grammar.y"
    { (yyval.nodo) = (yyvsp[(2) - (3)].nodo); /*expr enter parentesis*/}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 143 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo); /*numero*/}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador variable*/}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 148 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); /*designador string*/}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 151 "grammar.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo);  /* nombre designador */ }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 154 "grammar.y"
    { (yyval.nodo) =  (yyvsp[(1) - (1)].nodo) ;  /*designador proced.*/ }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 158 "grammar.y"
    { 
			(yyval.nodo) = nodo2(procedimiento, (yyvsp[(2) - (4)].nodo), (yyvsp[(3) - (4)].nodo)) ;/*un procedimiento*/
                        procedimientos[(int) (yyvsp[(2) - (4)].nodo)->num] = (yyvsp[(3) - (4)].nodo)   ;   /* revisar este metodo */
			idx_prc++;
			}
    break;



/* Line 1806 of yacc.c  */
#line 1970 "grammar.tab.c"
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 2067 of yacc.c  */
#line 163 "grammar.y"




