# A simple makefile for CSE 100 PA4

CC=g++
CXXFLAGS=-std=c++11
LDFLAGS=-g

# if passed "type=opt" at command-line, compile with "-O3" flag (otherwise use "-g" for debugging)

ifeq ($(type),opt)
	    CPPFLAGS += -O3
		    LDFLAGS += -O3
		else
		    CPPFLAGS += -g
			    LDFLAGS += -g
			endif

all: main

# Note: you do not have to include a *.cpp file if it aleady has a paired *.h file that is already included with class/method headers

main: main.o linkedList.o 

main.o: main.cpp 

linkedList.o: linkedList.h Node.o

Node.o: node.h

clean:
		rm -f pathfinder *.o core*


