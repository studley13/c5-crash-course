CC=clang
CFLAGS=-Wall -Werror

ALL_BINARIES=typeDouble unsignedDouble guessing maths challenge game simple

all:	$(ALL_BINARIES)

clean:
	rm -rf *.o $(ALL_BINARIES)

typeDouble:			typeDouble.c
	$(CC) $(CFLAGS) -o $@ $^

unsignedDouble:		unsignedDouble.c
	$(CC) $(CFLAGS) -o $@ $^

guessing:			guessing.c
	$(CC) $(CFLAGS) -o $@ $^

maths:				maths.c
	$(CC) $(CFLAGS) -o $@ $^

challenge:			challenge.c
	$(CC) $(CFLAGS) -o $@ $^

game:				game.c
	$(CC) $(CFLAGS) -o $@ $^

simple:				simple.c
	$(CC) $(CFLAGS) -o $@ $^
