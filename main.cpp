/**
 * main.cpp
 */ 
#include<iostream>
#include<stack>
#include "linkedList.h"

using namespace std; 

int main()
{

    LinkedList* l1 = new LinkedList();
    cout << "The size is:" << l1->getSize();
    

    //Delete the objects on the heap
    //delete l1;
    return 0;
}
