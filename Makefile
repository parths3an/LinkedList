#This should work as a commit
all: main

main: main.o linkedlist.o
	g++ -o main main.o linkedlist.o

main.o: main.cpp 
	g++ -c main.cpp 

linkedlist.o: linkedList.cpp 
	g++ -c linkedList.cpp

clean: 
	rm *.o main
