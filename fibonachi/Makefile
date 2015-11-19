
CC = gcc
FLAGS = -Wall
RDTSC = rdtsc
CURRENT_DIR = $(shell pwd)
LIB_PATH=-L$(addprefix $(CURRENT_DIR)/, $(RDTSC))
MY_LIB_PATH := $(addprefix $(CURRENT_DIR)/, $(RDTSC)) 
LIB = -lrdtsc
SRC = $(shell echo *.c)
OBJS = $(SRC:.c=.o)
#OBJS += librdtsc.so
BIN = my_fib


TARGET = $(BIN)

all: $(TARGET)

$(TARGET): $(OBJS)   
	$(info $(OBJ))
	$(CC) $(FLAGS) $(LIB_PATH) $< -o $@ $(LIB) 

$(OBJS): $(SRC)
	$(CC) -c $? 
	cd $(RDTSC) && $(MAKE)

clean:
	rm -f *.o $(BIN)
	cd $(RDTSC) && $(MAKE) clean

