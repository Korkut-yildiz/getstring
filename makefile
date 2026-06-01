CC = gcc
CFLAGS = -Wall -Wextra

main: example.c compstring.c compstring.h
	$(CC) $(CFLAGS) -o example example.c compstring.c

clean:
	rm -rf example
