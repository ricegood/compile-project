/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "subc.y" /* yacc.c:339  */

/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"
#include "subc.tab.h"

int    yylex ();
int    yyerror (char* s);
void   REDUCE(char* s);


#line 81 "subc.tab.c" /* yacc.c:339  */

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
   by #include "subc.tab.h".  */
#ifndef YY_YY_SUBC_TAB_H_INCLUDED
# define YY_YY_SUBC_TAB_H_INCLUDED
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
    LOGICAL_OR = 258,
    LOGICAL_AND = 259,
    EQUOP = 260,
    RELOP = 261,
    INCOP = 262,
    DECOP = 263,
    STRUCTOP = 264,
    ELSE = 265,
    STRUCT = 266,
    RETURN = 267,
    IF = 268,
    WHILE = 269,
    FOR = 270,
    BREAK = 271,
    CONTINUE = 272,
    CHAR_CONST = 273,
    STRING = 274,
    INTEGER_CONST = 275,
    ID = 276,
    TYPE = 277,
    VOID = 278
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "subc.y" /* yacc.c:355  */

    int intVal;
    char *stringVal;
    struct id *idptr;
    struct decl *declptr;
    struct ste *steptr;

#line 153 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 170 "subc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    13,     2,     2,     2,     2,     7,     2,
      18,    19,    12,    10,     3,    11,    20,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    16,     2,    17,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       8,     9,    14,    15,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    65,    66,    70,    79,    88,    94,    99,
      98,   117,   121,   125,   132,   137,   131,   148,   162,   185,
     190,   189,   222,   223,   226,   227,   230,   238,   249,   253,
     256,   265,   274,   278,   286,   286,   300,   303,   304,   307,
     308,   309,   313,   322,   323,   324,   325,   326,   327,   328,
     333,   334,   337,   340,   349,   352,   355,   363,   366,   369,
     377,   380,   396,   416,   426,   436,   446,   451,   455,   459,
     464,   470,   476,   484,   492,   500,   508,   516,   524,   530,
     536,   540,   544,   552,   559,   568,   572
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'", "'!'",
  "INCOP", "DECOP", "'['", "']'", "'('", "')'", "'.'", "STRUCTOP", "ELSE",
  "STRUCT", "RETURN", "IF", "WHILE", "FOR", "BREAK", "CONTINUE",
  "CHAR_CONST", "STRING", "INTEGER_CONST", "ID", "TYPE", "VOID", "';'",
  "'{'", "'}'", "$accept", "program", "ext_def_list", "ext_def", "$@1",
  "type_specifier", "struct_specifier", "$@2", "@3", "func_decl", "@4",
  "pointers", "param_list", "param_decl", "def_list", "def",
  "compound_stmt", "$@5", "local_defs", "stmt_list", "stmt", "expr_e",
  "const_expr", "expr", "or_expr", "or_list", "and_expr", "and_list",
  "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,    61,   258,   259,    38,   260,   261,
      43,    45,    42,    33,   262,   263,    91,    93,    40,    41,
      46,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,    59,   123,   125
};
# endif

