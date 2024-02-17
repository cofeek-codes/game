CFLAGS=-Wall -Wextra

main: main.c
	clang $(CFLAGS)  main.c -o main -I./lib/ -L./lib/ -lraylib -lm
