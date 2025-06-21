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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TK_INT = 258,                  /* TK_INT  */
    TK_BOOL = 259,                 /* TK_BOOL  */
    TK_FLOAT = 260,                /* TK_FLOAT  */
    TK_STRING = 261,               /* TK_STRING  */
    TK_NOTHING = 262,              /* TK_NOTHING  */
    TK_FUNCTION = 263,             /* TK_FUNCTION  */
    TK_CLASS = 264,                /* TK_CLASS  */
    TK_IF = 265,                   /* TK_IF  */
    TK_FOR = 266,                  /* TK_FOR  */
    TK_PUB = 267,                  /* TK_PUB  */
    TK_PRIV = 268,                 /* TK_PRIV  */
    TK_STATIC = 269,               /* TK_STATIC  */
    TK_RETURN = 270,               /* TK_RETURN  */
    TK_IMPORT = 271,               /* TK_IMPORT  */
    TK_FROM = 272,                 /* TK_FROM  */
    TK_BREAK = 273,                /* TK_BREAK  */
    TK_ELSE = 274,                 /* TK_ELSE  */
    TK_ATTRIBUTION = 275,          /* TK_ATTRIBUTION  */
    TK_COMMA = 276,                /* TK_COMMA  */
    TK_RETURNTYPE = 277,           /* TK_RETURNTYPE  */
    TK_OPEN_PARENTESIS = 278,      /* TK_OPEN_PARENTESIS  */
    TK_CLOSE_PARENTESIS = 279,     /* TK_CLOSE_PARENTESIS  */
    TK_OPEN_BRACES = 280,          /* TK_OPEN_BRACES  */
    TK_CLOSE_BRACES = 281,         /* TK_CLOSE_BRACES  */
    TK_COMMAND_END = 282,          /* TK_COMMAND_END  */
    TK_OPEN_SQUARE_BRACKET = 283,  /* TK_OPEN_SQUARE_BRACKET  */
    TK_CLOSE_SQUARE_BRACKET = 284, /* TK_CLOSE_SQUARE_BRACKET  */
    TK_PLUS = 285,                 /* TK_PLUS  */
    TK_MINUS = 286,                /* TK_MINUS  */
    TK_DIVISION = 287,             /* TK_DIVISION  */
    TK_DIVISION_FLOOR = 288,       /* TK_DIVISION_FLOOR  */
    TK_MULTIPLICATION = 289,       /* TK_MULTIPLICATION  */
    TK_POW = 290,                  /* TK_POW  */
    TK_EQUALS = 291,               /* TK_EQUALS  */
    TK_DIFFERENT = 292,            /* TK_DIFFERENT  */
    TK_MOD = 293,                  /* TK_MOD  */
    TK_NOT = 294,                  /* TK_NOT  */
    TK_LOGICAL_AND = 295,          /* TK_LOGICAL_AND  */
    TK_LOGICAL_OR = 296,           /* TK_LOGICAL_OR  */
    TK_LESS_THAN = 297,            /* TK_LESS_THAN  */
    TK_GREATER_THAN = 298,         /* TK_GREATER_THAN  */
    TK_GREATER_EQUAL = 299,        /* TK_GREATER_EQUAL  */
    TK_LESS_EQUAL = 300,           /* TK_LESS_EQUAL  */
    TK_ADD_ASSIGN = 301,           /* TK_ADD_ASSIGN  */
    TK_MINUS_ASSIGN = 302,         /* TK_MINUS_ASSIGN  */
    TK_COLON = 303,                /* TK_COLON  */
    TK_DOT = 304,                  /* TK_DOT  */
    TK_PRINTF = 305,               /* TK_PRINTF  */
    TK_SCANF = 306,                /* TK_SCANF  */
    TK_EXIT = 307,                 /* TK_EXIT  */
    TK_IDENTIFIER = 308,           /* TK_IDENTIFIER  */
    TK_STRING_LITERAL = 309,       /* TK_STRING_LITERAL  */
    TK_FLOAT_NUMBER_LITERAL = 310, /* TK_FLOAT_NUMBER_LITERAL  */
    TK_NUMBER_LITERAL = 311,       /* TK_NUMBER_LITERAL  */
    TK_CLASSNAME = 312,            /* TK_CLASSNAME  */
    TK_COMMENT = 313,              /* TK_COMMENT  */
    TK_INVALID = 314,              /* TK_INVALID  */
    TK_EOF = 315                   /* TK_EOF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

    struct token_t* token;
    char* str;

#line 129 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
