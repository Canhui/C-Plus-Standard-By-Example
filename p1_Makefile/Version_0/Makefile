main: main.o file1.o file2.o
	gcc -o main main.o file1.o file2.o
main.o: main.c file1.h file2.h
	gcc -c main.c
file1.o: file1.c file1.h
	gcc -c file1.c
file2.o: file2.c file2.h
	gcc -c file2.c

