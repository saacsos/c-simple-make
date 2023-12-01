CC = gcc
CFLAGS = -g

mylib.o: mylib.c
	$(CC) $(CFLAGS) -c mylib.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

program: clean mylib.o main.o
	$(CC) $(CFLAGS) -o program.out mylib.o main.o

run: program
	./program.out

clean:
	rm -f *.o program.out