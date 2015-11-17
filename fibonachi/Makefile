
CC = gcc
FLAGS = -Wall
RDTSC = rdtsc
CURRENT_DIR = $(shell pwd)
LIB_PATH=-L$(addprefix $(CURRENT_DIR)/, $(RDTSC))
MY_LIB_PATH := $(addprefix $(CURRENT_DIR)/, $(RDTSC)) 
LIB = -lrdtsc
SRC = $(shell echo *.c)
OBJS = $(SRC:.c=.o)
OBJS += librdtsc.so
BIN = my_fib
$(info $())


TARGET = $(BIN)

all: $(TARGET)

$(TARGET): $(OBJS)   
	$(CC) $(FLAGS) $(LIB_PATH) $(SRC) -o $(TARGET) $(LIB) 

librdtsc.so:
	cd $(RDTSC) && $(MAKE)

clean:
	rm -f *.o $(BIN)
	cd $(RDTSC) && $(MAKE) clean

