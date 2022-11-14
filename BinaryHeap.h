/*
 * BinaryHeap.h
 * 
 * Description: Array-based Min Binary Heap
 *
 * Author: AL + SD
 * Date: Last modified: Nov. 2022
 */ 

 #ifndef BINARYHEAP_H
 #define BINARYHEAP_H

 #include "UnableToInsertException.h"
 #include "EmptyDataCollectionException.h"

 template <class ElementType>

 class BinaryHeap{
    private:
        // initialize the size of the binary heap
        unsigned int CAPACITY;
        // initialize the array for the binary heap
        ElementType* elements;
        // initialize the elementCount for the binary heap
        unsigned int elementCount;

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

    // Description: return the element count of the Binary Heap
    // Postconditions: The Binary Heap is unchanged 
    // Time Efficiency: O(1)
    bool isEmpty() const;

    // Description: Resize the binary heap array
    // Postconditions: The size of the binary heap is no double the original capacity
    // Time Efficiency: O(n)
    void resize();

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
    
    // Utility method
    // Description: Recursively put the array back into a MinBinaryHeap
    void reHeapDown(unsigned int indexOfRoot);

    // Description: Recursively put the array back into a MinBinaryHeap
    void reHeapUp(unsigned int indexOfRoot);
    
    /******* End of Binary Heap Public Interface *******/

 };
 #endif