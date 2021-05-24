all: program

program: main.o lista_dina_encadeada.o
	gcc main.o lista_dina_encadeada.o -lm -o program

lista_dina_endadeada.o: lista_dina_encadeada.c lista_encadeada.h
	gcc -c lista_dina_encadeada.c

main.o: main.c lista_dina_encadeada.c
	gcc -c main.c

clear:
	rm -rf *.o program
