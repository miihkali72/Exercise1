CC=gcc
CFLAG= -I -wall
EXE_NAME=APP
all: main.o operations.o
	$(CC) -o $(EXE_NAME) main.o operations.o $(CFLAGS)
