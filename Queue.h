/*
 * Queue.h
 * 
 * Description: This is a linked list-based implementation of a List ADT class.
 *              Its underlying data structure is an unsorted singly-headed singly-linked list (SHSL).
 *
 * Author: AL + SD
 * Date: Last modified: Nov. 2022
 */ 

 #ifndef QUEUE_H
 #define QUEUE_H
 
 //#include "Event.h"
 #include "UnableToInsertException.h"

 template <class ElementType>

 class Queue {
    
   private:
      class Node{

         public:
         ElementType data;
         Node *next;
         Node *prev;

      };
      Node<ElementType> *head; // rear of the queue
      Node<ElementType> *tail; // front of the queue
      int elementCount;

   public:

   // Constructors and Destructors

   // Default Constructor
   Queue();

   // Destructors
   ~Queue();

   /******* Start of Queue Public Interface *******/
		
   // Class Invariant:  FIFO or LILO order

   // Description: Returns true if this Queue is empty, otherwise false.
   // Postcondition: This Queue is unchanged by this operation.
   // Time Efficiency: O(1)
   bool isEmpty() const;
   
   // Description: Inserts newElement at the "back" of this Queue 
   //              (not necessarily the "back" of this Queue's data structure) 
   //              and returns true if successful, otherwise false.
   // Time Effeiciency: O(1)
   bool enqueue(ElementType & newElement);
   
   // Description: Removes (but does not return) the element at the "front" of this Queue 
   //              (not necessarily the "front" of this Queue's data structure).
   // Precondition: This Queue is not empty.
   // Exception: Throws EmptyDataCollectionException if this Queue is empty.   
   // Time Efficiency: O(1)
   void dequeue(); 

   // Description: Returns (but does not remove) the element at the "front" of this Queue
   //              (not necessarily the "front" of this Queue's data structure).
   // Precondition: This Queue is not empty.
   // Postcondition: This Queue is unchanged by this operation.
   // Exception: Throws EmptyDataCollectionException if this Queue is empty.
   // Time Efficiency: O(1)
   ElementType & peek() const;
 
/******* End of Queue Public Interface *******/


 };
 #endif