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
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    
    // Forward declaration from lexer
    extern struct token_t* yylex(void);
    extern FILE* yyin;
    
    void yyerror(const char *s) {
        fprintf(stderr, "Error: %s\n", s);
    }

#line 85 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_INT = 3,                     /* TK_INT  */
  YYSYMBOL_TK_BOOL = 4,                    /* TK_BOOL  */
  YYSYMBOL_TK_FLOAT = 5,                   /* TK_FLOAT  */
  YYSYMBOL_TK_STRING = 6,                  /* TK_STRING  */
  YYSYMBOL_TK_NOTHING = 7,                 /* TK_NOTHING  */
  YYSYMBOL_TK_FUNCTION = 8,                /* TK_FUNCTION  */
  YYSYMBOL_TK_CLASS = 9,                   /* TK_CLASS  */
  YYSYMBOL_TK_IF = 10,                     /* TK_IF  */
  YYSYMBOL_TK_FOR = 11,                    /* TK_FOR  */
  YYSYMBOL_TK_PUB = 12,                    /* TK_PUB  */
  YYSYMBOL_TK_PRIV = 13,                   /* TK_PRIV  */
  YYSYMBOL_TK_STATIC = 14,                 /* TK_STATIC  */
  YYSYMBOL_TK_RETURN = 15,                 /* TK_RETURN  */
  YYSYMBOL_TK_IMPORT = 16,                 /* TK_IMPORT  */
  YYSYMBOL_TK_FROM = 17,                   /* TK_FROM  */
  YYSYMBOL_TK_BREAK = 18,                  /* TK_BREAK  */
  YYSYMBOL_TK_ELSE = 19,                   /* TK_ELSE  */
  YYSYMBOL_TK_ATTRIBUTION = 20,            /* TK_ATTRIBUTION  */
  YYSYMBOL_TK_COMMA = 21,                  /* TK_COMMA  */
  YYSYMBOL_TK_RETURNTYPE = 22,             /* TK_RETURNTYPE  */
  YYSYMBOL_TK_OPEN_PARENTESIS = 23,        /* TK_OPEN_PARENTESIS  */
  YYSYMBOL_TK_CLOSE_PARENTESIS = 24,       /* TK_CLOSE_PARENTESIS  */
  YYSYMBOL_TK_OPEN_BRACES = 25,            /* TK_OPEN_BRACES  */
  YYSYMBOL_TK_CLOSE_BRACES = 26,           /* TK_CLOSE_BRACES  */
  YYSYMBOL_TK_COMMAND_END = 27,            /* TK_COMMAND_END  */
  YYSYMBOL_TK_OPEN_SQUARE_BRACKET = 28,    /* TK_OPEN_SQUARE_BRACKET  */
  YYSYMBOL_TK_CLOSE_SQUARE_BRACKET = 29,   /* TK_CLOSE_SQUARE_BRACKET  */
  YYSYMBOL_TK_PLUS = 30,                   /* TK_PLUS  */
  YYSYMBOL_TK_MINUS = 31,                  /* TK_MINUS  */
  YYSYMBOL_TK_DIVISION = 32,               /* TK_DIVISION  */
  YYSYMBOL_TK_DIVISION_FLOOR = 33,         /* TK_DIVISION_FLOOR  */
  YYSYMBOL_TK_MULTIPLICATION = 34,         /* TK_MULTIPLICATION  */
  YYSYMBOL_TK_POW = 35,                    /* TK_POW  */
  YYSYMBOL_TK_EQUALS = 36,                 /* TK_EQUALS  */
  YYSYMBOL_TK_DIFFERENT = 37,              /* TK_DIFFERENT  */
  YYSYMBOL_TK_MOD = 38,                    /* TK_MOD  */
  YYSYMBOL_TK_NOT = 39,                    /* TK_NOT  */
  YYSYMBOL_TK_LOGICAL_AND = 40,            /* TK_LOGICAL_AND  */
  YYSYMBOL_TK_LOGICAL_OR = 41,             /* TK_LOGICAL_OR  */
  YYSYMBOL_TK_LESS_THAN = 42,              /* TK_LESS_THAN  */
  YYSYMBOL_TK_GREATER_THAN = 43,           /* TK_GREATER_THAN  */
  YYSYMBOL_TK_GREATER_EQUAL = 44,          /* TK_GREATER_EQUAL  */
  YYSYMBOL_TK_LESS_EQUAL = 45,             /* TK_LESS_EQUAL  */
  YYSYMBOL_TK_ADD_ASSIGN = 46,             /* TK_ADD_ASSIGN  */
  YYSYMBOL_TK_MINUS_ASSIGN = 47,           /* TK_MINUS_ASSIGN  */
  YYSYMBOL_TK_COLON = 48,                  /* TK_COLON  */
  YYSYMBOL_TK_DOT = 49,                    /* TK_DOT  */
  YYSYMBOL_TK_PRINTF = 50,                 /* TK_PRINTF  */
  YYSYMBOL_TK_SCANF = 51,                  /* TK_SCANF  */
  YYSYMBOL_TK_EXIT = 52,                   /* TK_EXIT  */
  YYSYMBOL_TK_IDENTIFIER = 53,             /* TK_IDENTIFIER  */
  YYSYMBOL_TK_STRING_LITERAL = 54,         /* TK_STRING_LITERAL  */
  YYSYMBOL_TK_FLOAT_NUMBER_LITERAL = 55,   /* TK_FLOAT_NUMBER_LITERAL  */
  YYSYMBOL_TK_NUMBER_LITERAL = 56,         /* TK_NUMBER_LITERAL  */
  YYSYMBOL_TK_CLASSNAME = 57,              /* TK_CLASSNAME  */
  YYSYMBOL_TK_COMMENT = 58,                /* TK_COMMENT  */
  YYSYMBOL_TK_INVALID = 59,                /* TK_INVALID  */
  YYSYMBOL_TK_EOF = 60,                    /* TK_EOF  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_program = 62,                   /* program  */
  YYSYMBOL_declaration = 63,               /* declaration  */
  YYSYMBOL_variable_declaration = 64,      /* variable_declaration  */
  YYSYMBOL_type = 65,                      /* type  */
  YYSYMBOL_function_declaration = 66,      /* function_declaration  */
  YYSYMBOL_parameters = 67,                /* parameters  */
  YYSYMBOL_parameter = 68,                 /* parameter  */
  YYSYMBOL_class_declaration = 69,         /* class_declaration  */
  YYSYMBOL_class_body = 70,                /* class_body  */
  YYSYMBOL_member_declaration = 71,        /* member_declaration  */
  YYSYMBOL_access_modifier = 72,           /* access_modifier  */
  YYSYMBOL_import_declaration = 73,        /* import_declaration  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_return_statement = 75,          /* return_statement  */
  YYSYMBOL_if_statement = 76,              /* if_statement  */
  YYSYMBOL_for_statement = 77,             /* for_statement  */
  YYSYMBOL_for_init = 78,                  /* for_init  */
  YYSYMBOL_for_update = 79,                /* for_update  */
  YYSYMBOL_print_statement = 80,           /* print_statement  */
  YYSYMBOL_break_statement = 81,           /* break_statement  */
  YYSYMBOL_block = 82,                     /* block  */
  YYSYMBOL_statements = 83,                /* statements  */
  YYSYMBOL_expression = 84,                /* expression  */
  YYSYMBOL_binary_expression = 85,         /* binary_expression  */
  YYSYMBOL_binary_operator = 86,           /* binary_operator  */
  YYSYMBOL_unary_expression = 87,          /* unary_expression  */
  YYSYMBOL_unary_operator = 88,            /* unary_operator  */
  YYSYMBOL_assignment_expression = 89,     /* assignment_expression  */
  YYSYMBOL_function_call = 90,             /* function_call  */
  YYSYMBOL_arguments = 91,                 /* arguments  */
  YYSYMBOL_literal = 92,                   /* literal  */
  YYSYMBOL_identifier = 93,                /* identifier  */
  YYSYMBOL_class_name = 94                 /* class_name  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   424

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    46,    47,    51,    52,    53,    54,    58,
      59,    63,    64,    65,    66,    67,    68,    72,    73,    74,
      75,    79,    80,    84,    88,    91,    93,    97,    98,    99,
     103,   104,   105,   109,   110,   114,   115,   116,   117,   118,
     119,   120,   121,   125,   126,   130,   131,   135,   139,   140,
     141,   145,   146,   150,   154,   158,   159,   163,   164,   168,
     169,   170,   171,   172,   173,   174,   178,   182,   182,   182,
     182,   183,   183,   183,   183,   184,   184,   184,   184,   188,
     192,   192,   196,   197,   198,   202,   203,   207,   208,   212,
     213,   214,   218,   222
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_INT", "TK_BOOL",
  "TK_FLOAT", "TK_STRING", "TK_NOTHING", "TK_FUNCTION", "TK_CLASS",
  "TK_IF", "TK_FOR", "TK_PUB", "TK_PRIV", "TK_STATIC", "TK_RETURN",
  "TK_IMPORT", "TK_FROM", "TK_BREAK", "TK_ELSE", "TK_ATTRIBUTION",
  "TK_COMMA", "TK_RETURNTYPE", "TK_OPEN_PARENTESIS", "TK_CLOSE_PARENTESIS",
  "TK_OPEN_BRACES", "TK_CLOSE_BRACES", "TK_COMMAND_END",
  "TK_OPEN_SQUARE_BRACKET", "TK_CLOSE_SQUARE_BRACKET", "TK_PLUS",
  "TK_MINUS", "TK_DIVISION", "TK_DIVISION_FLOOR", "TK_MULTIPLICATION",
  "TK_POW", "TK_EQUALS", "TK_DIFFERENT", "TK_MOD", "TK_NOT",
  "TK_LOGICAL_AND", "TK_LOGICAL_OR", "TK_LESS_THAN", "TK_GREATER_THAN",
  "TK_GREATER_EQUAL", "TK_LESS_EQUAL", "TK_ADD_ASSIGN", "TK_MINUS_ASSIGN",
  "TK_COLON", "TK_DOT", "TK_PRINTF", "TK_SCANF", "TK_EXIT",
  "TK_IDENTIFIER", "TK_STRING_LITERAL", "TK_FLOAT_NUMBER_LITERAL",
  "TK_NUMBER_LITERAL", "TK_CLASSNAME", "TK_COMMENT", "TK_INVALID",
  "TK_EOF", "$accept", "program", "declaration", "variable_declaration",
  "type", "function_declaration", "parameters", "parameter",
  "class_declaration", "class_body", "member_declaration",
  "access_modifier", "import_declaration", "statement", "return_statement",
  "if_statement", "for_statement", "for_init", "for_update",
  "print_statement", "break_statement", "block", "statements",
  "expression", "binary_expression", "binary_operator", "unary_expression",
  "unary_operator", "assignment_expression", "function_call", "arguments",
  "literal", "identifier", "class_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -80,   105,   -80,   -80,   -80,   -80,   -80,   -80,   -46,   -41,
      -6,    -5,    95,   -46,     8,   149,   160,   -80,   -80,    -1,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -46,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   306,   -80,
     -80,   149,   -80,   -80,   -80,   -15,   -80,    24,    33,   149,
      21,   -80,   325,    13,   -80,   243,   -80,   -80,   -80,   215,
     149,    14,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   149,   379,   149,   204,   149,
     149,    82,   -80,   265,   -80,    28,   379,   -80,   -46,   -80,
     -80,   -80,   -80,   287,   149,   -80,   379,   379,   -80,   379,
      22,   379,   379,    20,   -46,    30,   -80,     7,    34,   149,
      42,    43,   344,   149,   -80,    88,   -80,   -80,    88,    31,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,    52,   363,
     -80,   -80,   -80,   379,    34,   -80,    88,   -80,    34,   149,
     -80,    34,   -80,    37,   379,   -80,    34,   -80
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    11,    14,    12,    13,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    80,     0,
      92,    91,    90,    89,    93,     3,     5,     0,     6,     7,
       8,     4,    37,    38,    39,    41,    42,    40,     0,    61,
      62,     0,    63,    64,    59,    60,    16,     0,     0,     0,
      50,    44,     0,     0,    54,     0,    56,    36,    57,     0,
       0,     0,    35,    67,    68,    70,    69,    71,    72,    77,
      78,    73,    74,    76,    75,     0,    79,     0,     0,     0,
       0,     0,    25,     0,    48,     0,    49,    43,     0,    33,
      65,    55,    58,     0,     0,    10,    66,    82,    86,    87,
       0,    83,    84,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    85,     0,    20,    23,     0,     0,
      30,    31,    32,    24,    27,    28,    26,    29,    45,     0,
      34,    53,     9,    88,     0,    22,     0,    19,     0,    52,
      18,     0,    46,     0,    51,    17,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,   -80,     0,   -79,   -45,   -80,   -39,   -80,   -80,
     -80,   -80,   -80,   -10,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,    35,   -80,   -12,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,    -4,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    25,    57,    27,    28,   105,   106,    29,   107,
     126,   127,    30,    31,    32,    33,    34,    85,   143,    35,
      36,    37,    59,    38,    39,    75,    40,    41,    42,    43,
     100,    44,    45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,    26,   104,    55,    47,    77,    58,    20,    78,    53,
       3,     4,     5,     6,     7,     8,    24,    49,    50,   120,
     121,   122,    60,    61,     3,     4,     5,     6,     7,    76,
      88,    79,    80,   123,    94,    54,   134,    83,    86,   104,
      89,    95,   115,   113,    15,    16,   114,    81,    93,    92,
      84,   118,    17,   136,   119,   109,    16,   141,    82,    16,
      18,   146,   125,    96,    24,    97,    99,   101,   102,   130,
     131,   138,    48,     0,    20,    21,    22,    23,    24,   135,
       0,     0,   112,     0,   110,     3,     4,     5,     6,     7,
       0,     3,     4,     5,     6,     7,     0,   129,     0,     0,
     117,   133,     0,     0,     0,     2,   103,   124,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    15,     0,
      12,    13,    51,    14,     0,     0,    17,   144,    15,     0,
      16,     0,     0,     0,    18,     0,    17,     0,   116,    24,
       0,     0,     0,   128,    18,    24,     0,     0,    20,    21,
      22,    23,     0,     0,   137,    19,     0,     0,    20,    21,
      22,    23,    24,     3,     4,     5,     6,     7,     0,   140,
      10,    11,    15,   142,     0,    12,   145,     0,    14,     0,
      17,   147,     0,    15,     0,    16,    56,     0,    18,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,    20,    21,    22,    23,     0,     0,     0,     0,
      19,     0,     0,    20,    21,    22,    23,    24,     3,     4,
       5,     6,     7,     0,     0,    10,    11,    15,    98,     0,
      12,     0,     0,    14,     0,    17,     0,     0,    15,     0,
      16,    91,     0,    18,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,    19,     0,    90,    20,    21,
      22,    23,    24,    63,    64,    65,     0,    66,     0,    67,
      68,     0,     0,    69,    70,    71,    72,    73,    74,   108,
       0,     0,     0,     0,     0,    63,    64,    65,     0,    66,
       0,    67,    68,     0,     0,    69,    70,    71,    72,    73,
      74,   111,     0,     0,     0,     0,     0,    63,    64,    65,
       0,    66,     0,    67,    68,     0,     0,    69,    70,    71,
      72,    73,    74,    62,     0,     0,    63,    64,    65,     0,
      66,     0,    67,    68,     0,     0,    69,    70,    71,    72,
      73,    74,    87,     0,     0,    63,    64,    65,     0,    66,
       0,    67,    68,     0,     0,    69,    70,    71,    72,    73,
      74,   132,     0,     0,    63,    64,    65,     0,    66,     0,
      67,    68,     0,     0,    69,    70,    71,    72,    73,    74,
     139,     0,     0,    63,    64,    65,     0,    66,     0,    67,
      68,     0,     0,    69,    70,    71,    72,    73,    74,    63,
      64,    65,     0,    66,     0,    67,    68,     0,     0,    69,
      70,    71,    72,    73,    74
};

static const yytype_int16 yycheck[] =
{
      12,     1,    81,    15,     8,    20,    16,    53,    23,    13,
       3,     4,     5,     6,     7,     8,    57,    23,    23,    12,
      13,    14,    23,    27,     3,     4,     5,     6,     7,    41,
      17,    46,    47,    26,    20,    27,   115,    49,    50,   118,
      27,    27,    22,    21,    23,    25,    24,    23,    60,    59,
      50,    21,    31,    22,    24,    27,    25,   136,    25,    25,
      39,    24,   107,    75,    57,    77,    78,    79,    80,    27,
      27,    19,     9,    -1,    53,    54,    55,    56,    57,   118,
      -1,    -1,    94,    -1,    88,     3,     4,     5,     6,     7,
      -1,     3,     4,     5,     6,     7,    -1,   109,    -1,    -1,
     104,   113,    -1,    -1,    -1,     0,    24,   107,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    23,    -1,
      15,    16,    27,    18,    -1,    -1,    31,   139,    23,    -1,
      25,    -1,    -1,    -1,    39,    -1,    31,    -1,   103,    57,
      -1,    -1,    -1,   108,    39,    57,    -1,    -1,    53,    54,
      55,    56,    -1,    -1,   119,    50,    -1,    -1,    53,    54,
      55,    56,    57,     3,     4,     5,     6,     7,    -1,   134,
      10,    11,    23,   138,    -1,    15,   141,    -1,    18,    -1,
      31,   146,    -1,    23,    -1,    25,    26,    -1,    39,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    54,    55,    56,    57,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    23,    24,    -1,
      15,    -1,    -1,    18,    -1,    31,    -1,    -1,    23,    -1,
      25,    26,    -1,    39,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    50,    -1,    24,    53,    54,
      55,    56,    57,    30,    31,    32,    -1,    34,    -1,    36,
      37,    -1,    -1,    40,    41,    42,    43,    44,    45,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    34,
      -1,    36,    37,    -1,    -1,    40,    41,    42,    43,    44,
      45,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    34,    -1,    36,    37,    -1,    -1,    40,    41,    42,
      43,    44,    45,    27,    -1,    -1,    30,    31,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    40,    41,    42,    43,
      44,    45,    27,    -1,    -1,    30,    31,    32,    -1,    34,
      -1,    36,    37,    -1,    -1,    40,    41,    42,    43,    44,
      45,    27,    -1,    -1,    30,    31,    32,    -1,    34,    -1,
      36,    37,    -1,    -1,    40,    41,    42,    43,    44,    45,
      27,    -1,    -1,    30,    31,    32,    -1,    34,    -1,    36,
      37,    -1,    -1,    40,    41,    42,    43,    44,    45,    30,
      31,    32,    -1,    34,    -1,    36,    37,    -1,    -1,    40,
      41,    42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    62,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    15,    16,    18,    23,    25,    31,    39,    50,
      53,    54,    55,    56,    57,    63,    64,    65,    66,    69,
      73,    74,    75,    76,    77,    80,    81,    82,    84,    85,
      87,    88,    89,    90,    92,    93,    94,    93,    94,    23,
      23,    27,    84,    93,    27,    84,    26,    64,    74,    83,
      23,    93,    27,    30,    31,    32,    34,    36,    37,    40,
      41,    42,    43,    44,    45,    86,    84,    20,    23,    46,
      47,    23,    25,    84,    64,    78,    84,    27,    17,    27,
      24,    26,    74,    84,    20,    27,    84,    84,    24,    84,
      91,    84,    84,    24,    65,    67,    68,    70,    24,    27,
      93,    24,    84,    21,    24,    22,    82,    93,    21,    24,
      12,    13,    14,    26,    64,    66,    71,    72,    82,    84,
      27,    27,    27,    84,    65,    68,    22,    82,    19,    27,
      82,    65,    82,    79,    84,    82,    24,    82
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    66,    66,    66,
      66,    67,    67,    68,    69,    70,    70,    71,    71,    71,
      72,    72,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    78,    78,
      78,    79,    79,    80,    81,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      88,    88,    89,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    93,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     5,
       3,     1,     1,     1,     1,     1,     1,     8,     7,     6,
       5,     1,     3,     2,     5,     0,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     5,     7,     9,     1,     1,
       0,     1,     0,     5,     2,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     3,     3,     4,     3,     1,     3,     1,
       1,     1,     1,     1
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
  case 11: /* type: TK_INT  */
