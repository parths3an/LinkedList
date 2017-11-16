/**
 * declaration of the node class
 */
//TODO: Create a template based Node class
#ifndef NODE_H
#define NODE_H

#include<iostream>

using namespace std;
 class Node 
 {
 public: 
    //constructor
    Node(int newData):data(newData), next(nullptr){}

    int data;
    Node* next;        
 };
#endif
