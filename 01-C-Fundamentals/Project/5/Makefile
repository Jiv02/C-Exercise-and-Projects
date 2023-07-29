CC=gcc
INCDIRS=-I.
OPT=-O0
CFLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT) -std=c99

CFILES=main.c
OBJECTS=main.o

BINARY=bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	        $(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)
