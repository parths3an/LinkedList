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
    bool t = l1.insert(25);
    bool t1 = l1.insert(30);
    bool t2 = l1.insert(-13);
	
    cout << " The new root is: " << l1.getRoot() << " and size is:" << l1.getSize() << endl; 
   
    cout << "Testing for duplicate insert\n";
    bool duplicateInsert = l1.insert(25);
    cout << endl << "Now testing find...\n"; 
    bool testFind = l1.find(-25);

    cout << "Now testing the delete function...\n";
    l1.deleteNode(25);
    cout << "After deleting the headm you have...\n";
    cout << " The new root is: " << l1.getRoot() << " and size is:" << l1.getSize() << endl; 
   
    //Delete the objects on the heap
   
    return 0;
}
