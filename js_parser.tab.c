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
#line 1 "js_parser.y"

#include "ast.h"
#include "symbol_table.h"
#include "semantic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern FILE *yyin;
extern char *yytext;
extern int yylineno;

void yyerror(const char *s) {
    fprintf(stderr, "Parser Error at line %d: %s\n", yylineno, s);
}

ASTNode *root;
SymbolTable *symbolTable;

char* escape_string(const char *str) {
    char *escaped = malloc(strlen(str)*2 + 1);
    char *ptr = escaped;
    while (*str) {
        if (*str == '"') {
            *ptr++ = '\\';
        }
        *ptr++ = *str++;
    }
    *ptr = '\0';
    return escaped;
}

#line 105 "js_parser.tab.c"

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
  YYSYMBOL_OR = 3,                         /* OR  */
  YYSYMBOL_AND = 4,                        /* AND  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_VAR = 6,                        /* VAR  */
  YYSYMBOL_LET = 7,                        /* LET  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_RETURN = 12,                    /* RETURN  */
  YYSYMBOL_INSTANCEOF = 13,                /* INSTANCEOF  */
  YYSYMBOL_IN = 14,                        /* IN  */
  YYSYMBOL_TYPEOF = 15,                    /* TYPEOF  */
  YYSYMBOL_VOID = 16,                      /* VOID  */
  YYSYMBOL_DELETE = 17,                    /* DELETE  */
  YYSYMBOL_NEW = 18,                       /* NEW  */
  YYSYMBOL_THIS = 19,                      /* THIS  */
  YYSYMBOL_PLUS_PLUS = 20,                 /* PLUS_PLUS  */
  YYSYMBOL_MINUS_MINUS = 21,               /* MINUS_MINUS  */
  YYSYMBOL_LEFT_SHIFT = 22,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 23,               /* RIGHT_SHIFT  */
  YYSYMBOL_UNSIGNED_RIGHT_SHIFT = 24,      /* UNSIGNED_RIGHT_SHIFT  */
  YYSYMBOL_NUMBER = 25,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 26,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 28,                   /* BOOLEAN  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 32,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 33,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 34,                    /* MODULO  */
  YYSYMBOL_NOT = 35,                       /* NOT  */
  YYSYMBOL_BIT_NOT = 36,                   /* BIT_NOT  */
  YYSYMBOL_BIT_AND = 37,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 38,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 39,                   /* BIT_XOR  */
  YYSYMBOL_EQUALITY = 40,                  /* EQUALITY  */
  YYSYMBOL_NEQ = 41,                       /* NEQ  */
  YYSYMBOL_STRICT_EQUALITY = 42,           /* STRICT_EQUALITY  */
  YYSYMBOL_STRICT_INEQUALITY = 43,         /* STRICT_INEQUALITY  */
  YYSYMBOL_LESS_THAN = 44,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 45,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL = 46,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 47,             /* GREATER_EQUAL  */
  YYSYMBOL_LBRACE = 48,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 49,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 50,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 51,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 52,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 53,                     /* COMMA  */
  YYSYMBOL_LBRACKET = 54,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 55,                  /* RBRACKET  */
  YYSYMBOL_COLON = 56,                     /* COLON  */
  YYSYMBOL_DOT = 57,                       /* DOT  */
  YYSYMBOL_58_ = 58,                       /* '?'  */
  YYSYMBOL_59_ = 59,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_function_def = 62,              /* function_def  */
  YYSYMBOL_param_list = 63,                /* param_list  */
  YYSYMBOL_arg_list = 64,                  /* arg_list  */
  YYSYMBOL_statement_list = 65,            /* statement_list  */
  YYSYMBOL_if_statement = 66,              /* if_statement  */
  YYSYMBOL_if_else_statement = 67,         /* if_else_statement  */
  YYSYMBOL_while_statement = 68,           /* while_statement  */
  YYSYMBOL_statement = 69,                 /* statement  */
  YYSYMBOL_expression = 70,                /* expression  */
  YYSYMBOL_assignment_expr = 71,           /* assignment_expr  */
  YYSYMBOL_conditional_expr = 72,          /* conditional_expr  */
  YYSYMBOL_logical_or_expr = 73,           /* logical_or_expr  */
  YYSYMBOL_logical_and_expr = 74,          /* logical_and_expr  */
  YYSYMBOL_bitwise_or_expr = 75,           /* bitwise_or_expr  */
  YYSYMBOL_bitwise_xor_expr = 76,          /* bitwise_xor_expr  */
  YYSYMBOL_bitwise_and_expr = 77,          /* bitwise_and_expr  */
  YYSYMBOL_equality_expr = 78,             /* equality_expr  */
  YYSYMBOL_relational_expr = 79,           /* relational_expr  */
  YYSYMBOL_shift_expr = 80,                /* shift_expr  */
  YYSYMBOL_additive_expr = 81,             /* additive_expr  */
  YYSYMBOL_multiplicative_expr = 82,       /* multiplicative_expr  */
  YYSYMBOL_unary_expr = 83,                /* unary_expr  */
  YYSYMBOL_postfix_expr = 84,              /* postfix_expr  */
  YYSYMBOL_primary_expr = 85,              /* primary_expr  */
  YYSYMBOL_literal = 86,                   /* literal  */
  YYSYMBOL_identifier = 87,                /* identifier  */
  YYSYMBOL_array_literal = 88,             /* array_literal  */
  YYSYMBOL_object_literal = 89,            /* object_literal  */
  YYSYMBOL_object_properties = 90,         /* object_properties  */
  YYSYMBOL_object_property = 91,           /* object_property  */
  YYSYMBOL_array_elements = 92             /* array_elements  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   508

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
       2,     2,     2,     2,     2,     2,     2,     2,    59,     2,
       2,     2,     2,    58,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    89,    90,    94,   104,   105,   106,   110,
     111,   112,   116,   117,   121,   126,   131,   136,   138,   140,
     142,   144,   145,   146,   147,   149,   151,   155,   159,   160,
     164,   165,   170,   171,   175,   176,   180,   181,   185,   186,
     190,   191,   195,   196,   197,   198,   199,   203,   204,   205,
     206,   207,   208,   209,   213,   214,   215,   216,   220,   221,
     222,   226,   227,   228,   229,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   245,   246,   247,   248,   249,   250,
     254,   255,   256,   257,   258,   259,   263,   268,   269,   273,
     277,   281,   285,   286,   287,   291,   292,   296,   297,   298
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
  "\"end of file\"", "error", "\"invalid token\"", "OR", "AND",
  "FUNCTION", "VAR", "LET", "CONST", "IF", "ELSE", "WHILE", "RETURN",
  "INSTANCEOF", "IN", "TYPEOF", "VOID", "DELETE", "NEW", "THIS",
  "PLUS_PLUS", "MINUS_MINUS", "LEFT_SHIFT", "RIGHT_SHIFT",
  "UNSIGNED_RIGHT_SHIFT", "NUMBER", "IDENTIFIER", "STRING", "BOOLEAN",
  "ASSIGN", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULO", "NOT",
  "BIT_NOT", "BIT_AND", "BIT_OR", "BIT_XOR", "EQUALITY", "NEQ",
  "STRICT_EQUALITY", "STRICT_INEQUALITY", "LESS_THAN", "GREATER_THAN",
  "LESS_EQUAL", "GREATER_EQUAL", "LBRACE", "RBRACE", "LPAREN", "RPAREN",
  "SEMICOLON", "COMMA", "LBRACKET", "RBRACKET", "COLON", "DOT", "'?'",
  "':'", "$accept", "program", "function_def", "param_list", "arg_list",
  "statement_list", "if_statement", "if_else_statement", "while_statement",
  "statement", "expression", "assignment_expr", "conditional_expr",
  "logical_or_expr", "logical_and_expr", "bitwise_or_expr",
  "bitwise_xor_expr", "bitwise_and_expr", "equality_expr",
  "relational_expr", "shift_expr", "additive_expr", "multiplicative_expr",
  "unary_expr", "postfix_expr", "primary_expr", "literal", "identifier",
  "array_literal", "object_literal", "object_properties",
  "object_property", "array_elements", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-65)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     264,   -45,     3,    30,    34,    39,   -36,    27,    36,   454,
     454,   454,   454,   -65,   -65,    56,   -65,   -65,   454,   454,
     454,   454,   214,    36,    36,     8,   -65,   164,   -65,   -65,
     -65,   -65,    42,   -65,   -65,     0,    88,    59,    60,    61,
     -23,    -2,    46,     9,    41,   -65,   -16,   -65,   -65,   -65,
     -65,   -65,   -65,    50,    74,    75,    79,    36,    36,    20,
      57,   -65,   -65,   -65,   -65,   -65,    36,   -65,   -65,   -65,
     -65,   -20,    54,   314,   -43,   -65,    62,   -65,   -18,   -65,
     -65,   -65,   -65,   454,    36,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   -65,   -65,    36,
      36,    85,    86,    36,    36,    36,    68,    70,    66,    54,
     -65,   -65,    36,    36,   -65,   -65,    20,   -65,    36,   -65,
      88,    64,    59,    60,    61,   -23,    -2,    -2,    -2,    -2,
      46,    46,    46,    46,    46,    46,     9,     9,     9,    41,
      41,   -65,   -65,   -65,     6,   -65,    69,   -65,   -65,    40,
      73,    76,    77,   414,   414,   -65,   -65,   -65,   -65,   454,
     -65,    36,   -65,    78,   101,   -65,   -65,   -65,   120,   -65,
     -65,   -65,   414,   -65,   414,   364,   -65,   -65
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    89,    87,    88,     0,     0,
       0,     0,     0,     0,    97,     0,     2,     0,    21,    22,
      23,    12,     0,    27,    28,    30,    32,    34,    36,    38,
      40,    42,    47,    54,    58,    61,    65,    74,    80,    81,
      82,    83,    26,     0,     0,     0,     0,     0,     0,    92,
       0,    89,    70,    71,    72,    73,     0,    68,    69,    66,
      67,    89,    87,     0,     0,    93,     0,    98,     0,     1,
       3,    13,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,     9,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
      24,    29,     0,     0,    25,    91,     0,    84,     0,    90,
      33,     0,    35,    37,    39,    41,    43,    44,    45,    46,
      52,    53,    48,    49,    50,    51,    55,    56,    57,    59,
      60,    62,    63,    64,     0,    10,     0,    76,     7,     0,
       0,     0,     0,     0,     0,    95,    96,    94,    99,     0,
      77,     0,    75,     0,     0,    17,    18,    19,    14,    16,
      31,    11,     0,     8,     0,     0,    15,     5
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -65,   -65,   106,   -65,   -65,   -21,   -65,   -65,   -65,   -25,
      -8,    67,   -37,   -65,    51,    52,    49,    53,    48,   -64,
     -15,   -12,    -7,    12,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,    15,   -65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    25,    26,   159,   154,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      74,    75,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    73,    81,    83,   107,   108,   125,    52,    79,    66,
     126,    93,    94,     2,    57,    76,    77,    89,    90,    91,
      92,    62,    63,    64,    65,   136,   137,   138,   139,    53,
      67,    68,    69,    70,   109,   128,   122,   129,   110,   102,
     103,   111,    95,    96,    97,    98,   118,   119,    81,   116,
     117,     9,    10,    11,    12,    13,    54,   170,    84,   171,
      55,    14,    15,    16,    17,    56,    18,    19,    99,   100,
     101,    20,    21,   104,   105,   106,   131,    58,   140,   141,
     142,   143,   144,   145,    59,    66,    23,   146,   147,   148,
      24,   173,    85,   174,    82,   149,   150,    86,    88,    87,
     112,   155,   156,   113,   114,   160,   161,   162,   115,   120,
     123,   157,   158,   127,   165,   166,   151,   152,   153,   163,
     168,   164,   122,   169,   172,   175,   182,   183,   176,   177,
     184,    80,   180,   121,   130,   133,   135,   132,   178,   179,
     134,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
      81,   185,     0,   181,    -4,     1,     0,     0,     0,    -4,
       3,     4,     5,     6,     0,     7,     8,     0,     0,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,    14,
      15,    16,    17,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,    23,     1,     0,     0,    24,     0,
       3,     4,     5,     6,     0,     7,     8,     0,     0,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,    14,
      71,    72,    17,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,   -92,    23,     1,     0,   -92,    24,     2,
       3,     4,     5,     6,     0,     7,     8,     0,     0,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,    14,
      15,    16,    17,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,    23,     1,     0,     0,    24,     0,
       3,     4,     5,     6,     0,     7,     8,     0,     0,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,    14,
      15,    16,    17,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,   124,    23,     1,     0,     0,    24,     0,
       3,     4,     5,     6,     0,     7,     8,     0,     0,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,    14,
      15,    16,    17,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,   187,    23,     1,     0,     0,    24,     0,
       3,     4,     5,     6,     0,     7,     8,     0,     0,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,    14,
      15,    16,    17,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,    23,     0,     0,     0,    24,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,    14,
      61,    16,    17,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,    23,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
       8,    22,    27,     3,    20,    21,    49,    52,     0,    29,
      53,    13,    14,     5,    50,    23,    24,    40,    41,    42,
      43,     9,    10,    11,    12,    89,    90,    91,    92,    26,
      18,    19,    20,    21,    50,    53,    56,    55,    54,    30,
      31,    57,    44,    45,    46,    47,    26,    27,    73,    57,
      58,    15,    16,    17,    18,    19,    26,    51,    58,    53,
      26,    25,    26,    27,    28,    26,    30,    31,    22,    23,
      24,    35,    36,    32,    33,    34,    84,    50,    93,    94,
      95,    96,    97,    98,    48,    29,    50,    99,   100,   101,
      54,    51,     4,    53,    52,   102,   103,    38,    37,    39,
      50,   109,   110,    29,    29,   113,   114,   115,    29,    52,
      56,    26,    26,    51,   122,   123,   104,   105,   106,    51,
     128,    51,    56,    59,    55,    52,    48,    26,    52,    52,
      10,    25,   169,    66,    83,    86,    88,    85,   163,   164,
      87,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
     185,   182,    -1,   171,     0,     1,    -1,    -1,    -1,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,     1,    -1,    -1,    54,    -1,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,     1,    -1,    53,    54,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,     1,    -1,    -1,    54,    -1,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,     1,    -1,    -1,    54,    -1,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,     1,    -1,    -1,    54,    -1,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    54,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,     6,     7,     8,     9,    11,    12,    15,
      16,    17,    18,    19,    25,    26,    27,    28,    30,    31,
      35,    36,    48,    50,    54,    61,    62,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    52,    26,    26,    26,    26,    50,    50,    48,
      70,    26,    83,    83,    83,    83,    29,    83,    83,    83,
      83,    26,    27,    65,    90,    91,    70,    70,    92,     0,
      62,    69,    52,     3,    58,     4,    38,    39,    37,    40,
      41,    42,    43,    13,    14,    44,    45,    46,    47,    22,
      23,    24,    30,    31,    32,    33,    34,    20,    21,    50,
      54,    57,    50,    29,    29,    29,    70,    70,    26,    27,
      52,    71,    56,    56,    49,    49,    53,    51,    53,    55,
      74,    70,    75,    76,    77,    78,    79,    79,    79,    79,
      80,    80,    80,    80,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    83,    64,    70,    70,    26,    26,    63,
      70,    70,    70,    51,    51,    70,    70,    91,    70,    59,
      51,    53,    55,    51,    53,    52,    52,    52,    69,    69,
      72,    70,    48,    26,    10,    65,    69,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    61,    62,    63,    63,    63,    64,
      64,    64,    65,    65,    66,    67,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    81,    81,
      81,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    87,
      88,    89,    90,    90,    90,    91,    91,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     8,     0,     1,     3,     0,
       1,     3,     1,     2,     5,     7,     5,     5,     5,     5,
       2,     1,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     3,     4,     2,     2,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     0,     1,     3,     3,     3,     0,     1,     3
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
#line 88 "js_parser.y"
                                          { root = (yyvsp[0].node); }
#line 1380 "js_parser.tab.c"
    break;

  case 3: /* program: program function_def  */
