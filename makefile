# Variáveis
CC = g++                                  # Compilador
CFLAGS = -Wall -pedantic -O0 -g           # Flags do compilador
OBJ = sistema.o funcionario.o desenvolvedor.o gerente.o estagiario.o # Objetos
EXEC = sistema.exe                        # Nome do arquivo executável

# Regra principal
all: $(EXEC)

# Como gerar o executável
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Como gerar os arquivos .o (objetos)
sistema.o: sistema.cpp funcionario.h desenvolvedor.h gerente.h estagiario.h
	$(CC) $(CFLAGS) -c sistema.cpp

funcionario.o: funcionario.cpp funcionario.h
	$(CC) $(CFLAGS) -c funcionario.cpp

desenvolvedor.o: desenvolvedor.cpp desenvolvedor.h funcionario.h
	$(CC) $(CFLAGS) -c desenvolvedor.cpp

gerente.o: gerente.cpp gerente.h funcionario.h
	$(CC) $(CFLAGS) -c gerente.cpp

estagiario.o: estagiario.cpp estagiario.h funcionario.h
	$(CC) $(CFLAGS) -c estagiario.cpp

# Limpeza dos arquivos gerados
clean:
	del /f /q $(OBJ) $(EXEC)

# Rodar o programa após a compilação
run: $(EXEC)
	$(EXEC)