#define YYPACT_NINF -107

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-107)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -107,     3,    44,  -107,   -19,  -107,  -107,  -107,    -2,  -107,
      -8,     8,  -107,  -107,    31,  -107,    48,  -107,    47,  -107,
    -107,  -107,    29,    -4,  -107,  -107,    44,    29,    29,    29,
      29,    29,    29,    29,  -107,  -107,  -107,  -107,    49,  -107,
    -107,    63,  -107,    90,   108,   173,  -107,    88,    44,    44,
    -107,     1,    70,    75,  -107,   147,   147,   147,   147,   147,
     147,   102,   160,    87,    29,    29,    29,    29,    29,    29,
      29,  -107,  -107,    29,   140,    96,    99,  -107,   122,    20,
    -107,    62,  -107,   103,  -107,  -107,  -107,  -107,  -107,  -107,
     147,   108,    61,    71,  -107,  -107,  -107,   118,  -107,  -107,
      30,  -107,  -107,   115,    44,  -107,    -6,   138,   139,   142,
     130,   133,  -107,  -107,  -107,  -107,   154,    97,  -107,    29,
    -107,   176,  -107,  -107,   159,    29,    29,    29,  -107,  -107,
    -107,    29,  -107,  -107,    29,  -107,   177,   178,   162,  -107,
     182,   183,   113,   113,    29,   165,  -107,   180,  -107,   167,
    -107,   113,    29,  -107,   185,   113,  -107
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,    11,    12,     3,    23,    13,
       9,    17,    22,     8,     0,     7,     0,    14,     0,    34,
      10,    29,     0,    20,     5,    29,    15,     0,     0,     0,
       0,     0,     0,     0,    69,    70,    68,    71,     0,    52,
      54,    55,    57,    58,    60,    65,    18,     0,     0,    36,
      38,    23,     0,     0,    28,    78,    72,    79,    73,    76,
      77,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,     0,     0,     0,     0,    19,    23,     0,
      24,     0,    32,     0,    16,    33,    66,    67,     6,    56,
      65,    59,    62,    61,    63,    64,    53,     0,    84,    85,
       0,    81,    82,     0,     0,    21,     0,     0,     0,     0,
       0,     0,    43,    35,    40,    37,     0,     0,    80,     0,
      83,    26,    25,    41,     0,     0,     0,    51,    48,    49,
      39,     0,    30,    86,     0,    42,     0,     0,     0,    50,
       0,     0,     0,     0,    51,     0,    27,    44,    46,     0,
      31,     0,    51,    45,     0,     0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,  -107,  -107,     2,  -107,  -107,  -107,   203,
    -107,   -49,  -107,   104,   181,  -107,   191,  -107,  -107,  -107,
     -41,  -106,   -99,   -22,  -107,  -107,   145,  -107,   117,   -11,
    -107
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    16,    51,     9,    21,    52,    53,
      48,    14,    79,    80,    26,    54,   114,    25,    50,    81,
     115,   138,    38,   116,    40,    41,    42,    43,    44,    45,
     100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      39,    27,    83,     3,     8,    28,    29,    30,    31,    32,
      12,    61,    33,    12,    11,    46,    55,    56,    57,    58,
      59,    60,    62,   104,    34,    35,    36,    37,    15,   103,
     123,    47,   140,   119,    13,   141,    27,    82,   149,   105,
      28,    29,    30,    31,    32,    17,   154,    33,    96,   120,
      78,    97,    99,    90,    90,    90,    90,    90,    90,    34,
      35,    36,    37,    22,    18,    23,    63,     4,    64,    27,
      67,    68,    69,    28,    29,    30,    31,    32,     5,     6,
      33,    68,    69,    24,   124,    19,   106,   107,   108,   109,
     110,   111,    34,    35,    36,    37,    65,   133,   112,    19,
     113,   147,   148,   136,   137,   139,    78,    77,    84,    39,
     153,    85,    39,   131,   156,    23,    66,    67,    68,    69,
      27,    86,   139,    88,    28,    29,    30,    31,    32,   101,
     139,    33,   102,   132,    12,   118,   117,   106,   107,   108,
     109,   110,   111,    34,    35,    36,    37,    27,   121,   112,
      19,    28,    29,    30,    31,    32,   125,   126,    33,    98,
     127,    71,    72,    73,    70,    74,   128,    75,    76,   129,
      34,    35,    36,    37,    71,    72,    73,    70,    74,    87,
      75,    76,    91,    92,    93,    94,    95,    71,    72,    73,
     130,    74,   134,    75,    76,   135,   142,   143,   144,   145,
     146,   150,   151,   152,   155,    10,    49,    20,   122,    89
};

