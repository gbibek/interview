

CC = gcc 
FLAGS = -Wall
CFLAGS = -c $(FLAGS) -Werror -fPIC
LDFLAGS = -shared
RDTSC_LIB = librdtsc.so
SRC = $(shell echo *.c)
OBJS = $(SRC:.c=.o) 



all: $(RDTSC_LIB)

$(RDTSC_LIB): $(OBJS)
	$(CC) $(LDFLAGS) $? -o $@

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) $?

clean:
	rm -f *.*o
