/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "js_parser.y"

#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char *s) {
    fprintf(stderr, "Parser Error: %s\n", s);
}

ASTNode *root;

#line 88 "js_parser.tab.c"

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

#include "js_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FUNCTION = 3,                   /* FUNCTION  */
  YYSYMBOL_VAR = 4,                        /* VAR  */
  YYSYMBOL_LET = 5,                        /* LET  */
  YYSYMBOL_CONST = 6,                      /* CONST  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_NUMBER = 11,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 12,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 13,                    /* STRING  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 15,                      /* PLUS  */
  YYSYMBOL_MINUS = 16,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 17,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 18,                    /* DIVIDE  */
  YYSYMBOL_EQUALITY = 19,                  /* EQUALITY  */
  YYSYMBOL_LESS_THAN = 20,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 21,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL = 22,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 23,             /* GREATER_EQUAL  */
  YYSYMBOL_LBRACE = 24,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 25,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 26,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 27,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 28,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 29,                     /* COMMA  */
  YYSYMBOL_LBRACKET = 30,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 31,                  /* RBRACKET  */
  YYSYMBOL_COLON = 32,                     /* COLON  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_function_def = 35,              /* function_def  */
  YYSYMBOL_param_list = 36,                /* param_list  */
  YYSYMBOL_arg_list = 37,                  /* arg_list  */
  YYSYMBOL_statement_list = 38,            /* statement_list  */
  YYSYMBOL_if_statement = 39,              /* if_statement  */
  YYSYMBOL_if_else_statement = 40,         /* if_else_statement  */
  YYSYMBOL_while_statement = 41,           /* while_statement  */
  YYSYMBOL_statement = 42,                 /* statement  */
  YYSYMBOL_expression = 43,                /* expression  */
  YYSYMBOL_object_pairs = 44               /* object_pairs  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  107

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    45,    46,    50,    61,    62,    63,    67,
      68,    69,    73,    74,    78,    83,    89,    94,    96,    98,
     100,   102,   104,   106,   107,   108,   109,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   127,   128,   133,
     134,   135,   139,   144
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FUNCTION", "VAR",
  "LET", "CONST", "IF", "ELSE", "WHILE", "RETURN", "NUMBER", "IDENTIFIER",
  "STRING", "ASSIGN", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "EQUALITY",
  "LESS_THAN", "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL", "LBRACE",
  "RBRACE", "LPAREN", "RPAREN", "SEMICOLON", "COMMA", "LBRACKET",
  "RBRACKET", "COLON", "$accept", "program", "function_def", "param_list",
  "arg_list", "statement_list", "if_statement", "if_else_statement",
  "while_statement", "statement", "expression", "object_pairs", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      88,   -26,    -9,    -2,     0,     7,     5,     6,     3,   -87,
      -3,   -87,    11,     3,     3,    17,   -87,    57,   -87,   -87,
     -87,   -87,    87,   -87,    16,    29,    37,    41,     3,     3,
      30,   114,     3,     3,    33,   -16,   251,   239,   -87,   -87,
     -87,     3,     3,     3,     3,     3,     3,     3,     3,   -87,
      47,     3,     3,     3,   264,   277,   -87,   141,     1,   290,
       3,   -87,    63,   -87,   -87,   297,   297,    27,    27,    51,
      51,    51,    51,   -87,    25,   168,   195,   222,    53,    54,
     -87,   -87,     3,   290,    52,    61,    78,   -87,   -87,   -87,
     223,   223,   290,     3,   223,   -87,   115,   142,   290,   169,
      98,   -87,   -87,    72,   223,   196,   -87
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      35,    37,     0,     0,     0,     0,     2,     0,    23,    24,
      25,    12,     0,    26,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     9,     0,     0,     0,     0,     1,     3,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       6,     0,     0,     0,     0,     0,    21,     0,     0,    10,
       0,    40,     0,    41,    39,    27,    28,    29,    30,    31,
      32,    33,    34,     7,     0,     0,     0,     0,     0,     0,
      20,    38,     0,    42,     0,     0,     0,    17,    18,    19,
       0,     0,    11,     0,     0,     8,     0,     0,    43,     0,
      14,    16,     5,     0,     0,     0,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -87,   -87,    96,   -87,   -87,   -86,   -87,   -87,   -87,   -17,
      -7,   -87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    15,    16,    74,    58,    17,    18,    19,    20,    21,
      22,    35
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      40,    31,    23,    24,    96,    97,    36,    37,    99,    61,
      25,    32,    26,    62,     9,    30,    11,    38,   105,    27,
       2,    54,    55,    33,    34,    57,    59,    12,    81,    13,
      82,    28,    29,    14,    65,    66,    67,    68,    69,    70,
      71,    72,    50,    51,    75,    76,    77,    45,    46,    47,
      48,    52,    85,    83,    86,    53,    33,    -4,     1,    73,
      -4,     3,     4,     5,     6,    60,     7,     8,     9,    10,
      11,    -5,    -5,    -5,    -5,    92,    84,    90,    91,    40,
      40,    12,    40,    13,    93,    94,    98,    14,    40,     1,
      95,     2,     3,     4,     5,     6,   104,     7,     8,     9,
      10,    11,    41,    42,    43,    44,   103,    45,    46,    47,
      48,    39,    12,     0,    13,    49,     1,     0,    14,     3,
       4,     5,     6,     0,     7,     8,     9,    10,    11,    41,
      42,    43,    44,     0,    45,    46,    47,    48,     0,    12,
     100,    13,    56,     1,     0,    14,     3,     4,     5,     6,
       0,     7,     8,     9,    10,    11,    41,    42,    43,    44,
       0,    45,    46,    47,    48,     0,    12,   101,    13,    80,
       1,     0,    14,     3,     4,     5,     6,     0,     7,     8,
       9,    10,    11,    41,    42,    43,    44,     0,    45,    46,
      47,    48,     0,    12,   102,    13,    87,     1,     0,    14,
       3,     4,     5,     6,     0,     7,     8,     9,    10,    11,
      41,    42,    43,    44,     0,    45,    46,    47,    48,     0,
      12,   106,    13,    88,     1,     0,    14,     3,     4,     5,
       6,     0,     7,     8,     9,    10,    11,    41,    42,    43,
      44,     0,    45,    46,    47,    48,     0,    12,     0,    13,
      89,     0,     0,    14,    41,    42,    43,    44,     0,    45,
      46,    47,    48,     0,     0,     0,    41,    42,    43,    44,
      64,    45,    46,    47,    48,     0,     0,     0,    63,    41,
      42,    43,    44,     0,    45,    46,    47,    48,     0,     0,
       0,    78,    41,    42,    43,    44,     0,    45,    46,    47,
      48,     0,     0,     0,    79,    41,    42,    43,    44,     0,
      45,    46,    47,    48,    43,    44,     0,    45,    46,    47,
      48
};

static const yytype_int8 yycheck[] =
{
      17,     8,    28,    12,    90,    91,    13,    14,    94,    25,
      12,    14,    12,    29,    11,    12,    13,     0,   104,    12,
       3,    28,    29,    26,    13,    32,    33,    24,    27,    26,
      29,    26,    26,    30,    41,    42,    43,    44,    45,    46,
      47,    48,    26,    14,    51,    52,    53,    20,    21,    22,
      23,    14,    27,    60,    29,    14,    26,     0,     1,    12,
       3,     4,     5,     6,     7,    32,     9,    10,    11,    12,
      13,    20,    21,    22,    23,    82,    13,    24,    24,    96,
      97,    24,    99,    26,    32,    24,    93,    30,   105,     1,
      12,     3,     4,     5,     6,     7,    24,     9,    10,    11,
      12,    13,    15,    16,    17,    18,     8,    20,    21,    22,
      23,    15,    24,    -1,    26,    28,     1,    -1,    30,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    -1,    24,
      25,    26,    28,     1,    -1,    30,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    -1,    24,    25,    26,    28,
       1,    -1,    30,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    -1,    24,    25,    26,    28,     1,    -1,    30,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    -1,
      24,    25,    26,    28,     1,    -1,    30,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    -1,    24,    -1,    26,
      28,    -1,    -1,    30,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    15,    16,    17,    18,
      31,    20,    21,    22,    23,    -1,    -1,    -1,    27,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    17,    18,    -1,    20,    21,    22,
      23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     9,    10,    11,
      12,    13,    24,    26,    30,    34,    35,    38,    39,    40,
      41,    42,    43,    28,    12,    12,    12,    12,    26,    26,
      12,    43,    14,    26,    13,    44,    43,    43,     0,    35,
      42,    15,    16,    17,    18,    20,    21,    22,    23,    28,
      26,    14,    14,    14,    43,    43,    28,    43,    37,    43,
      32,    25,    29,    27,    31,    43,    43,    43,    43,    43,
      43,    43,    43,    12,    36,    43,    43,    43,    27,    27,
      28,    27,    29,    43,    13,    27,    29,    28,    28,    28,
      24,    24,    43,    32,    24,    12,    38,    38,    43,    38,
      25,    25,    25,     8,    24,    38,    25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    34,    35,    36,    36,    36,    37,
      37,    37,    38,    38,    39,    40,    41,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    44,    44
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     8,     0,     1,     3,     0,
       1,     3,     1,     2,     7,    11,     7,     5,     5,     5,
       4,     3,     2,     1,     1,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     3,
       3,     3,     3,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: function_def  */
