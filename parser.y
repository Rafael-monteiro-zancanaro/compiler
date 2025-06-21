%{
    #include <stdio.h>
    #include <stdlib.h>
%}


%token TK_INT               /* int */
%token TK_BOOL              /* bool */
%token TK_FLOAT             /* float */
%token TK_STRING            /* str */
%token TK_NOTHING           /* nothing */
%token TK_FUNCTION          /* fn */
%token TK_CLASS             /* class */

/* Reserved words */
%token TK_IF                /* if */
%token TK_FOR               /* for */
%token TK_PUB               /* pub */
%token TK_PRIV              /* priv */
%token TK_STATIC            /* static */
%token TK_RETURN            /* ret */
%token TK_IMPORT            /* import */
%token TK_FROM              /* from */
%token TK_BREAK             /* break */
%token TK_ELSE              /* else */

/* Operators */
%token TK_ATTRIBUTION       /* = */
%token TK_COMMA             /* , */
%token TK_RETURNTYPE        /* -> */
%token TK_OPEN_PARENTESIS   /* ( */
%token TK_CLOSE_PARENTESIS  /* ) */
%token TK_OPEN_BRACES       /* { */
%token TK_CLOSE_BRACES      /* } */
%token TK_COMMAND_END       /* ; */
%token TK_OPEN_SQUARE_BRACKET  /* [ */
%token TK_CLOSE_SQUARE_BRACKET /* ] */
%token TK_PLUS              /* + */
%token TK_MINUS             /* - */
%token TK_DIVISION          /* / */
%token TK_DIVISION_FLOOR    /* // */
%token TK_MULTIPLICATION    /* * */
%token TK_POW               /* ** */
%token TK_EQUALS            /* == */
%token TK_DIFFERENT         /* != */
%token TK_MOD               /* % */
%token TK_NOT               /* ! */
%token TK_LOGICAL_AND       /* && */
%token TK_LOGICAL_OR        /* || */
%token TK_LESS_THAN         /* < */
%token TK_GREATER_THAN      /* > */
%token TK_GREATER_EQUAL     /* >= */
%token TK_LESS_EQUAL        /* <= */
%token TK_ADD_ASSIGN        /* += */
%token TK_MINUS_ASSIGN      /* -= */
%token TK_COLON             /* : */
%token TK_DOT               /* . */
%token TK_PRINTF            /* printf */
%token TK_SCANF             /* scanf */
%token TK_EXIT              /* exit */

/* Other */
%token TK_IDENTIFIER
%token TK_STRING_LITERAL
%token TK_FLOAT_NUMBER_LITERAL
%token TK_NUMBER_LITERAL
%token TK_CLASSNAME
%token TK_COMMENT           /* # */
%token TK_INVALID
%token TK_EOF

%start program

%%
program:
    /* empty */
	| TK_CLASS TK_CLASSNAME TK_OPEN_BRACES funcao TK_CLOSE_BRACES { printf("Declaração classe main"); }
	;

funcao:
	| TK_FUNCTION TK_MAIN TK_OPEN_PARENTESIS TK_CLOSE_PARENTESIS TK_OPEN_BRACES declaracoes TK_CLOSE_BRACES { printf("Declaração main"); }
	| TK_FUNCTION TK_IDENTIFIER TK_OPEN_BRACES declaracoes TK_CLOSE_BRACES
	;


%%