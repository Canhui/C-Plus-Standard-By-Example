CC=gcc  
CFLAGS=-c -Wall  
LDFLAGS=  
SOURCES=main.c file1.c file2.c  
OBJECTS=$(SOURCES:.cpp=.o)  
EXECUTABLE=main  
  
all: $(SOURCES) $(EXECUTABLE)  
      
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@  
  
.cpp.o:
	$(CC) $(CFLAGS) {1}lt; -o $@  

clean:  
	rm -rf *o
