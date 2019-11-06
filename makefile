CC = gcc
all: main.o musicLibraryFunc.o linkedFunc.o
	$(CC) -o program main.o musicLibraryFunc.o linkedFunc.o
main.o:	main.c musicHead.h linkedHead.h
	$(CC) -c main.c
musicLibraryFunc.o: musicLibraryFunc.c musicHead.h linkedHead.h
	$(CC) -c musicLibraryFunc.c
linkedFunc.o:	linkedFunc.c linkedHead.h
	$(CC) -c linkedFunc.c
run:
	./program
clean:
	rm *.o
	rm *~
