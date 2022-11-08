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

// Destructor
template <class ElementType>
PriorityQueue<ElementType>::~PriorityQueue(){
    return elementCount;
}

template <class ElementType>
bool PriorityQueue<ElementType>::isEmpty()const{
    return;
}

template <class ElementType>
bool PriorityQueue<ElementType>::enqueue(ElementType & newElement){
    return;
}

template <class ElementType>
void PriorityQueue<ElementType>::dequeue(){
    return;
}

template <class ElementType>
ElementType & PriorityQueue<ElementType>::peek()const{
    return;
}