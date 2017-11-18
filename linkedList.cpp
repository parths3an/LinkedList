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
    delete head;
}

int LinkedList::getRoot()
{
    return head->data;
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
       head = tempNode;
       size++;
       return true;
    }
    //If head is not null
    //find a place for the node to insert
    if ( head->data == newData)
	{
	  cout << "Can not insert dulplicate data;" << newData << " exist in the LL\n";
	  return true;	
	}

    Node* curr = head;
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
    
    if ( curr->data == newData)
    {
    	cout << "The data you are looking for is in the LL\n";
    	return true;
    }
    //Will check for non-head nodes only
    while(curr->data != newData && curr->next != nullptr)
    {
        curr = curr->next;
        if (curr->data == newData)
        {
            cout << "The data you are looking for exist in the LL" << endl;
            return true; 
        }
    }
    cout << "Reached end of LL; The data you are looking for is not found.\n";
    return false; 
}

bool LinkedList::deleteNode(int deleteData)
{
    if (head == nullptr)
    { //There are no elements in the LinkedList
        cout << "This is an empty LL\n";
        return false;
    }
    else 
    { //Find the node, if found replace and reconnect the link
        Node* curr = head; 
        Node* prev = head;

        //The case when head the node you are trying to delete
        if ( curr->data == deleteData)
        {
            Node* prevHead = curr;
	    head = curr->next;
	    prevHead->next = nullptr;
            delete prevHead;
            cout << "Deleted the node " << deleteData << endl;
            size--;
            return true;
        }

        //If you are trying to delete the node in between
        while( curr != nullptr)
        {
            prev = curr;
            curr = curr->next;
            if( curr->data == deleteData)
            {
                Node* toBeDeleted = curr;
                if (curr->next != nullptr)
                {
                prev->next = curr->next; 
                delete toBeDeleted;
                size--;
                return true;
                }
                else //curr->next == nullptr
                {
                    Node* toBeDeleted = curr;
                    prev->next = nullptr;
                    delete toBeDeleted;
                    size--;
                    return true;
                }
            }
            else //move the curr to curr->next 
            {
		//Don't do anything just traverse the curr in next iteration	
            }
        }
        cout << "Reached the end of the LL " << deleteData;
        cout << " is not found in LL\n";
        return false;
    }    


    return true;
}
 

void LinkedList::printLL() const 
{
    if ( head == nullptr)
    {
        cout << "LL is empty -___-\n";
    }
    else //LL is not null 
    {
        Node* curr = head;
        while( curr != nullptr)
        {
            cout << curr->data << " "; 
            curr = curr->next;
        }
        cout << endl;
    }
}