static const yytype_uint8 yycheck[] =
{
      22,     7,    51,     0,     2,    11,    12,    13,    14,    15,
      12,    33,    18,    12,    33,    19,    27,    28,    29,    30,
      31,    32,    33,     3,    30,    31,    32,    33,    36,    78,
      36,    35,   131,     3,    36,   134,     7,    36,   144,    19,
      11,    12,    13,    14,    15,    37,   152,    18,    70,    19,
      48,    73,    74,    64,    65,    66,    67,    68,    69,    30,
      31,    32,    33,    16,    33,    18,    17,    23,     5,     7,
       9,    10,    11,    11,    12,    13,    14,    15,    34,    35,
      18,    10,    11,    36,   106,    37,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     6,   119,    36,    37,
      38,   142,   143,   125,   126,   127,   104,    19,    38,   131,
     151,    36,   134,    16,   155,    18,     8,     9,    10,    11,
       7,    19,   144,    36,    11,    12,    13,    14,    15,    33,
     152,    18,    33,    36,    12,    17,    33,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,     7,    33,    36,
      37,    11,    12,    13,    14,    15,    18,    18,    18,    19,
      18,    14,    15,    16,     4,    18,    36,    20,    21,    36,
      30,    31,    32,    33,    14,    15,    16,     4,    18,    19,
      20,    21,    65,    66,    67,    68,    69,    14,    15,    16,
      36,    18,    16,    20,    21,    36,    19,    19,    36,    17,
      17,    36,    22,    36,    19,     2,    25,    16,   104,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,    23,    34,    35,    42,    44,    45,
      48,    33,    12,    36,    50,    36,    43,    37,    33,    37,
      55,    46,    16,    18,    36,    56,    53,     7,    11,    12,
      13,    14,    15,    18,    30,    31,    32,    33,    61,    62,
      63,    64,    65,    66,    67,    68,    19,    35,    49,    53,
      57,    44,    47,    48,    54,    68,    68,    68,    68,    68,
      68,    62,    68,    17,     5,     6,     8,     9,    10,    11,
       4,    14,    15,    16,    18,    20,    21,    19,    44,    51,
      52,    58,    36,    50,    38,    36,    19,    19,    36,    65,
      68,    67,    67,    67,    67,    67,    62,    62,    19,    62,
      69,    33,    33,    50,     3,    19,    24,    25,    26,    27,
      28,    29,    36,    38,    55,    59,    62,    33,    17,     3,
      19,    33,    52,    36,    62,    18,    18,    18,    36,    36,
      36,    16,    36,    62,    16,    36,    62,    62,    60,    62,
      61,    61,    19,    19,    36,    17,    17,    59,    59,    60,
      36,    22,    36,    59,    60,    19,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    42,    42,    43,
      42,    44,    44,    44,    46,    47,    45,    45,    48,    48,
      49,    48,    50,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    54,    54,    56,    55,    57,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    61,    62,    62,    63,    64,    64,    65,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     0,
       3,     1,     1,     1,     0,     0,     7,     2,     5,     6,
       0,     7,     1,     0,     1,     3,     3,     6,     2,     0,
       4,     7,     2,     2,     0,     5,     1,     2,     0,     2,
       1,     2,     3,     1,     5,     7,     5,     9,     2,     2,
       1,     0,     1,     3,     1,     1,     3,     1,     1,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     3,     3,     4,     3,     1,     3
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
        case 5:
#line 71 "subc.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-2].intVal) == 0) // no pointer
                declare((yyvsp[-1].idptr), (yyval.declptr) = makevardecl((yyvsp[-3].declptr)));
            else // pointer
                declare((yyvsp[-1].idptr), (yyval.declptr) = makevardecl(makeptrdecl((yyvsp[-3].declptr))));

            printscopestack();
        }
#line 1371 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "subc.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-5].intVal) == 0) // no pointer
                declare((yyvsp[-4].idptr), (yyval.declptr) = makeconstdecl(makearraydecl((yyvsp[-2].declptr)->value, makevardecl((yyvsp[-6].declptr)))));
            else // pointer
                declare((yyvsp[-4].idptr), (yyval.declptr) = makeconstdecl(makearraydecl((yyvsp[-2].declptr)->value, makevardecl(makeptrdecl((yyvsp[-6].declptr))))));
            
            printscopestack();
        }
#line 1384 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "subc.y" /* yacc.c:1646  */
    {
            pushscope();
            pushstelist((yyvsp[-1].declptr)->formalswithreturnid);
            printscopestack();
        }
#line 1394 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] what here?
        }
