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
	
    cout << " The new root is: " << l1.getRoot() << " and size is: " << l1.getSize() << endl; 
   
    cout << "Testing for duplicate insert\n";
    bool duplicateInsert = l1.insert(25);
    cout << endl << "Now testing find...\n"; 
    bool testFind = l1.find(-25);

    cout << "Now testing the delete function...\n";
    cout << "LL before deleting head: ";
    l1.printLL();
    l1.deleteNode(25);
    cout << "After deleting the head you have...\n";
    cout << "LL after deleting head: ";
    l1.printLL();
    cout << "The new root is: " << l1.getRoot() << " and size is: " << l1.getSize() << endl; 
  
    cout << "inserting 3 more values in LL" << endl;
    t = l1.insert(-78);
    t = l1.insert(32);
    t = l1.insert(0);

    
    cout << "before deleting the middle element -78, the LL looks like: \n";
    l1.printLL();

    l1.deleteNode(-78);
    cout << "After deleting the middle element -78, the LL looks like: \n";
    l1.printLL();	
    //Delete the objects on the heap
    return 0;
}
