/**
 * node.cpp
 * definitation of node.cpp
 */ 
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
using namespace std;
class LinkedList
{
public: 
   //Constructor 
   LinkedList():head(nullptr),size(0){} 
   
   //Destructor 
    ~LinkedList();

    //Accessor function
    Node* getRoot();

    //Will return the current number of elements in the LL
    int getSize();

    //will return true if inserted and false if already exist
    bool insert(int data);

    //will return true if found and false if does not exist
    bool find(int data);

    /**
     * will return true if successfully deleted and false if does
     * not exist or not able to delete
     */ 
    bool deleteNode(int data);

private: 
Node* head;
int size;
};

#endif //LINKEDLIST_H
