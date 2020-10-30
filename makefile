.POSIX:
.PHONY: run clean
CC= gcc
CFLAGS= -Wall -Wextra -Wpedantic -Wuninitialized -Wundef -Wcast-align -Wstrict-overflow=2 -Wwrite-strings -Wno-format-nonliteral
BINARY=list
OBJECTS= main.o link.o

$(BINARY): $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS)

main.o: main.c link.h
	$(CC) -c main.c $(CFLAGS)

link.o: link.c link.h
	$(CC) -c link.c $(CFLAGS)

run: $(BINARY)
	./$(BINARY)

clean:
	rm *.o $(BINARY)