#line 1402 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 99 "subc.y" /* yacc.c:1646  */
    {
            pushscope();
            pushstelist((yyvsp[0].declptr)->formalswithreturnid);
            printscopestack();
            is_func_decl = 1;
            block_number = 0;
        }
#line 1414 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 107 "subc.y" /* yacc.c:1646  */
    {
            is_func_decl = 0;
            block_number = 0;
            struct ste *pop = popscope();
            printscopestack();
            // [TODO] delete pop using loop (for prevent from memory leak)
            // delete hash table id also!?
        }
#line 1427 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "subc.y" /* yacc.c:1646  */
    {
            printTypeDecl((yyvsp[0].declptr));
        }
#line 1435 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 122 "subc.y" /* yacc.c:1646  */
    {
            printTypeDecl((yyvsp[0].declptr));
        }
#line 1443 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 126 "subc.y" /* yacc.c:1646  */
    {
            REDUCE("type_specifier => struct_specifier\n");
        }
#line 1451 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 132 "subc.y" /* yacc.c:1646  */
    {
            pushscope();
            printscopestack();
        }
#line 1460 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 137 "subc.y" /* yacc.c:1646  */
    {
            printscopestack();
            struct ste *fields = popscope();
            printscopestack();
            declare((yyvsp[-3].idptr), ((yyval.declptr) = makestructdecl(fields)));
            printscopestack();
        }
#line 1472 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 145 "subc.y" /* yacc.c:1646  */
    {
            (yyval.declptr) = (yyvsp[-1].declptr);
        }
#line 1480 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 149 "subc.y" /* yacc.c:1646  */
    {
            struct decl *decl_ptr = findcurrentdecl((yyvsp[0].idptr));
            if(decl_ptr != NULL && (check_is_struct_type(decl_ptr) == 1)){
                (yyval.declptr) = decl_ptr;
                //printf("this is struct type\n");
            }
            else {
                (yyval.declptr) = NULL;
                printf("ERROR : this is not struct type\n");
            }
        }
#line 1496 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 163 "subc.y" /* yacc.c:1646  */
    {
            struct decl *procdecl = makeprocdecl();
            declare((yyvsp[-2].idptr), procdecl);
            pushscope(); /* for collecting formals */
            declare(returnid, (yyvsp[-4].declptr));

            // no formals

            struct ste *formals;
            formals = popscope();

            /* formals->decl is always returnid decl with return type*/
            procdecl->formalswithreturnid = formals;
            procdecl->returntype = formals->decl;
            procdecl->formals = formals->prev; // null in this production
            
            /* error ; struct_specifier returns NULL, because this is not a struct*/
            if (procdecl->returntype == NULL)
                printf("ERROR : this is not a struct\n");

            (yyval.declptr) = procdecl;
        }
#line 1523 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 186 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] what is VOID???????
        }
#line 1531 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 190 "subc.y" /* yacc.c:1646  */
    {
            struct decl *procdecl = makeprocdecl();
            declare((yyvsp[-1].idptr), procdecl);
            pushscope(); /* for collecting formals */
            declare(returnid, (yyvsp[-3].declptr));
            (yyval.declptr) = procdecl;
        }
#line 1543 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 198 "subc.y" /* yacc.c:1646  */
    {
            struct ste *formals;
            struct decl *procdecl = (yyvsp[-2].declptr);
            formals = popscope();

            /* formals->decl is always returnid decl with return type*/
            procdecl->formalswithreturnid = formals;
            procdecl->returntype = formals->decl;
            procdecl->formals = formals->prev;

            /*
                // check point (formal list-first)
                printf("formal list first param = %s\n", procdecl->formals->name->name);
                printf("formal list second param = %s\n", procdecl->formals->prev->name->name);
            */

            /* error ; struct_specifier returns NULL, because this is not a struct*/
            if (procdecl->returntype == NULL)
                printf("ERROR : this is not struct\n");
            
            (yyval.declptr) = procdecl; 
        }
#line 1570 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 222 "subc.y" /* yacc.c:1646  */
    { (yyval.intVal) = 1; }