#line 89 "js_parser.y"
                                          { (yyval.node) = new_node("Program", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1386 "js_parser.tab.c"
    break;

  case 4: /* program: statement_list  */
#line 90 "js_parser.y"
                                          { root = (yyvsp[0].node); }
#line 1392 "js_parser.tab.c"
    break;

  case 5: /* function_def: FUNCTION IDENTIFIER LPAREN param_list RPAREN LBRACE statement_list RBRACE  */
#line 95 "js_parser.y"
    {
        ASTNode *paramsNode = new_node("Params", (yyvsp[-4].node), NULL);
        ASTNode *bodyNode = (yyvsp[-1].node);
        (yyval.node) = new_node("Function", new_node((yyvsp[-6].str), NULL, paramsNode), bodyNode);
        free((yyvsp[-6].str));
    }
#line 1403 "js_parser.tab.c"
    break;

  case 6: /* param_list: %empty  */
#line 104 "js_parser.y"
                                          { (yyval.node) = NULL; }
#line 1409 "js_parser.tab.c"
    break;

  case 7: /* param_list: IDENTIFIER  */
#line 105 "js_parser.y"
                                          { (yyval.node) = new_node((yyvsp[0].str), NULL, NULL); free((yyvsp[0].str)); }
#line 1415 "js_parser.tab.c"
    break;

  case 8: /* param_list: param_list COMMA IDENTIFIER  */
#line 106 "js_parser.y"
                                          { (yyval.node) = new_node("ParamList", (yyvsp[-2].node), new_node((yyvsp[0].str), NULL, NULL)); free((yyvsp[0].str)); }
#line 1421 "js_parser.tab.c"
    break;

  case 9: /* arg_list: %empty  */
#line 110 "js_parser.y"
                                          { (yyval.node) = NULL; }
#line 1427 "js_parser.tab.c"
    break;

  case 10: /* arg_list: expression  */
#line 111 "js_parser.y"
                                          { (yyval.node) = (yyvsp[0].node); }
#line 1433 "js_parser.tab.c"
    break;

  case 11: /* arg_list: arg_list COMMA expression  */
#line 112 "js_parser.y"
                                          { (yyval.node) = new_node("ArgList", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1439 "js_parser.tab.c"
    break;

  case 12: /* statement_list: statement  */
#line 116 "js_parser.y"
                                          { (yyval.node) = (yyvsp[0].node); }
#line 1445 "js_parser.tab.c"
    break;

  case 13: /* statement_list: statement_list statement  */
#line 117 "js_parser.y"
                                          { (yyval.node) = new_node("StatementList", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1451 "js_parser.tab.c"
    break;

  case 14: /* if_statement: IF LPAREN expression RPAREN statement  */
#line 122 "js_parser.y"
    { (yyval.node) = new_node("If", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1457 "js_parser.tab.c"
    break;

  case 15: /* if_else_statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 127 "js_parser.y"
    { (yyval.node) = new_node("IfElse", (yyvsp[-4].node), new_node("Else", (yyvsp[-2].node), (yyvsp[0].node))); }
#line 1463 "js_parser.tab.c"
    break;

  case 16: /* while_statement: WHILE LPAREN expression RPAREN statement  */
#line 132 "js_parser.y"
    { (yyval.node) = new_node("While", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1469 "js_parser.tab.c"
    break;

  case 17: /* statement: VAR IDENTIFIER ASSIGN expression SEMICOLON  */
#line 137 "js_parser.y"
    { (yyval.node) = new_node("VarDecl", new_node((yyvsp[-3].str), NULL, NULL), (yyvsp[-1].node)); free((yyvsp[-3].str)); }
#line 1475 "js_parser.tab.c"
    break;

  case 18: /* statement: LET IDENTIFIER ASSIGN expression SEMICOLON  */
#line 139 "js_parser.y"
    { (yyval.node) = new_node("LetDecl", new_node((yyvsp[-3].str), NULL, NULL), (yyvsp[-1].node)); free((yyvsp[-3].str)); }
#line 1481 "js_parser.tab.c"
    break;

  case 19: /* statement: CONST IDENTIFIER ASSIGN expression SEMICOLON  */
#line 141 "js_parser.y"
    { (yyval.node) = new_node("ConstDecl", new_node((yyvsp[-3].str), NULL, NULL), (yyvsp[-1].node)); free((yyvsp[-3].str)); }
#line 1487 "js_parser.tab.c"
    break;

  case 20: /* statement: expression SEMICOLON  */
#line 143 "js_parser.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 1493 "js_parser.tab.c"
    break;

  case 24: /* statement: RETURN expression SEMICOLON  */
#line 148 "js_parser.y"
    { (yyval.node) = new_node("Return", (yyvsp[-1].node), NULL); }
#line 1499 "js_parser.tab.c"
    break;

  case 25: /* statement: LBRACE statement_list RBRACE  */
#line 150 "js_parser.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 1505 "js_parser.tab.c"
    break;

  case 26: /* statement: error SEMICOLON  */
#line 151 "js_parser.y"
                                          { (yyval.node) = NULL; }
#line 1511 "js_parser.tab.c"
    break;

  case 29: /* assignment_expr: IDENTIFIER ASSIGN assignment_expr  */
#line 160 "js_parser.y"
                                          { (yyval.node) = new_node("Assignment", new_node((yyvsp[-2].str), NULL, NULL), (yyvsp[0].node)); free((yyvsp[-2].str)); }
#line 1517 "js_parser.tab.c"
    break;

  case 31: /* conditional_expr: logical_or_expr '?' expression ':' conditional_expr  */
#line 166 "js_parser.y"
    { (yyval.node) = new_node("Ternary", (yyvsp[-4].node), new_node(":", (yyvsp[-2].node), (yyvsp[0].node))); }
#line 1523 "js_parser.tab.c"
    break;

  case 33: /* logical_or_expr: logical_or_expr OR logical_and_expr  */
#line 171 "js_parser.y"
                                          { (yyval.node) = new_node("LogicalOr", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1529 "js_parser.tab.c"
    break;

  case 35: /* logical_and_expr: logical_and_expr AND bitwise_or_expr  */
#line 176 "js_parser.y"
                                           { (yyval.node) = new_node("LogicalAnd", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1535 "js_parser.tab.c"
    break;

  case 37: /* bitwise_or_expr: bitwise_or_expr BIT_OR bitwise_xor_expr  */
#line 181 "js_parser.y"
                                              { (yyval.node) = new_node("BitwiseOr", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1541 "js_parser.tab.c"
    break;

  case 39: /* bitwise_xor_expr: bitwise_xor_expr BIT_XOR bitwise_and_expr  */
#line 186 "js_parser.y"
                                                { (yyval.node) = new_node("BitwiseXor", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1547 "js_parser.tab.c"
    break;

  case 41: /* bitwise_and_expr: bitwise_and_expr BIT_AND equality_expr  */
#line 191 "js_parser.y"
                                             { (yyval.node) = new_node("BitwiseAnd", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1553 "js_parser.tab.c"
    break;

  case 43: /* equality_expr: equality_expr EQUALITY relational_expr  */
#line 196 "js_parser.y"
                                             { (yyval.node) = new_node("Equality", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1559 "js_parser.tab.c"
    break;

  case 44: /* equality_expr: equality_expr NEQ relational_expr  */
#line 197 "js_parser.y"
                                           { (yyval.node) = new_node("Inequality", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1565 "js_parser.tab.c"
    break;

  case 45: /* equality_expr: equality_expr STRICT_EQUALITY relational_expr  */
#line 198 "js_parser.y"
                                                    { (yyval.node) = new_node("StrictEquality", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1571 "js_parser.tab.c"
    break;

  case 46: /* equality_expr: equality_expr STRICT_INEQUALITY relational_expr  */
#line 199 "js_parser.y"
                                                      { (yyval.node) = new_node("StrictInequality", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1577 "js_parser.tab.c"
    break;

  case 48: /* relational_expr: relational_expr LESS_THAN shift_expr  */
#line 204 "js_parser.y"
                                           { (yyval.node) = new_node("LessThan", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1583 "js_parser.tab.c"
    break;

  case 49: /* relational_expr: relational_expr GREATER_THAN shift_expr  */
#line 205 "js_parser.y"
                                              { (yyval.node) = new_node("GreaterThan", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1589 "js_parser.tab.c"
    break;

  case 50: /* relational_expr: relational_expr LESS_EQUAL shift_expr  */
#line 206 "js_parser.y"
                                            { (yyval.node) = new_node("LessEqual", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1595 "js_parser.tab.c"
    break;

  case 51: /* relational_expr: relational_expr GREATER_EQUAL shift_expr  */
#line 207 "js_parser.y"
                                               { (yyval.node) = new_node("GreaterEqual", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1601 "js_parser.tab.c"
    break;

  case 52: /* relational_expr: relational_expr INSTANCEOF shift_expr  */
#line 208 "js_parser.y"
                                            { (yyval.node) = new_node("InstanceOf", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1607 "js_parser.tab.c"
    break;

  case 53: /* relational_expr: relational_expr IN shift_expr  */
#line 209 "js_parser.y"
                                          { (yyval.node) = new_node("In", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1613 "js_parser.tab.c"
    break;

  case 55: /* shift_expr: shift_expr LEFT_SHIFT additive_expr  */
#line 214 "js_parser.y"
                                          { (yyval.node) = new_node("LeftShift", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1619 "js_parser.tab.c"
    break;

  case 56: /* shift_expr: shift_expr RIGHT_SHIFT additive_expr  */
#line 215 "js_parser.y"
                                           { (yyval.node) = new_node("RightShift", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1625 "js_parser.tab.c"
    break;

  case 57: /* shift_expr: shift_expr UNSIGNED_RIGHT_SHIFT additive_expr  */
#line 216 "js_parser.y"
                                                    { (yyval.node) = new_node("UnsignedRightShift", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1631 "js_parser.tab.c"
    break;

  case 59: /* additive_expr: additive_expr PLUS multiplicative_expr  */
#line 221 "js_parser.y"
                                             { (yyval.node) = new_node("Add", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1637 "js_parser.tab.c"
    break;

  case 60: /* additive_expr: additive_expr MINUS multiplicative_expr  */
#line 222 "js_parser.y"
                                              { (yyval.node) = new_node("Subtract", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1643 "js_parser.tab.c"
    break;

  case 62: /* multiplicative_expr: multiplicative_expr MULTIPLY unary_expr  */
#line 227 "js_parser.y"
                                              { (yyval.node) = new_node("Multiply", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1649 "js_parser.tab.c"
    break;

  case 63: /* multiplicative_expr: multiplicative_expr DIVIDE unary_expr  */
#line 228 "js_parser.y"
                                            { (yyval.node) = new_node("Divide", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1655 "js_parser.tab.c"
    break;

  case 64: /* multiplicative_expr: multiplicative_expr MODULO unary_expr  */
#line 229 "js_parser.y"
                                            { (yyval.node) = new_node("Modulo", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1661 "js_parser.tab.c"
    break;

  case 66: /* unary_expr: NOT unary_expr  */
#line 234 "js_parser.y"
                                         { (yyval.node) = new_node("LogicalNot", (yyvsp[0].node), NULL); }
#line 1667 "js_parser.tab.c"
    break;

  case 67: /* unary_expr: BIT_NOT unary_expr  */
#line 235 "js_parser.y"
                                          { (yyval.node) = new_node("BitwiseNot", (yyvsp[0].node), NULL); }
#line 1673 "js_parser.tab.c"
    break;

  case 68: /* unary_expr: PLUS unary_expr  */
#line 236 "js_parser.y"
                                          { (yyval.node) = new_node("UnaryPlus", (yyvsp[0].node), NULL); }
#line 1679 "js_parser.tab.c"
    break;

  case 69: /* unary_expr: MINUS unary_expr  */
#line 237 "js_parser.y"
                                          { (yyval.node) = new_node("UnaryMinus", (yyvsp[0].node), NULL); }
#line 1685 "js_parser.tab.c"
    break;

  case 70: /* unary_expr: TYPEOF unary_expr  */
#line 238 "js_parser.y"
                                          { (yyval.node) = new_node("TypeOf", (yyvsp[0].node), NULL); }
#line 1691 "js_parser.tab.c"
    break;

  case 71: /* unary_expr: VOID unary_expr  */
#line 239 "js_parser.y"
                                          { (yyval.node) = new_node("Void", (yyvsp[0].node), NULL); }
#line 1697 "js_parser.tab.c"
    break;

  case 72: /* unary_expr: DELETE unary_expr  */
#line 240 "js_parser.y"
                                          { (yyval.node) = new_node("Delete", (yyvsp[0].node), NULL); }
#line 1703 "js_parser.tab.c"
    break;

  case 73: /* unary_expr: NEW unary_expr  */
#line 241 "js_parser.y"
                                          { (yyval.node) = new_node("New", (yyvsp[0].node), NULL); }
#line 1709 "js_parser.tab.c"
    break;

  case 75: /* postfix_expr: postfix_expr LBRACKET expression RBRACKET  */
#line 246 "js_parser.y"
                                                { (yyval.node) = new_node("ArrayAccess", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1715 "js_parser.tab.c"
    break;

  case 76: /* postfix_expr: postfix_expr DOT IDENTIFIER  */
#line 247 "js_parser.y"
                                          { (yyval.node) = new_node("MemberAccess", (yyvsp[-2].node), new_node((yyvsp[0].str), NULL, NULL)); free((yyvsp[0].str)); }
#line 1721 "js_parser.tab.c"
    break;

  case 77: /* postfix_expr: postfix_expr LPAREN arg_list RPAREN  */
#line 248 "js_parser.y"
                                          { (yyval.node) = new_node("Call", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1727 "js_parser.tab.c"
    break;

  case 78: /* postfix_expr: postfix_expr PLUS_PLUS  */
#line 249 "js_parser.y"
                                          { (yyval.node) = new_node("PostIncrement", (yyvsp[-1].node), NULL); }
#line 1733 "js_parser.tab.c"
    break;

  case 79: /* postfix_expr: postfix_expr MINUS_MINUS  */
#line 250 "js_parser.y"
                                          { (yyval.node) = new_node("PostDecrement", (yyvsp[-1].node), NULL); }
#line 1739 "js_parser.tab.c"
    break;

  case 84: /* primary_expr: LPAREN expression RPAREN  */
#line 258 "js_parser.y"
                                          { (yyval.node) = (yyvsp[-1].node); }
#line 1745 "js_parser.tab.c"
    break;

  case 85: /* primary_expr: THIS  */
#line 259 "js_parser.y"
                                          { (yyval.node) = new_node("This", NULL, NULL); }
#line 1751 "js_parser.tab.c"
    break;

  case 86: /* literal: NUMBER  */
#line 263 "js_parser.y"
             {
        char buf[20];
        sprintf(buf, "%d", (yyvsp[0].num));
        (yyval.node) = new_node(buf, NULL, NULL);
      }
#line 1761 "js_parser.tab.c"
    break;

  case 87: /* literal: STRING  */
#line 268 "js_parser.y"
                                         { (yyval.node) = new_node((yyvsp[0].str), NULL, NULL); free((yyvsp[0].str)); }
#line 1767 "js_parser.tab.c"
    break;

  case 88: /* literal: BOOLEAN  */
#line 269 "js_parser.y"
                                         { (yyval.node) = new_node((yyvsp[0].str), NULL, NULL); free((yyvsp[0].str)); }
#line 1773 "js_parser.tab.c"
    break;

  case 89: /* identifier: IDENTIFIER  */
#line 273 "js_parser.y"
                                         { (yyval.node) = new_node((yyvsp[0].str), NULL, NULL); free((yyvsp[0].str)); }
#line 1779 "js_parser.tab.c"
    break;

  case 90: /* array_literal: LBRACKET array_elements RBRACKET  */
#line 277 "js_parser.y"
                                         { (yyval.node) = new_node("Array", (yyvsp[-1].node), NULL); }
#line 1785 "js_parser.tab.c"
    break;

  case 91: /* object_literal: LBRACE object_properties RBRACE  */
#line 281 "js_parser.y"
                                         { (yyval.node) = new_node("Object", (yyvsp[-1].node), NULL); }
#line 1791 "js_parser.tab.c"
    break;

  case 92: /* object_properties: %empty  */
#line 285 "js_parser.y"
                                         { (yyval.node) = NULL; }
#line 1797 "js_parser.tab.c"
    break;

  case 93: /* object_properties: object_property  */
#line 286 "js_parser.y"
                                         { (yyval.node) = (yyvsp[0].node); }
#line 1803 "js_parser.tab.c"
    break;

  case 94: /* object_properties: object_properties COMMA object_property  */
#line 287 "js_parser.y"
                                              { (yyval.node) = new_node("ObjectProperties", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1809 "js_parser.tab.c"
    break;

  case 95: /* object_property: IDENTIFIER COLON expression  */
#line 291 "js_parser.y"
                                         { (yyval.node) = new_node("Property", new_node((yyvsp[-2].str), NULL, NULL), (yyvsp[0].node)); free((yyvsp[-2].str)); }
#line 1815 "js_parser.tab.c"
    break;

  case 96: /* object_property: STRING COLON expression  */
#line 292 "js_parser.y"
                                         { (yyval.node) = new_node("Property", new_node((yyvsp[-2].str), NULL, NULL), (yyvsp[0].node)); free((yyvsp[-2].str)); }
#line 1821 "js_parser.tab.c"
    break;

  case 97: /* array_elements: %empty  */
#line 296 "js_parser.y"
                                         { (yyval.node) = NULL; }
#line 1827 "js_parser.tab.c"
    break;

  case 98: /* array_elements: expression  */
#line 297 "js_parser.y"
                                         { (yyval.node) = (yyvsp[0].node); }
#line 1833 "js_parser.tab.c"
    break;

  case 99: /* array_elements: array_elements COMMA expression  */
#line 298 "js_parser.y"
                                         { (yyval.node) = new_node("ArrayElements", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1839 "js_parser.tab.c"
    break;


#line 1843 "js_parser.tab.c"

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

#line 301 "js_parser.y"


void print_ast_indented(ASTNode *node, int depth) {
    if (!node) return;
    
    // Print indentation
    for (int i = 0; i < depth; i++) 
        printf("  ");
    
    // Print node name
    printf("%s", node->name);
    
    // Handle special cases for better formatting
    if (node->left || node->right) {
        printf("\n");
        print_ast_indented(node->left, depth + 1);
        print_ast_indented(node->right, depth + 1);
    } else {
        printf("\n");
    }
}

ASTNode *new_node(char *name, ASTNode *left, ASTNode *right) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->name = strdup(name);
    node->left = left;
    node->right = right;
    return node;
}

void export_ast_to_dot(ASTNode *node, FILE *out) {
    static int node_id = 0;
    int current_id = node_id++;

    char *escaped_name = escape_string(node->name);
    fprintf(out, "  node%d [label=\"%s\"];\n", current_id, escaped_name);
    free(escaped_name);

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
    symbolTable = create_symbol_table();
    
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            fprintf(stderr, "Error opening file %s\n", argv[1]);
            return 1;
        }
        yyin = file;
    }

    yyparse();

    // Perform semantic analysis
    semantic_check(root, symbolTable);
    print_symbol_table(symbolTable);

    // Print AST to console
    printf("\nAbstract Syntax Tree:\n");
    print_ast_indented(root, 0);

    // Export AST to files
    FILE *dotfile = fopen("ast.dot", "w");
    if (dotfile) {
        fprintf(dotfile, "digraph AST {\n");
        export_ast_to_dot(root, dotfile);
        fprintf(dotfile, "}\n");
        fclose(dotfile);
        printf("\nAST exported to ast.dot\n");
    }

    FILE *jsonfile = fopen("ast.json", "w");
    if (jsonfile) {
        export_ast_to_json(root, jsonfile);
        fclose(jsonfile);
        printf("AST exported to ast.json\n");
    }

    free_symbol_table(symbolTable);
    return 0;
}