#line 44 "js_parser.y"
                                          { root = (yyvsp[0].node); }
#line 1222 "js_parser.tab.c"
    break;

  case 3: /* program: program function_def  */
#line 45 "js_parser.y"
                                          { (yyval.node) = new_node("FunctionList", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1228 "js_parser.tab.c"
    break;

  case 4: /* program: statement_list  */
#line 46 "js_parser.y"
                                          { root = (yyvsp[0].node); }
#line 1234 "js_parser.tab.c"
    break;

  case 5: /* function_def: FUNCTION IDENTIFIER LPAREN param_list RPAREN LBRACE statement_list RBRACE  */
#line 51 "js_parser.y"
    {
        ASTNode *paramsNode = new_node("Params", (yyvsp[-4].node), NULL);
        ASTNode *bodyNode = (yyvsp[-1].node);
        (yyval.node) = new_node("Function", new_node((yyvsp[-6].str), paramsNode, NULL), bodyNode);
        free((yyvsp[-6].str));
        print_ast((yyval.node), 0);
    }
#line 1246 "js_parser.tab.c"
    break;

  case 6: /* param_list: %empty  */
#line 61 "js_parser.y"
                                          { (yyval.node) = NULL; }
#line 1252 "js_parser.tab.c"
    break;

  case 7: /* param_list: IDENTIFIER  */
#line 62 "js_parser.y"
                                          { (yyval.node) = new_node((yyvsp[0].str), NULL, NULL); free((yyvsp[0].str)); }
#line 1258 "js_parser.tab.c"
    break;

  case 8: /* param_list: param_list COMMA IDENTIFIER  */
#line 63 "js_parser.y"
                                          { (yyval.node) = new_node("ParamList", (yyvsp[-2].node), new_node((yyvsp[0].str), NULL, NULL)); free((yyvsp[0].str)); }
#line 1264 "js_parser.tab.c"
    break;

  case 9: /* arg_list: %empty  */
#line 67 "js_parser.y"
                                          { (yyval.node) = NULL; }
#line 1270 "js_parser.tab.c"
    break;

  case 10: /* arg_list: expression  */
#line 68 "js_parser.y"
                                          { (yyval.node) = (yyvsp[0].node); }
#line 1276 "js_parser.tab.c"
    break;

  case 11: /* arg_list: arg_list COMMA expression  */
#line 69 "js_parser.y"
                                          { (yyval.node) = new_node("ArgList", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1282 "js_parser.tab.c"
    break;

  case 12: /* statement_list: statement  */
#line 73 "js_parser.y"
                                          { (yyval.node) = (yyvsp[0].node); }
#line 1288 "js_parser.tab.c"
    break;

  case 13: /* statement_list: statement_list statement  */
#line 74 "js_parser.y"
                                          { (yyval.node) = new_node("StatementList", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1294 "js_parser.tab.c"
    break;

  case 14: /* if_statement: IF LPAREN expression RPAREN LBRACE statement_list RBRACE  */
#line 79 "js_parser.y"
    { (yyval.node) = new_node("If", (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1300 "js_parser.tab.c"
    break;

  case 15: /* if_else_statement: IF LPAREN expression RPAREN LBRACE statement_list RBRACE ELSE LBRACE statement_list RBRACE  */
#line 85 "js_parser.y"
    { (yyval.node) = new_node("IfElse", (yyvsp[-8].node), new_node("Else", (yyvsp[-5].node), (yyvsp[-1].node))); }
#line 1306 "js_parser.tab.c"
    break;

  case 16: /* while_statement: WHILE LPAREN expression RPAREN LBRACE statement_list RBRACE  */
#line 90 "js_parser.y"
    { (yyval.node) = new_node("While", (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1312 "js_parser.tab.c"
    break;

  case 17: /* statement: VAR IDENTIFIER ASSIGN expression SEMICOLON  */
#line 95 "js_parser.y"
    { (yyval.node) = new_node("VarDecl", new_node((yyvsp[-3].str), NULL, NULL), (yyvsp[-1].node)); free((yyvsp[-3].str)); }
#line 1318 "js_parser.tab.c"
    break;

  case 18: /* statement: LET IDENTIFIER ASSIGN expression SEMICOLON  */
#line 97 "js_parser.y"
    { (yyval.node) = new_node("LetDecl", new_node((yyvsp[-3].str), NULL, NULL), (yyvsp[-1].node)); free((yyvsp[-3].str)); }
#line 1324 "js_parser.tab.c"
    break;

  case 19: /* statement: CONST IDENTIFIER ASSIGN expression SEMICOLON  */
#line 99 "js_parser.y"
    { (yyval.node) = new_node("ConstDecl", new_node((yyvsp[-3].str), NULL, NULL), (yyvsp[-1].node)); free((yyvsp[-3].str)); }
#line 1330 "js_parser.tab.c"
    break;

  case 20: /* statement: IDENTIFIER ASSIGN expression SEMICOLON  */
#line 101 "js_parser.y"
    { (yyval.node) = new_node("Assignment", new_node((yyvsp[-3].str), NULL, NULL), (yyvsp[-1].node)); free((yyvsp[-3].str)); }
#line 1336 "js_parser.tab.c"
    break;

  case 21: /* statement: RETURN expression SEMICOLON  */
#line 103 "js_parser.y"
    { (yyval.node) = new_node("Return", (yyvsp[-1].node), NULL); }
#line 1342 "js_parser.tab.c"
    break;

  case 22: /* statement: expression SEMICOLON  */
#line 105 "js_parser.y"
    { (yyval.node) = new_node("Expression", (yyvsp[-1].node), NULL); }
#line 1348 "js_parser.tab.c"
    break;

  case 26: /* statement: error SEMICOLON  */
#line 109 "js_parser.y"
                                          { (yyval.node) = NULL; }
#line 1354 "js_parser.tab.c"
    break;

  case 27: /* expression: expression PLUS expression  */
#line 113 "js_parser.y"
                                          { (yyval.node) = new_node("Plus", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1360 "js_parser.tab.c"
    break;

  case 28: /* expression: expression MINUS expression  */
#line 114 "js_parser.y"
                                          { (yyval.node) = new_node("Minus", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1366 "js_parser.tab.c"
    break;

  case 29: /* expression: expression MULTIPLY expression  */
#line 115 "js_parser.y"
                                          { (yyval.node) = new_node("Multiply", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1372 "js_parser.tab.c"
    break;

  case 30: /* expression: expression DIVIDE expression  */
#line 116 "js_parser.y"
                                          { (yyval.node) = new_node("Divide", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1378 "js_parser.tab.c"
    break;

  case 31: /* expression: expression LESS_THAN expression  */
#line 117 "js_parser.y"
                                          { (yyval.node) = new_node("LessThan", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1384 "js_parser.tab.c"
    break;

  case 32: /* expression: expression GREATER_THAN expression  */
#line 118 "js_parser.y"
                                          { (yyval.node) = new_node("GreaterThan", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1390 "js_parser.tab.c"
    break;

  case 33: /* expression: expression LESS_EQUAL expression  */
#line 119 "js_parser.y"
                                          { (yyval.node) = new_node("LessEqual", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1396 "js_parser.tab.c"
    break;

  case 34: /* expression: expression GREATER_EQUAL expression  */
#line 120 "js_parser.y"
                                          { (yyval.node) = new_node("GreaterEqual", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1402 "js_parser.tab.c"
    break;

  case 35: /* expression: IDENTIFIER  */
#line 121 "js_parser.y"
                                          { (yyval.node) = new_node((yyvsp[0].str), NULL, NULL); free((yyvsp[0].str)); }
#line 1408 "js_parser.tab.c"
    break;

  case 36: /* expression: NUMBER  */
#line 122 "js_parser.y"
             {
        char buf[20];
        sprintf(buf, "%d", (yyvsp[0].num));
        (yyval.node) = new_node(buf, NULL, NULL);
    }
#line 1418 "js_parser.tab.c"
    break;

  case 37: /* expression: STRING  */
#line 127 "js_parser.y"
                                          { (yyval.node) = new_node((yyvsp[0].str), NULL, NULL); free((yyvsp[0].str)); }
#line 1424 "js_parser.tab.c"
    break;

  case 38: /* expression: IDENTIFIER LPAREN arg_list RPAREN  */
#line 128 "js_parser.y"
                                         {
        ASTNode *callArgs = (yyvsp[-1].node);
        (yyval.node) = new_node("Call", new_node((yyvsp[-3].str), NULL, NULL), callArgs);
        free((yyvsp[-3].str));
    }
#line 1434 "js_parser.tab.c"
    break;

  case 39: /* expression: LBRACKET expression RBRACKET  */
#line 133 "js_parser.y"
                                          { (yyval.node) = new_node("Array", (yyvsp[-1].node), NULL); }
#line 1440 "js_parser.tab.c"
    break;

  case 40: /* expression: LBRACE object_pairs RBRACE  */
#line 134 "js_parser.y"
                                          { (yyval.node) = new_node("Object", (yyvsp[-1].node), NULL); }
#line 1446 "js_parser.tab.c"
    break;

  case 41: /* expression: LPAREN expression RPAREN  */
#line 135 "js_parser.y"
                                          { (yyval.node) = (yyvsp[-1].node); }
#line 1452 "js_parser.tab.c"
    break;

  case 42: /* object_pairs: STRING COLON expression  */
#line 140 "js_parser.y"
    {
        (yyval.node) = new_node("Pair", new_node((yyvsp[-2].str), NULL, NULL), (yyvsp[0].node));
        free((yyvsp[-2].str));
    }
#line 1461 "js_parser.tab.c"
    break;

  case 43: /* object_pairs: object_pairs COMMA STRING COLON expression  */
#line 145 "js_parser.y"
    {
        ASTNode *pair = new_node("Pair", new_node((yyvsp[-2].str), NULL, NULL), (yyvsp[0].node));
        free((yyvsp[-2].str));
        (yyval.node) = new_node("ObjectPairs", (yyvsp[-4].node), pair);
    }
#line 1471 "js_parser.tab.c"
    break;


#line 1475 "js_parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 152 "js_parser.y"


ASTNode *new_node(char *name, ASTNode *left, ASTNode *right) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->name = strdup(name);
    node->left = left;
    node->right = right;
    return node;
}

void print_ast(ASTNode *node, int depth) {
    if (!node) return;
    for (int i = 0; i < depth; i++) printf("  ");
    printf("%s\n", node->name);
    print_ast(node->left, depth + 1);
    print_ast(node->right, depth + 1);
}

void export_ast_to_dot(ASTNode *node, FILE *out) {
    static int node_id = 0;
    int current_id = node_id++;

    fprintf(out, "  node%d [label=\"%s\"];\n", current_id, node->name);

    if (node->left) {
        int left_id = node_id;
        export_ast_to_dot(node->left, out);
        fprintf(out, "  node%d -> node%d;\n", current_id, left_id);
    }

    if (node->right) {
        int right_id = node_id;
        export_ast_to_dot(node->right, out);
        fprintf(out, "  node%d -> node%d;\n", current_id, right_id);
    }
}

void export_ast_to_json(ASTNode *node, FILE *out) {
    if (!node) {
        fprintf(out, "null");
        return;
    }

    fprintf(out, "{ \"name\": \"%s\"", node->name);

    if (node->left || node->right) {
        fprintf(out, ", \"children\": [");
        export_ast_to_json(node->left, out);
        if (node->right) {
            fprintf(out, ", ");
            export_ast_to_json(node->right, out);
        }
        fprintf(out, "]");
    }

    fprintf(out, "}");
}



int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            fprintf(stderr, "Error opening file %s\n", argv[1]);
            return 1;
        }
        yyin = file;
    }

    yyparse(); // builds the AST and assigns it to `root`

    // Export AST to Graphviz DOT format
    FILE *dotfile = fopen("ast.dot", "w");
    if (dotfile) {
        fprintf(dotfile, "digraph AST {\n");
        export_ast_to_dot(root, dotfile);
        fprintf(dotfile, "}\n");
        fclose(dotfile);
        printf("AST exported to ast.dot\n");
    } else {
        fprintf(stderr, "Error writing to ast.dot\n");
    }

    // Export AST to JSON format
    FILE *jsonfile = fopen("ast.json", "w");
    if (jsonfile) {
        export_ast_to_json(root, jsonfile);
        fclose(jsonfile);
        printf("AST exported to ast.json\n");
    } else {
        fprintf(stderr, "Error writing to ast.json\n");
    }

    return 0;
}
