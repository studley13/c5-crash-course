CC=clang
CFLAGS=-Wall -Werror

ALL_PROGS=array fun1 fun2 fun3 fun4 multiarray string1 string2 struct pointer while

all: $(ALL_PROGS)

clean:
	rm -rf *.o $(ALL_PROGS)

array:	array.c


fun1:	fun1.c
	$(CC) -o $@ $^

fun2:	fun2.c
	$(CC) $(CFLAGS) -o $@ $^

fun3:	fun3.c
	$(CC) $(CFLAGS) -o $@ $^

fun4:	fun4.c
	$(CC) $(CFLAGS) -o $@ $^

multiarray:	multiarray.c
	$(CC) $(CFLAGS) -o $@ $^

string1:	string1.c
	$(CC) $(CFLAGS) -o $@ $^

string2:	string2.c
	$(CC) $(CFLAGS) -o $@ $^

struct:	struct.c
	$(CC) $(CFLAGS) -o $@ $^

pointer:	pointer.c
	$(CC) $(CFLAGS) -o $@ $^

while:	while.c
	$(CC) $(CFLAGS) -o $@ $^

