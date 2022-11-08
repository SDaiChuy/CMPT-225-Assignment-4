/*
 * Queue.cpp
 * 
 * Description: This is a doubly headed doubly linked list-based implementation of a Queue ADT class.
 *              Its underlying data structure is an unsorted singly-headed singly-linked list (SHSL).
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
    if(head == nullptr){
        return true;
    }
    else{
        return false;
    }
 }
 
 //Inserts an element into the Rear of the Queue. 
 //Rear:[],[],[],[],[]:Front
 template <class ElementType>
 bool Queue<ElementType>::enqueue(ElementType & newElement){
    if(isEmpty()){
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
        return true;
    }
    return false;
 }
 
 //Removes an element from the front of the Queue.
 //Rear:[],[],[],[],[]:Front
 template <class ElementType>
 bool Queue<ElementType>::dequeue(){
    if(isEmpty()){
        throw EmptyDataCollectionException(" in dequee(); the list is empty.");
    }
    else{
        Node<ElementType> *toBeRemoved = tail;
        toBeRemoved->next = nullptr;
        tail = toBeRemoved->prev;
        elementCount--;
        return true; 
    }
    return false;
 }
 // Returns the element at the Rear of the Queue.
 //Rear:[],[],[],[],[]:Front 
 template <class ElementType>
 ElementType & Queue<ElementType>::peek()const{
    if(head == nullptr){
        throw EmptyDataCollectionException(" in peek(); the list is empty.");
    }
    else{
        return head->data;
    }
 }
