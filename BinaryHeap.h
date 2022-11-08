/*
 * 
 * 
 * Description: This is a doubly headed doubly linked list-based implementation of a List ADT class.
 *              Its underlying data structure is an unsorted singly-headed singly-linked list (SHSL).
 *
 * Author: AL + SD
 * Date: Last modified: Nov. 2022
 */ 

 #ifndef BINARYHEAP_H
 #define BINARYHEAP_H

 #include "UnableToInsertException.h"

 template <class ElementType>

 class BinaryHeap{
    private:
        class BSTNode{

            public:
            ElementType data;
            BSTNode* left;
            BSTNode* right;
        };

        int elementCount;

    public:

    //Constructors and Destructors

    //Default Constructor
    BinaryHeap();

    //Destructor
    ~BinaryHeap();

    /******* Start of Binary Heap  Public Interface *******/	

    // Description: Returns the number of elements in the Binary Heap.
    // Postcondition: The Binary Heap is unchanged by this operation.
    // Time Efficiency: O(1)
    unsigned int getElementCount() const;

    // Description: Inserts newElement into the Binary Heap. 
    //              It returns true if successful, otherwise false.      
    // Time Efficiency: O(log2 n)
    bool insert(ElementType & newElement);
        
    // Description: Removes (but does not return) the necessary element.
    // Precondition: This Binary Heap is not empty.
    // Exceptions: Throws EmptyDataCollectionException if this Binary Heap is empty.
    // Time Efficiency: O(log2 n)
    void remove();

    // Description: Retrieves (but does not remove) the necessary element.
    // Precondition: This Binary Heap is not empty.
    // Postcondition: This Binary Heap is unchanged.
    // Exceptions: Throws EmptyDataCollectionException if this Binary Heap is empty.
    // Time Efficiency: O(1) 
    ElementType & retrieve() const;
    
    /******* End of Binary Heap Public Interface *******/

 };
 #endif