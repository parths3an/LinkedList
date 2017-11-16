/**
 * node.cpp
 * definitation of node.cpp
 */ 

 #include "node.h"
 #include "linkedList.h"

//Destructor
LinkedList::~LinkedList()
{
    //Will have to delete one by by not directly like this
    //delete head;
}

Node* LinkedList::getRoot()
{
    return head;
}

int LinkedList::getSize()
{
    return size;
}

/**
 * Inserting in the sorted order;
 * First find the place to insert; Inserting in order will also 
 * help you do find efficiently, but will have worst time for insert
 * the runtime for insert will be O(n)
 */ 

bool LinkedList::insert(int newData)
{
    //If head is null, no need to check
    if(head == nullptr)
    {
        Node* tempNode = new Node(newData);
        head->next = tempNode;
        size++;
        return true;
    }
    //If head is not null
    //find a place for the node to insert
    
    Node* curr = head;
    Node* prev = head;
    Node* newNode = new Node(newData);

    while(curr->data != newData && curr->next != nullptr)
    {
        curr = curr->next;

        if (curr->data == newData)
        {
            cout << "The data you are looking for exist in the LL; can not insert duplicates" << endl;
            return false; 
        }
    }
    //Inserting at the end of the LL
    curr->next = newNode; 
    size++;
    return true;
}

bool LinkedList::find(int newData)
{
    if (head == nullptr)
    { //There are no elements in the LinkedList
        return false;
    }
    Node* curr= head;
        
    while(curr->data != newData && curr->next != nullptr)
    {
        curr = curr->next;
        if (curr->data == newData)
        {
            cout << "The data you are looking for exist in the LL" << endl;
            return true; 
        }
    }
    cout << "Reached end of LL; The data you are looking for is not found.";
    return false; 
}

bool LinkedList::deleteNode(int data)
{


    return true;
}
 

