all: experiment1

experiment1: experiment1.o
	gcc -g experiment1.o -o experiment1

experiment1.o: experiment1.c
	gcc -g -c experiment1.c

clean:
	rm -f *.o experiment1
