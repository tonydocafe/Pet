CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = main.o pet.o

all: pet

pet: $(OBJS)
	$(CC) $(CFLAGS) -o pet $(OBJS)

main.o: main.c pet.h
	$(CC) $(CFLAGS) -c main.c

pet.o: pet.c pet.h
	$(CC) $(CFLAGS) -c pet.c

clean:
	rm -f pet $(OBJS)
