%option noyywrap

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define YY_DECL struct token_t* yylex(void) //Declara que o retorno do yylex vai ser um token_t * e não mais uma string com o lexema

    FILE *yyin;

    enum Token {
        /* TYPE DEFINITIONS */
        TK_INT,                  // int 
        TK_BOOL,                 // bool
        TK_FLOAT,                // float
        TK_STRING,               // str 
        TK_NOTHING,              // nothing
        TK_FUNCTION,             // fn
        TK_CLASS,                // class 

        /* Reserved words */
        TK_IF,                   // if 
        TK_FOR,                  // for 
        TK_RETURN,               // ret
        TK_IMPORT,               // import               
        TK_FROM,                 // from   //criar
        TK_BREAK,                // break //criar
        TK_ELSE,                 // else  //criar   
        TK_TRUE,                 // true //criar
        TK_FALSE,                // false /criar

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
        TK_DIVISION_FLOOR,       // //
        TK_MULTIPLICATION,       // *
        TK_POW,                  // **
        TK_EQUALS,               // ==
        TK_DIFFERENT,            // !=
        TK_MOD,                  // % 
        TK_NOT,                  // !
        TK_LOGICAL_AND,          // &&
        TK_LOGICAL_OR,           // ||
        TK_LESS_THAN,            // <
        TK_GREATER_THAN,         // >
        TK_GREATER_EQUAL,        // >=
        TK_LESS_EQUAL,           // <=
        TK_ADD_ASSIGN,           // +=
        TK_MINUS_ASSIGN,         // -=
        TK_COLON,                // :
        TK_DOT,                  // .
        TK_PRINTF,               // printf
        TK_SCANF,                // scanf
        TK_EXIT,                 // exit 
        /* Other */
        TK_IDENTIFIER,
        TK_STRING_LITERAL,
        TK_FLOAT_NUMBER_LITERAL,
        TK_NUMBER_LITERAL,
        TK_CLASSNAME,
        TK_COMMENT,             // #
        TK_INVALID,
        TK_MAIN,                // main
        TK_EOF
    };

    struct token_t {
        enum Token token;
        char *lexeme;
    };

    struct token_t *create_token(enum Token token_enum, const char* token_name) {
        struct token_t* tok = malloc(sizeof(struct token_t));
        tok->token = token_enum;
        tok->lexeme = strdup(yytext);
        return tok;
    }
%}

