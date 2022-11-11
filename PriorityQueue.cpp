/*
* PriorityQueue.cpp
* 
* Description: Priority Queue implementation using the binary Heap class
*
* Author: AL + SD
* Date: Last modified: Nov. 2022
*/ 

#include "PriorityQueue.h"
#include <iostream>

using std::cout;
using std::endl;

// Constructor for the Queue
template <class ElementType>
PriorityQueue<ElementType>::PriorityQueue(){

}       

// Copy Constructor
template <class ElementType>
PriorityQueue<ElementType>::PriorityQueue(ElementType aTime){
    eventTime = aTime;
}

// Destructor
template <class ElementType>
PriorityQueue<ElementType>::~PriorityQueue(){
    eventTime = NULL;
    eventName = NULL;
}

template <class ElementType>
bool PriorityQueue<ElementType>::isEmpty()const{
    if(getElementCount(); == 0){
        return true;
    }
    else{
        return false;
    }
}

template <class ElementType>
bool PriorityQueue<ElementType>::enqueue(ElementType & newElement){
    if(getElementCount(); == 0){
        ElementType* newElements = new PriorityQueue(newElement);
    }
    if(newElements == nullptr){
        throw UnableToInsertException(" enqueue(); method for priority queue failed.");
        return false;
    }
    // call the function insert from Binary Heap    
    insert(newElements);
    return true;
}

template <class ElementType>
void PriorityQueue<ElementType>::dequeue(){
    if(getElementCount(); == 0){
        throw EmptyDataCollectionException(" dequeue(); method was called on an Empty data collection.");
    }

    // Call the function remove from Binary Heap
    remove();
    return;
}

template <class ElementType>
ElementType & PriorityQueue<ElementType>::peek()const{
    retrieve();
    return;
}