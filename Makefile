# Compilador e ferramentas
CC = gcc
FLEX = flex

# Arquivos de entrada/saída
LEXER = lexer.l
LEX_C = lex.yy.c
OUT = compiler

# Flags de compilação
CFLAGS = -Wall
LDFLAGS = -lfl

# Regra padrão
all: $(OUT)

# Compilação principal
$(OUT): $(LEX_C)
	$(CC) $(CFLAGS) -o $(OUT) $(LEX_C) $(LDFLAGS)

# Geração do lex.yy.c
$(LEX_C): $(LEXER)
	$(FLEX) $(LEXER)

# Limpeza dos arquivos gerados
clean:
	rm -f $(OUT) $(LEX_C)
