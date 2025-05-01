%option noyywrap

FILE *yyin;


%{
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

    /* Operators (?) */

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
        TK_CLASSNAME,
        TK_INVALID,
        TK_EOF
    };
%}

%%

"str"                       { printf("TK_STRING\n"); return TK_STRING; }
"int"                       { printf("TK_INT\n"); return TK_INT; }
"float"                     { printf("TK_FLOAT\n"); return TK_FLOAT; }
"fn"                        { printf("TK_FUNCTION\n"); return TK_FUNCTION; }
"nothing"                   { printf("TK_NOTHING\n"); return TK_NOTHING; }
"if"                        { printf("TK_IF\n"); return TK_IF; }
"for"                       { printf("TK_FOR\n"); return TK_FOR; }
"priv"                      { printf("TK_PRIV\n"); return TK_PRIV; }
"pub"                       { printf("TK_PUB\n"); return TK_PUB; }
"static"                    { printf("TK_STATIC\n"); return TK_STATIC; }
"class"                     { printf("TK_CLASS\n"); return TK_CLASS; }
"import"                    { printf("TK_IMPORT\n"); return TK_IMPORT; }
"from"                      { printf("TK_FROM\n"); return TK_FROM; }
"ret"                       { printf("TK_RETURN\n"); return TK_RETURN; }
"="                         { printf("TK_ATTRIBUTION\n"); return TK_ATTRIBUTION; }
","                         { printf("TK_COMMA\n"); return TK_COMMA; }
"("                         { printf("TK_OPEN_PARENTESIS\n"); return TK_OPEN_PARENTESIS; }
")"                         { printf("TK_CLOSE_PARENTESIS\n"); return TK_CLOSE_PARENTESIS; }
"->"                        { printf("TK_RETURNTYPE\n"); return TK_RETURNTYPE; }
"{"                         { printf("TK_OPEN_BRACES\n"); return TK_OPEN_BRACES; }
"}"                         { printf("TK_CLOSE_BRACES\n"); return TK_CLOSE_BRACES; }
"["                         { printf("TK_OPEN_SQUARE_BRACKET\n"); return TK_OPEN_SQUARE_BRACKET; }
"]"                         { printf("TK_CLOSE_SQUARE_BRACKET\n"); return TK_CLOSE_SQUARE_BRACKET; }
";"                         { printf("TK_COMMAND_END\n"); return TK_COMMAND_END; }
\"([^\\\"]|\\.)*\"          { printf("TK_STRING_LITERAL (%s)\n", yytext); return TK_STRING_LITERAL; }
[0-9]+                      { printf("TK_NUMBER_LITERAL (%s)\n", yytext); return TK_NUMBER_LITERAL; }
[A-Z_][a-zA-Z0-9_]*         { printf("TK_CLASSNAME (%s)\n", yytext); return TK_CLASSNAME; }
[a-zA-Z_][a-zA-Z0-9_]*      { printf("TK_IDENTIFIER (%s)\n", yytext); return TK_IDENTIFIER; }
[ \t\n\r]+                  { /* ignora espaços, tabs e quebras de linha */ }
.                           { printf("TK_INVALID (%s)\n", yytext); return TK_INVALID; }
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

    int token;

    while ((token = yylex()) != 0); // TODO: Implementar lógica para os tokens dentro deste while

    fclose(yyin);
    return 0;
}