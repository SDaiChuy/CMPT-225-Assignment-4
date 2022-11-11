/*
* Queue.cpp
* 
* Description: This is a doubly headed doubly linked list-based implementation of a Queue ADT class.           
*
* Author: AL + SD
* Date: Last modified: Nov. 2022
*/ 
#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;



//Constructor for the Queue
template <class ElementType>
Queue<ElementType>::Queue(){

}

// Copy Constructor for the Queue
template <class ElementType>
Queue<ElementType>::Queue(ElementType& newElement){
    Node* data = newElement;
}
    

//Destructor for the Queue
template <class ElementType>
Queue<ElementType>::~Queue(){
    head = nullptr;
    tail = nullptr;
    elementCount = 0;
}

//Checks to see if the Queue is empty
template <class ElementType>
bool Queue<ElementType>::isEmpty() const{
    return head == nullptr;
}

//Inserts an element into the Rear of the Queue. 
//Rear:[],[],[],[],[]:Front
template <class ElementType>
bool Queue<ElementType>::enqueue(ElementType & newElement){
    // if queue is empty create a new node with the newElement
    if(isEmpty()){
        ElementType* newNode = new ElementType(newElement);
    
    if(newNode == nullptr){
        throw UnableToInsertException(" in enqueue(); new failed newNode cannot be allocated heap memory.");
    }
        newNode->next = head;
        head = newNode;
        elementCount++;
        return true;
    }   
    return false;
}

//Removes an element from the front of the Queue.
//Rear:[],[],[],[],[]:Front
template <class ElementType>
void Queue<ElementType>::dequeue(){
    if(isEmpty()){
        throw EmptyDataCollectionException(" in dequee(); the list is empty.");
    }
    else{
        ElementType *toBeRemoved = tail;
        toBeRemoved->next = nullptr;
        tail = toBeRemoved->prev;
        elementCount--;
        return; 
    }
    return;
}

// Returns the element at the Rear of the Queue.
//Rear:[],[],[],[],[]:Front 
template <class ElementType>
ElementType & Queue<ElementType>::peek()const{
    if(isEmpty()){
        throw EmptyDataCollectionException(" in peek(); the list is empty.");
    }
    else{
        return head->data;
    }
}