#line 1576 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 223 "subc.y" /* yacc.c:1646  */
    { (yyval.intVal) = 0; }
#line 1582 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 231 "subc.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-1].intVal) == 0) // no pointer
                declare((yyvsp[0].idptr), (yyval.declptr) = makevardecl((yyvsp[-2].declptr)));
            else // pointer
                declare((yyvsp[0].idptr), (yyval.declptr) = makevardecl(makeptrdecl((yyvsp[-2].declptr))));
            printscopestack();
        }
#line 1594 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 239 "subc.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-4].intVal) == 0) // no pointer
                declare((yyvsp[-3].idptr), (yyval.declptr) = makeconstdecl(makearraydecl((yyvsp[-1].declptr)->value, makevardecl((yyvsp[-5].declptr)))));
            else // pointer
                declare((yyvsp[-3].idptr), (yyval.declptr) = makeconstdecl(makearraydecl((yyvsp[-1].declptr)->value, makevardecl(makeptrdecl((yyvsp[-5].declptr))))));
            
            printscopestack();
        }
#line 1607 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 250 "subc.y" /* yacc.c:1646  */
    {
            printf("def list!\n");
        }
#line 1615 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 257 "subc.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-2].intVal) == 0) // no pointer
                declare((yyvsp[-1].idptr), (yyval.declptr) = makevardecl((yyvsp[-3].declptr)));
            else // pointer
                declare((yyvsp[-1].idptr), (yyval.declptr) = makevardecl(makeptrdecl((yyvsp[-3].declptr))));

            printscopestack();
        }
#line 1628 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 266 "subc.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-5].intVal) == 0) // no pointer
                declare((yyvsp[-4].idptr), (yyval.declptr) = makeconstdecl(makearraydecl((yyvsp[-2].declptr)->value, makevardecl((yyvsp[-6].declptr)))));
            else // pointer
                declare((yyvsp[-4].idptr), (yyval.declptr) = makeconstdecl(makearraydecl((yyvsp[-2].declptr)->value, makevardecl(makeptrdecl((yyvsp[-6].declptr))))));
            
            printscopestack();
        }
#line 1641 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 275 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] what here?
        }
#line 1649 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 279 "subc.y" /* yacc.c:1646  */
    {
            pushscope();
            pushstelist((yyvsp[-1].declptr)->formalswithreturnid);
            printscopestack();
        }
#line 1659 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 286 "subc.y" /* yacc.c:1646  */
    {
            if (!is_func_decl || block_number > 0)
                pushscope();
            block_number++;
            printscopestack();
        }
#line 1670 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 292 "subc.y" /* yacc.c:1646  */
    {
            block_number--;
            if (!is_func_decl || block_number > 0)
                popscope();
            printscopestack();
        }
#line 1681 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 310 "subc.y" /* yacc.c:1646  */
    {

        }
#line 1689 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 314 "subc.y" /* yacc.c:1646  */
    {   
            /* return type check */
            if (check_same_type(findcurrentdecl(returnid), (yyvsp[-1].declptr))) {
                printf("return type is same type!\n");
            } else {
                printf("ERROR : return type error\n");
            }
        }
#line 1702 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 341 "subc.y" /* yacc.c:1646  */
    {
            /* assignment */
            // should have same type (ppt 23p)
            if (check_is_var((yyvsp[-2].declptr)) && check_same_type_for_unary((yyvsp[-2].declptr), (yyvsp[0].declptr)))
                (yyval.declptr) = (yyvsp[-2].declptr)->type;
            else
                printf("ERROR : assignment value is not same, or LHS value type is not variable!\n");
        }
#line 1715 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 356 "subc.y" /* yacc.c:1646  */
    {
            /* only for int type */
            if (check_same_type((yyvsp[-2].declptr), inttype) && check_same_type((yyvsp[0].declptr), inttype))
                (yyval.declptr) = inttype;
            else
                printf("ERROR : '||' operator is only for int type!\n");
        }
