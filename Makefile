CC=gcc
CFLAGS=-Wall -Wextra -std=c11 -I. -Itypes -Ialgorithms
SRCS = main.c types/Integer.c algorithms/sum.c
OBJS = $(SRCS:.c=.o)
TARGET = main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
