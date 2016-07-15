CC=clang
CFLAGS=-Wall -Werror

all:	simple types user

clean:
	rm -rf simple types user *.o

simple.o:	simple.c

simple:		simple.o
	$(CC) $(CFLAGS) -o $@ $^

user.o:		user.c

user:		user.o
	$(CC) $(CFLAGS) -o $@ $^

types.o:	types.c

types:		types.o
	$(CC) $(CFLAGS) -o $@ $^
