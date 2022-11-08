/* 
* BinaryHeap.cpp
*
* Description: Max Binary Heap ADT class.
*
* Class Invariant:  Always a Max Binary Heap.
* 
* Author: SD
* Last Modification: Nov. 2022
*
*/  

#include <iostream>
#include "BinaryHeap.h"  // Header file

using std::cout;
using std::endl;

// Default Constructor
template <class ElementType>
BinaryHeap<ElementType>::BinaryHeap(){

}

// Destructor
template <class ElementType>
BinaryHeap<ElementType>::~BinaryHeap(){
   elements = nullptr;
   elementCount = 0;
}


// Description: return the element count of the Binary Heap
template <class ElementType>
unsigned int BinaryHeap<ElementType>::getElementCount()const{
   return elementCount;
}

// Description: Insert an element into the Binary Heap, return true if successful
//              and false otherwise

template <class ElementType>
bool BinaryHeap<ElementType>::insert(ElementType & newElement){
   if(elementCount == 0){
      throw UnableToInsertException("insert() is unable to insert into the binary heap.");
   }

   return;
}

// Description: Removes (but does not return) the necessary element.
// Precondition: This Binary Heap is not empty.
// Exceptions: Throws EmptyDataCollectionException if this Binary Heap is empty.
// Time Efficiency: O(log2 n)
template <class ElementType>
void BinaryHeap<ElementType>::remove() {  

   if(elementCount == 0){
      throw EmptyDataCollectionException("remove() called with an empty binary heap.");
   }
      elements[0] = elements[elementCount - 1];
      elementCount--;
      reHeapDown(0);

      return;   
   }

template <class ElementType>
ElementType & BinaryHeap<ElementType>::retrieve() const{
   if(elementCount == 0){
      throw EmptyDataCollectionException(" retrieve() was called on an empty binary heap.")
   }
   
}


// Utility method
// Description: Recursively put the array back into a Max Binary Heap.
template <class ElementType>
void BinaryHeap<ElementType>::reHeapDown(unsigned int indexOfRoot) {

   unsigned int indexOfMinChild = indexOfRoot;

   // Find indices of children.
   unsigned int indexOfLeftChild = 2 * indexOfRoot + 1;
   unsigned int indexOfRightChild = 2 * indexOfRoot + 2;

   // Base case: elements[indexOfRoot] is a leaf as it has no children
   if (indexOfLeftChild > elementCount-1) return;

   // If we need to swap, select the smallest child
   // If (elements[indexOfRoot] > elements[indexOfLeftChild])
   if ( ! (elements[indexOfRoot] <= elements[indexOfLeftChild]) )
      indexOfMinChild = indexOfLeftChild;

   // Check if there is a right child, is it the smallest?
   if (indexOfRightChild < elementCount) {
      // if (elements[indexOfMinChild] > elements[indexOfRightChild])
      if ( ! (elements[indexOfMinChild] <= elements[indexOfRightChild]) )
         indexOfMinChild = indexOfRightChild;
   }

   // Swap parent with smallest of children.
   if (indexOfMinChild != indexOfRoot) {
      
      ElementType temp = elements[indexOfRoot];
      elements[indexOfRoot] = elements[indexOfMinChild];
      elements[indexOfMinChild] = temp;
      
      // Recursively put the array back into a heap
      reHeapDown(indexOfMinChild);
   }

   return;
} 
