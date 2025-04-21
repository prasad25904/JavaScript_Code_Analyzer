/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_JS_PARSER_TAB_H_INCLUDED
# define YY_YY_JS_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OR = 258,                      /* OR  */
    AND = 259,                     /* AND  */
    FUNCTION = 260,                /* FUNCTION  */
    VAR = 261,                     /* VAR  */
    LET = 262,                     /* LET  */
    CONST = 263,                   /* CONST  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    WHILE = 266,                   /* WHILE  */
    RETURN = 267,                  /* RETURN  */
    INSTANCEOF = 268,              /* INSTANCEOF  */
    IN = 269,                      /* IN  */
    TYPEOF = 270,                  /* TYPEOF  */
    VOID = 271,                    /* VOID  */
    DELETE = 272,                  /* DELETE  */
    NEW = 273,                     /* NEW  */
    THIS = 274,                    /* THIS  */
    PLUS_PLUS = 275,               /* PLUS_PLUS  */
    MINUS_MINUS = 276,             /* MINUS_MINUS  */
    LEFT_SHIFT = 277,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 278,             /* RIGHT_SHIFT  */
    UNSIGNED_RIGHT_SHIFT = 279,    /* UNSIGNED_RIGHT_SHIFT  */
    NUMBER = 280,                  /* NUMBER  */
    IDENTIFIER = 281,              /* IDENTIFIER  */
    STRING = 282,                  /* STRING  */
    BOOLEAN = 283,                 /* BOOLEAN  */
    ASSIGN = 284,                  /* ASSIGN  */
    PLUS = 285,                    /* PLUS  */
    MINUS = 286,                   /* MINUS  */
    MULTIPLY = 287,                /* MULTIPLY  */
    DIVIDE = 288,                  /* DIVIDE  */
    MODULO = 289,                  /* MODULO  */
    NOT = 290,                     /* NOT  */
    BIT_NOT = 291,                 /* BIT_NOT  */
    BIT_AND = 292,                 /* BIT_AND  */
    BIT_OR = 293,                  /* BIT_OR  */
    BIT_XOR = 294,                 /* BIT_XOR  */
    EQUALITY = 295,                /* EQUALITY  */
    NEQ = 296,                     /* NEQ  */
    STRICT_EQUALITY = 297,         /* STRICT_EQUALITY  */
    STRICT_INEQUALITY = 298,       /* STRICT_INEQUALITY  */
    LESS_THAN = 299,               /* LESS_THAN  */
    GREATER_THAN = 300,            /* GREATER_THAN  */
    LESS_EQUAL = 301,              /* LESS_EQUAL  */
    GREATER_EQUAL = 302,           /* GREATER_EQUAL  */
    LBRACE = 303,                  /* LBRACE  */
    RBRACE = 304,                  /* RBRACE  */
    LPAREN = 305,                  /* LPAREN  */
    RPAREN = 306,                  /* RPAREN  */
    SEMICOLON = 307,               /* SEMICOLON  */
    COMMA = 308,                   /* COMMA  */
    LBRACKET = 309,                /* LBRACKET  */
    RBRACKET = 310,                /* RBRACKET  */
    COLON = 311,                   /* COLON  */
    DOT = 312                      /* DOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "js_parser.y"

    char *str;
    int num;
    struct ASTNode *node;

#line 127 "js_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_JS_PARSER_TAB_H_INCLUDED  */