#line 1727 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 370 "subc.y" /* yacc.c:1646  */
    {
            /* only for int type */
            if (check_same_type((yyvsp[-2].declptr), inttype) && check_same_type((yyvsp[0].declptr), inttype))
                (yyval.declptr) = inttype;
            else
                printf("ERROR : '&&' operator is only for int type!\n");
        }
#line 1739 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 381 "subc.y" /* yacc.c:1646  */
    {
            /* char RELOP char */
            if (check_same_type((yyvsp[-2].declptr), chartype) && check_same_type((yyvsp[0].declptr), chartype))
                (yyval.declptr) = inttype;

            /* int RELOP int */
            else if (check_same_type((yyvsp[-2].declptr), inttype) && check_same_type((yyvsp[0].declptr), inttype))
                (yyval.declptr) = inttype;

            /* ERROR */
            else {
                printf("ERROR : binary RELOP binary is only for int, char type!\n");
                (yyval.declptr) = NULL;
            }
        }
#line 1759 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 397 "subc.y" /* yacc.c:1646  */
    {
            /* char EQUOP char */
            if (check_same_type((yyvsp[-2].declptr), chartype) && check_same_type((yyvsp[0].declptr), chartype))
                (yyval.declptr) = inttype;

            /* int EQUOP int */
            else if (check_same_type((yyvsp[-2].declptr), inttype) && check_same_type((yyvsp[0].declptr), inttype))
                (yyval.declptr) = inttype;

            /* pointer EQUOP pointer */
            else if (check_is_pointer_type((yyvsp[-2].declptr)) && check_is_pointer_type((yyvsp[0].declptr)))
                (yyval.declptr) = inttype;

            /* ERROR */
            else {
                printf("ERROR : binary EQUOP binary is only for int, char, pointer type!\n");
                (yyval.declptr) = NULL;
            }
        }
#line 1783 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 417 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] is it only okay for int+int ?
            // then, plustype is always inttype ?

            if (check_same_type((yyvsp[-2].declptr), inttype) && check_same_type((yyvsp[0].declptr), inttype))
                (yyval.declptr) = plustype((yyvsp[-2].declptr), (yyvsp[0].declptr));
            else
                printf("ERROR : binary '+' operands are only for integer!\n");
        }
#line 1797 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 427 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] is it only okay for int-int ?
            // then, plustype is always inttype ?

            if (check_same_type((yyvsp[-2].declptr), inttype) && check_same_type((yyvsp[0].declptr), inttype))
                (yyval.declptr) = plustype((yyvsp[-2].declptr), (yyvsp[0].declptr));
            else
                printf("ERROR : binary '-' operands are only for integer!\n");
        }
#line 1811 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 437 "subc.y" /* yacc.c:1646  */
    {
            if ((yyvsp[0].declptr) && (yyvsp[0].declptr)->type)
                (yyval.declptr) = (yyvsp[0].declptr)->type;
            else {
                printf("ERROR : unary is NULL or unary semantic value->type is null!\n");
            }
        }
#line 1823 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 447 "subc.y" /* yacc.c:1646  */
    {
            // problem : expr is type decl....
            // unary is just decl...
        }
#line 1832 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 452 "subc.y" /* yacc.c:1646  */
    {
            (yyval.declptr) = (yyvsp[-1].declptr);
        }
#line 1840 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 456 "subc.y" /* yacc.c:1646  */
    {
            (yyval.declptr) = makeintconstdecl(inttype, (yyvsp[0].intVal));
        }
#line 1848 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 460 "subc.y" /* yacc.c:1646  */
    {   
            // [TODO] how about value ?
            (yyval.declptr) = makeconstdecl(chartype);
        }
#line 1857 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 465 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] how about value ?
            // [Q] is this const ???
            (yyval.declptr) = makeconstdecl(stringtype);
        }
#line 1867 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 470 "subc.y" /* yacc.c:1646  */
    {
            // find ID
            (yyval.declptr) = findcurrentdecl((yyvsp[0].idptr));
            if (!(yyval.declptr))
                printf("ERROR : There is no such ID.\n");
        }
#line 1878 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 477 "subc.y" /* yacc.c:1646  */
    {   
            /* only integer */
            if (check_same_type_for_unary((yyvsp[0].declptr), inttype))
                (yyval.declptr) = (yyvsp[0].declptr);
            else
                printf("ERROR : '-' operator is only for integer.\n");
        }
