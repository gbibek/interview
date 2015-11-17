

CC = gcc 
FLAGS = -Wall
CFLAGS = -c $(FLAGS) -Werror -fPIC
LDFLAGS = -shared
RDTSC_LIB = librdtsc.so
SRC = $(shell echo *.c)
OBJS = $(SRC:.c=.o) 



all: my_rdtsc

my_rdtsc: $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(RDTSC_LIB)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean:
	rm -f *.*o
