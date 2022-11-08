/*
 * Queue.cpp
 * 
 * Description: This is a linked list-based implementation of a Queue ADT class.
 *              Its underlying data structure is an unsorted singly-headed singly-linked list (SHSL).
 *
 * Author: AL
 * Date: Last modified: Nov. 2022
 */ 
 #include "Queue.h"
 #include <iostream>

using std::cout;
using std::endl;

 template <class ElementType>

 //Constructor for the Queue
 Queue<ElementType>::Queue(){
    
 }

 //Destructor for the Queue
 Queue<ElementType>::~Queue(){
    head = nullptr; // rear ofthe queue
    tail = nullptr; // front of the queue
    elementCount = 0;
 }
 
 //Checks to see if the Queue is empty

 Queue<ElementType>::isEmpty() const{
    if(head == nullptr){
        return true;
    }
    else{
        return false;
    }
 }
 
 //Inserts an element into the Rear of the Queue. 
 //Rear:[],[],[],[],[]:Front
 Queue<ElementType>::enqueue(ElementType & newElement){
    if(elementCount == 0){
        Node<ElementType>* newNode = new Node<ElementType>();
    }
    if(newNode == nullptr){
        throw UnableToInsertExpection(" in enqueue(); new failedm newNode cannot be allocated heap memory.");
    }
    else{
        newNode->data = newElement;
        newNode->next = head;
        head = newNode;
        elementCount++;
    }
    return;
 }
 
 //Removes an element from the front of the Queue.
 //Rear:[],[],[],[],[]:Front

 Queue<ElementType>::dequeue(){
    if(head = nullptr){
        throw EmptyDataCollectionException(" in dequee(); the list is empty.");
    }
    Node<ElementType> *toBeRemoved;
    toBeRemoved = tail;
    toBeRemoved->next = nullptr;
    tail = toBeRemoved->prev;
    elementCount--;
    return;
 }
 // Returns the element at the Rear of the Queue.
 //Rear:[],[],[],[],[]:Front 

 Queue<ElementType>::peek()const{
    if(head == nullptr){
        throw EmptyDataCollectionException(" in peek(); the list is empty.");
    }
    else{
        return head->data;
    }
 }
