OPTIONS=-std=c++11
COMPILE=g++

all: main

main: handler
	$(COMPILE) $(OPTIONS) handler.o -o handler
handler: handler.cpp
	$(COMPILE) $(OPTIONS) -c handler.cpp 
clean:	
	rm *.o