%%
[+-]?[0-9][0-9.]*[a-zA-Z_][a-zA-Z0-9_]*   { return create_token(TK_INVALID, "TK_INVALID"); }
"str"                                { return create_token(TK_STRING, "TK_STRING"); }
"int"                                { return create_token(TK_INT, "TK_INT"); }
"float"                              { return create_token(TK_FLOAT, "TK_FLOAT"); }
"fn"                                 { return create_token(TK_FUNCTION, "TK_FUNCTION"); }
"bool"                               { return create_token(TK_BOOL, "TK_BOOL"); }
"nothing"                            { return create_token(TK_NOTHING, "TK_NOTHING"); }
"printf"                             { return create_token(TK_PRINTF, "TK_PRINTF"); }
"scanf"                              { return create_token(TK_SCANF, "TK_SCANF"); }
"exit"                               { return create_token(TK_EXIT, "TK_EXIT"); }
"not"                                { return create_token(TK_NOT, "TK_NOT"); }
"if"                        		 { return create_token(TK_IF, "TK_IF"); }
"for"                       		 { return create_token(TK_FOR, "TK_FOR"); }
"class"                     		 { return create_token(TK_CLASS, "TK_CLASS"); }
"import"                    		 { return create_token(TK_IMPORT, "TK_IMPORT"); }
"from"                      		 { return create_token(TK_FROM, "TK_FROM"); }
"ret"                       		 { return create_token(TK_RETURN, "TK_RETURN"); }
"main"                       		 { return create_token(TK_MAIN, "TK_MAIN"); }
"true"                       		 { return create_token(TK_TRUE, "TK_TRUE"); }
"false"                       		 { return create_token(TK_FALSE, "TK_FALSE"); }
"else"                       		 { return create_token(TK_ELSE, "TK_ELSE"); }
"break"                       		 { return create_token(TK_BREAK, "TK_BREAK"); }
"->"                        		 { return create_token(TK_RETURNTYPE, "TK_RETURNTYPE"); }
"("                         		 { return create_token(TK_OPEN_PARENTESIS, "TK_OPEN_PARENTESIS"); }
")"                         		 { return create_token(TK_CLOSE_PARENTESIS, "TK_CLOSE_PARENTESIS"); }
"{"                                  { return create_token(TK_OPEN_BRACES, "TK_OPEN_BRACES"); }
"}"                         		 { return create_token(TK_CLOSE_BRACES, "TK_CLOSE_BRACES"); }
"["                         		 { return create_token(TK_OPEN_SQUARE_BRACKET, "TK_OPEN_SQUARE_BRACKET"); }
"]"                         		 { return create_token(TK_CLOSE_SQUARE_BRACKET, "TK_CLOSE_SQUARE_BRACKET"); }
"//"                        		 { return create_token(TK_DIVISION_FLOOR, "TK_DIVISION_FLOOR"); }
"/"                         		 { return create_token(TK_DIVISION, "TK_DIVISION"); }
"**"                        		 { return create_token(TK_POW, "TK_POW"); }
"*"                         		 { return create_token(TK_MULTIPLICATION, "TK_MULTIPLICATION"); }
"=="                        		 { return create_token(TK_EQUALS, "TK_EQUALS"); }
"!="                        		 { return create_token(TK_DIFFERENT, "TK_DIFFERENT"); }
"+="                        		 { return create_token(TK_ADD_ASSIGN, "TK_ADD_ASSIGN"); }
"-="                        		 { return create_token(TK_MINUS_ASSIGN, "TK_MINUS_ASSIGN"); }
"&&"                         		 { return create_token(TK_LOGICAL_AND, "TK_LOGICAL_AND"); }
"||"                         		 { return create_token(TK_LOGICAL_OR, "TK_LOGICAL_OR"); }
"+"                         		 { return create_token(TK_PLUS, "TK_PLUS"); }
"-"                         		 { return create_token(TK_MINUS, "TK_MINUS"); }
";"                         		 { return create_token(TK_COMMAND_END, "TK_COMMAND_END"); }
"<="                         		 { return create_token(TK_LESS_EQUAL, "TK_LESS_EQUAL"); }
">="                         		 { return create_token(TK_GREATER_EQUAL, "TK_GREATER_EQUAL"); }
"<"                         		 { return create_token(TK_LESS_THAN, "TK_LESS_THAN"); }
">"                         		 { return create_token(TK_GREATER_THAN, "TK_GREATER_THAN"); }
":"                         		 { return create_token(TK_COLON, "TK_COLON"); }
"="                         		 { return create_token(TK_ATTRIBUTION, "TK_ATTRIBUTION"); }
"#.*"                         		 { return create_token(TK_COMMENT, "TK_COMMENT"); }
"."                         		 { return create_token(TK_DOT, "TK_DOT"); }
","                         		 { return create_token(TK_COMMA, "TK_COMMA"); }
\"([^\\\"]|\\.)*\"          		 { return create_token(TK_STRING_LITERAL, "TK_STRING_LITERAL"); }
[0-9]+\.[0-9]+              		 { return create_token(TK_FLOAT_NUMBER_LITERAL, "TK_FLOAT_NUMBER_LITERAL"); }
[0-9]+                      		 { return create_token(TK_NUMBER_LITERAL, "TK_NUMBER_LITERAL"); }
[A-Z][a-zA-Z0-9_]*         		     { return create_token(TK_CLASSNAME, "TK_CLASSNAME"); }
[a-zA-Z_][a-zA-Z0-9_]*      		 { return create_token(TK_IDENTIFIER, "TK_IDENTIFIER"); }
[ \t\n\r]+                  		 { /* ignora espaços em branco */ }
.                           		 { return create_token(TK_INVALID, "TK_INVALID"); }

%%

#define MAX_LINE_LENGTH 1024

void print_line_with_highlight(const char* filename, const char* word) {
    size_t line = 1;
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Error opening trace file");
        return;
    }

    char buffer[MAX_LINE_LENGTH];
    while (fgets(buffer, MAX_LINE_LENGTH, file)) {
        char* match = strstr(buffer, word);
        if (match) {

            const char* RED = "\033[31m";
            const char* YELLOW_BOLD = "\033[1;33m";
            const char* RESET = "\033[0m";

            size_t error_column = match - buffer;

            printf("%s [%ld:%ld] Invalid token: '%s'\n\n", RED, line, error_column + 1, word);
            fwrite(buffer, 1, error_column, stdout);                
            printf("%s%s%s", YELLOW_BOLD, word, RED);                 
            printf("%s\n", match + strlen(word));                       
            printf("Compilation aborted with lexical analysis error (Opcode 1)\n");
            printf("%s", RESET);
            break;
        }
        line++;
    }

    fclose(file);
}

int ends_with(const char *str, const char *suffix) {
    if (!str || !suffix) {
        return 0;
    }
    size_t str_len = strlen(str);
    size_t suffix_len = strlen(suffix);

    if (suffix_len > str_len) {
        return 0;
    }

    return (strcmp(str + str_len - suffix_len, suffix) == 0);
}

int main(int argc, char **argv) {

    int debugMode = 0;

    const char FILE_EXT[5]=".mor";

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <file.mor> [OPTIONS...]\n", argv[0]);
        fprintf(stderr, "--d: Debug mode\n");
        exit(1);
    }

    if (argc > 2) {
        debugMode = strncmp(argv[2], "--d", 3) == 0;
    } 

    if (!ends_with(argv[1], FILE_EXT)) {
        fprintf(stderr, "Invalid file name: '%s'\n", argv[1]);
        exit(1);
    }

    yyin = fopen(argv[1], "r");

    if (!yyin) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    struct token_t* token;
    while ((token = yylex()) != NULL) {
        if (token->token == TK_INVALID) {
            print_line_with_highlight(argv[1], token->lexeme);
            exit(1);
        }
        if (debugMode) printf("TOKEN: %-25d | LEXEMA: %s\n", token->token, token->lexeme);

        free(token->lexeme);
        free(token);
    }

    fclose(yyin);
    return 0;
}
