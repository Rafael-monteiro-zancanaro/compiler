%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Token {
    /* TYPE DEFINITIONS */
    TK_INT,                  // int 
    TK_FLOAT,                // float
    TK_STRING,               // str 
    TK_NOTHING,              // nothing
    TK_FUNCTION,             // fn
    TK_CLASS,                // class 

    /* Reserved words */
    TK_IF,                   // if 
    TK_FOR,                  // for 
    TK_PUB,                  // pub
    TK_PRIV,                 // priv
    TK_STATIC,               // static 
    TK_RETURN,               // ret
    TK_IMPORT,               // import               
    TK_FROM,                 // from               

    /* Operators */
    TK_ATTRIBUTION,          // =
    TK_COMMA,                // ,
    TK_RETURNTYPE,           // ->
    TK_OPEN_PARENTESIS,      // (
    TK_CLOSE_PARENTESIS,     // )
    TK_OPEN_BRACES,          // {
    TK_CLOSE_BRACES,         // }
    TK_COMMAND_END,          // ;
    TK_OPEN_SQUARE_BRACKET,  // [ 
    TK_CLOSE_SQUARE_BRACKET, // ]
    TK_PLUS,                 // + 
    TK_MINUS,                // - 
    TK_DIVISION,             // / 
    TK_DIVISION_ROUNDING_UP, // //
    TK_MULTIPLICATION,       // *
    TK_POW,                  // **
    TK_EQUALS,               // ==
    TK_DIFFERENT,            // !=

    /* Other */
    TK_IDENTIFIER,
    TK_STRING_LITERAL,
    TK_NUMBER_LITERAL,
    TK_FLOAT_NUMBER_LITERAL,
    TK_CLASSNAME,
    TK_INVALID,
    TK_EOF
};

struct token_t {
    enum Token token;
    char *lexeme;
};

FILE *yyin;

struct token_t* create_token(enum Token token_type, const char* token_name) {
    struct token_t* t = malloc(sizeof(struct token_t));
    if (!t) {
        fprintf(stderr, "Erro de alocação de memória para token\n");
        exit(1);
    }

    t->token = token_type;
    t->lexeme = strdup(yytext);

    printf("TOKEN: %-25s | LEXEMA: %s\n", token_name, yytext);
    return t;
}
%}

%%

"str"                       { return create_token(TK_STRING, "TK_STRING"); }
"int"                       { return create_token(TK_INT, "TK_INT"); }
"float"                     { return create_token(TK_FLOAT, "TK_FLOAT"); }
"fn"                        { return create_token(TK_FUNCTION, "TK_FUNCTION"); }
"nothing"                   { return create_token(TK_NOTHING, "TK_NOTHING"); }
"if"                        { return create_token(TK_IF, "TK_IF"); }
"for"                       { return create_token(TK_FOR, "TK_FOR"); }
"priv"                      { return create_token(TK_PRIV, "TK_PRIV"); }
"pub"                       { return create_token(TK_PUB, "TK_PUB"); }
"static"                    { return create_token(TK_STATIC, "TK_STATIC"); }
"class"                     { return create_token(TK_CLASS, "TK_CLASS"); }
"import"                    { return create_token(TK_IMPORT, "TK_IMPORT"); }
"from"                      { return create_token(TK_FROM, "TK_FROM"); }
"ret"                       { return create_token(TK_RETURN, "TK_RETURN"); }

"=="                        { return create_token(TK_EQUALS, "TK_EQUALS"); }
"!="                        { return create_token(TK_DIFFERENT, "TK_DIFFERENT"); }
"//"                        { return create_token(TK_DIVISION_ROUNDING_UP, "TK_DIVISION_ROUNDING_UP"); }
"**"                        { return create_token(TK_POW, "TK_POW"); }
"->"                        { return create_token(TK_RETURNTYPE, "TK_RETURNTYPE"); }

"="                         { return create_token(TK_ATTRIBUTION, "TK_ATTRIBUTION"); }
","                         { return create_token(TK_COMMA, "TK_COMMA"); }
"("                         { return create_token(TK_OPEN_PARENTESIS, "TK_OPEN_PARENTESIS"); }
")"                         { return create_token(TK_CLOSE_PARENTESIS, "TK_CLOSE_PARENTESIS"); }
"{"                         { return create_token(TK_OPEN_BRACES, "TK_OPEN_BRACES"); }
"}"                         { return create_token(TK_CLOSE_BRACES, "TK_CLOSE_BRACES"); }
"["                         { return create_token(TK_OPEN_SQUARE_BRACKET, "TK_OPEN_SQUARE_BRACKET"); }
"]"                         { return create_token(TK_CLOSE_SQUARE_BRACKET, "TK_CLOSE_SQUARE_BRACKET"); }
";"                         { return create_token(TK_COMMAND_END, "TK_COMMAND_END"); }
"+"                         { return create_token(TK_PLUS, "TK_PLUS"); }
"-"                         { return create_token(TK_MINUS, "TK_MINUS"); }
"/"                         { return create_token(TK_DIVISION, "TK_DIVISION"); }
"*"                         { return create_token(TK_MULTIPLICATION, "TK_MULTIPLICATION"); }

\"([^\\\"]|\\.)*\"          { return create_token(TK_STRING_LITERAL, "TK_STRING_LITERAL"); }

[0-9]+\.[0-9]+              { return create_token(TK_FLOAT_NUMBER_LITERAL, "TK_FLOAT_NUMBER_LITERAL"); }
[0-9]+                      { return create_token(TK_NUMBER_LITERAL, "TK_NUMBER_LITERAL"); }

[A-Z_][a-zA-Z0-9_]*         { return create_token(TK_CLASSNAME, "TK_CLASSNAME"); }

[a-zA-Z_][a-zA-Z0-9_]*      { return create_token(TK_IDENTIFIER, "TK_IDENTIFIER"); }

[0-9]+[a-zA-Z_][a-zA-Z0-9_]* { return create_token(TK_INVALID, "TK_INVALID"); }

[ \t\n\r]+                  { /* ignora espaços em branco */ }

.                           { return create_token(TK_INVALID, "TK_INVALID"); }

%%

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <arquivo.mor>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (yylex());

    fclose(yyin);
    return 0;
}
