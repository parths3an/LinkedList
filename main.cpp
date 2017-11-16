/**
 * main.cpp
 */ 
#include<iostream>
#include "linkedList.h"

using namespace std; 

int main()
{

    LinkedList l1; 
    cout << "The size is:" << l1.getSize();

    cout << "Inserting 3 elements..." << endl;
    l1.insert(25);

//    cout << " The new root and size is: " << l1.getRoot() << " " << l1.getSize() << endl; 
    

    //Delete the objects on the heap
   
    return 0;
}
