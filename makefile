all: main.o musicLibraryFunc.o linkedFunc.o
	gcc -o program main.o linkedHead.o linkedFunc.o
main.o:	main.c musicHead.h linkedHead.h
	gcc -c main.c
musicLibraryFunc.o: musicLibraryFunc.c musicHead.h linkedHead.h
	gcc -c musicLibraryFunc.c
linkedFunc.o:	linkedFunc.c linkedHead.h
	gcc -c linkedFunc.c
run:
	./program
clean:
	rm *.o
	rm *~
