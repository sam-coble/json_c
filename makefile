CC=gcc
# CFLAGS=-I
DEPS=json.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

parse: json.o
	$(CC) -o parse json.o
