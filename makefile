.POSIX:
.PHONY: run clean
CC= gcc
CFLAGS= -g -Wall -Wextra -Wpedantic -Wuninitialized -Wundef -Wcast-align -Wstrict-overflow=2 -Wwrite-strings -Wno-format-nonliteral
BINARY=list
OBJECTS= main.o fighter.o

$(BINARY): $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS)

main.o: main.c fighter.h
	$(CC) -c main.c $(CFLAGS)

fighter.o: fighter.c fighter.h
	$(CC) -c fighter.c $(CFLAGS)

run: $(BINARY)
	./$(BINARY)

clean:
	rm *.o $(BINARY)
