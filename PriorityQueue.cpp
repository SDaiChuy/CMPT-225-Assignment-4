/*
* PriorityQueue.cpp
* 
* Description: Priority Queue implementation using the binary Heap class
*
* Author: AL + SD
* Date: Last modified: Nov. 2022
*/ 

#include "PriorityQueue.h"
#include "BinaryHeap.cpp"
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
    heap.~BinaryHeap();
}

// Description: Returns true if this Priority Queue is empty, otherwise false.
// Postcondition: This Priority Queue is unchanged by this operation.
// Time Efficiency: O(1)
template <class ElementType>
bool PriorityQueue<ElementType>::isEmpty()const{
    return heap.isEmpty();
}
// Description: Returns the number of elements in the Priority Queue.
// Postcondition: The Priority Queue is unchanged by this operation.
// Time Efficiency: O(1)
template <class ElementType>
unsigned int PriorityQueue<ElementType>::getElementCount()const{
    return heap.getElementCount();
}

// Description: Inserts newElement in this Priority Queue and 
//              returns true if successful, otherwise false.
// Time Efficiency: O(log2 n)
template <class ElementType>
bool PriorityQueue<ElementType>::enqueue(ElementType & newElement){
    bool inserted = heap.insert(newElement);
    return inserted;
}

// Description: Removes (but does not return) the element with the next
//              "highest" priority value from the Priority Queue.
// Precondition: This Priority Queue is not empty.
// Exception: Throws EmptyDataCollectionException if Priority Queue is empty.
// Time Efficiency: O(log2 n)
template <class ElementType>
void PriorityQueue<ElementType>::dequeue(){
    if(heap.isEmpty()){
        throw EmptyDataCollectionException(" dequeue(); was called on empty Priority Queue.");
    }
    else{
        heap.remove();
    }
}

// Description: Returns (but does not remove) the element with the next 
//              "highest" priority from the Priority Queue.
// Precondition: This Priority Queue is not empty.
// Postcondition: This Priority Queue is unchanged by this operation.
// Exception: Throws EmptyDataCollectionException if this Priority Queue is empty.
// Time Efficiency: O(1)
template <class ElementType>
ElementType & PriorityQueue<ElementType>::peek()const{
    if(heap.isEmpty()){
        throw EmptyDataCollectionException(" peek(); was called on empty Priority Queue.");
    }
    else{
        return heap.retrieve();
    }
}