#line 63 "parser.y"
           { (yyval.str) = "int"; }
#line 1338 "parser.tab.c"
    break;

  case 12: /* type: TK_FLOAT  */
#line 64 "parser.y"
               { (yyval.str) = "float"; }
#line 1344 "parser.tab.c"
    break;

  case 13: /* type: TK_STRING  */
#line 65 "parser.y"
                { (yyval.str) = "str"; }
#line 1350 "parser.tab.c"
    break;

  case 14: /* type: TK_BOOL  */
#line 66 "parser.y"
              { (yyval.str) = "bool"; }
#line 1356 "parser.tab.c"
    break;

  case 15: /* type: TK_NOTHING  */
#line 67 "parser.y"
                 { (yyval.str) = "nothing"; }
#line 1362 "parser.tab.c"
    break;

  case 16: /* type: class_name  */
#line 68 "parser.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1368 "parser.tab.c"
    break;

  case 92: /* identifier: TK_IDENTIFIER  */
#line 218 "parser.y"
                  { (yyval.str) = (yyvsp[0].token)->lexeme; }
#line 1374 "parser.tab.c"
    break;

  case 93: /* class_name: TK_CLASSNAME  */
#line 222 "parser.y"
                 { (yyval.str) = (yyvsp[0].token)->lexeme; }
#line 1380 "parser.tab.c"
    break;


#line 1384 "parser.tab.c"

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

#line 225 "parser.y"


int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input.mor>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening file");
        return 1;
    }

    yyparse();

    fclose(yyin);
    return 0;
}
