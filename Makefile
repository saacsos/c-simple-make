CC = gcc
CFLAGS = -g

mylib.o: mylib.c
	$(CC) $(CFLAGS) -c mylib.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

program: mylib.o main.o
	$(CC) $(CFLAGS) -o program mylib.o main.o

clean:
	rm *.o program.exe