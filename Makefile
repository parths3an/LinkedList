all: main

main: main.o linkedList.o
	g++ main.o linkedList.o -o main

main.o: main.cpp
	g++ -std=c++11 -c  main.cpp 

linkedList.o: linkedList.cpp linkedList.h node.o 
	g++ -std=c++11 -c linkedList.cpp 
#So,if it just the .h file by itself you also have to compile it as it is
node.o: node.h
	g++ -std=c++11 -c node.h
clean: 
	rm *.o main