#line 1890 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 485 "subc.y" /* yacc.c:1646  */
    {
            /* only for int type */
            if (check_same_type_for_unary((yyvsp[0].declptr), inttype))
                (yyval.declptr) = inttype;
            else
                printf("ERROR : '!' operator is only for int type!\n");
        }
#line 1902 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 493 "subc.y" /* yacc.c:1646  */
    {
            /* only char, integer */
            if (check_same_type_for_unary((yyvsp[-1].declptr), inttype) || check_same_type_for_unary((yyvsp[-1].declptr), chartype))
                (yyval.declptr) = (yyvsp[-1].declptr);
            else
                printf("ERROR : unary INCOP operator is only for char or integer.\n");
        }
#line 1914 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 501 "subc.y" /* yacc.c:1646  */
    {
            /* only char, integer */
            if (check_same_type_for_unary((yyvsp[-1].declptr), inttype) || check_same_type_for_unary((yyvsp[-1].declptr), chartype))
                (yyval.declptr) = (yyvsp[-1].declptr);
            else
                printf("ERROR : unary DECOP operator is only for char or integer.\n");
        }
#line 1926 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 509 "subc.y" /* yacc.c:1646  */
    {
            /* only char, integer */
            if (check_same_type_for_unary((yyvsp[0].declptr), inttype) || check_same_type_for_unary((yyvsp[0].declptr), chartype))
                (yyval.declptr) = (yyvsp[0].declptr);
            else
                printf("ERROR : unary INCOP operator is only for char or integer.\n");
        }
#line 1938 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 517 "subc.y" /* yacc.c:1646  */
    {
            /* only char, integer */
            if (check_same_type_for_unary((yyvsp[0].declptr), inttype) || check_same_type_for_unary((yyvsp[0].declptr), chartype))
                (yyval.declptr) = (yyvsp[0].declptr);
            else
                printf("ERROR : unary DECOP operator is only for char or integer.\n");
        }
#line 1950 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 525 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] get address ???
            // [TODO] ERROR ?
            (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1960 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 531 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] get pointer ???
            // [TODO] ERROR ?
            (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1970 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 537 "subc.y" /* yacc.c:1646  */
    {
            (yyval.declptr) = arrayaccess((yyvsp[-3].declptr), (yyvsp[-1].declptr));
        }
#line 1978 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 541 "subc.y" /* yacc.c:1646  */
    {
            (yyval.declptr) = structaccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
        }
#line 1986 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 545 "subc.y" /* yacc.c:1646  */
    {
            // STRUCTOP = '->'
            // [TODO] [Q] is this for only pointer?
            // if (check_is_pointer($1))
            (yyval.declptr) = structaccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
            // else printf("ERROR : this is not a pointer type!\n");
        }
#line 1998 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 553 "subc.y" /* yacc.c:1646  */
    {
            if (check_is_proc((yyvsp[-3].declptr)))
                (yyval.declptr) = check_function_call((yyvsp[-3].declptr), (yyvsp[-1].declptr));
            else
                printf ("ERROR : this is not a function!\n");
        }
#line 2009 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 560 "subc.y" /* yacc.c:1646  */
    {
            if (check_is_proc((yyvsp[-2].declptr)))
                (yyval.declptr) = check_function_call((yyvsp[-2].declptr), NULL);
            else
                printf ("ERROR : this is not a function!\n");
        }
#line 2020 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 569 "subc.y" /* yacc.c:1646  */
    {
            (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 2028 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 573 "subc.y" /* yacc.c:1646  */
    {
            // [TODO] args 에서 올라오는건 TYPE 이라 next 연결 못함..
            /*
            $1->next = $3;
            $$ = $1;
            */
        }
#line 2040 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2044 "subc.tab.c" /* yacc.c:1646  */
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
#line 581 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes  */

int yyerror (char* s) {
    fprintf (stderr, "%s\n", s);
}

void REDUCE( char* s) {
    printf("%s\n",s);
}
