CC := g++
CFLAGS := -g
TARGET := target
SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %cpp,%o,$(SRCS))

all:$(TARGET) clean

%.o:%.cpp
	$(CC) $(CFLAGS) -c $<

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o
