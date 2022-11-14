/* 
 * Queue.cpp
 *
 * Description: Array-based implementation of Queue as an ADT class
 * Class Invariant: Queue maintained in FIFO order
 *
 * Author: SD
 * Date: Nov. 2022
 */

#include "Queue.h"

using namespace std;

// Description: Default Queue constructor
// Postcondition: Creates an empty queue
template <class ElementType>
Queue<ElementType>::Queue()
{
    front = NULL;
    rear = NULL;
    elementCount = 0;
}

// Description: Destructor
// Postcondition: Deallocates all the memory used by the queue
template <class ElementType>
Queue<ElementType>::~Queue()
{
    while (!isEmpty())
        dequeue();
}

// Description: Returns true if this Queue is empty, otherwise false.
// Postcondition: This Queue is unchanged by this operation.
// Time Efficiency: O(1)
template <class ElementType>
bool Queue<ElementType>::isEmpty() const
{
    return (elementCount == 0);
}

// Description: Returns the number of elements in this Queue.
// Postcondition: This Queue is unchanged by this operation.
// Time Efficiency: O(1)
template <class ElementType>
int Queue<ElementType>::getElementCount() const
{
    return elementCount;
}

// Description: Inserts newElement at the "back" of this Queue
//              (not necessarily the "back" of this Queue's data structure)
//              and returns true if successful, otherwise false.
// Time Efficiency: O(1)
template <class ElementType>
bool Queue<ElementType>::enqueue(ElementType &newElement)
{
    Node<ElementType> *newNode = new Node<ElementType>(newElement);
    if (isEmpty())
    {
        front = newNode;
        rear = front;
    }
    else
    {
        rear->next = newNode;
        rear = rear->next;
    }
    elementCount++;
    return true;
}

// Description: Removes (but does not return) the element at the "front" of this Queue
//              (not necessarily the "front" of this Queue's data structure).
// Precondition: This Queue is not empty.
// Exception: Throws EmptyDataCollectionException if this Queue is empty.
// Time Efficiency: O(1)
template <class ElementType>
void Queue<ElementType>::dequeue()
{
    if (isEmpty())
        return;
    // throw EmptyDataCollectionException();
    Node<ElementType> *temp = front;
    front = front->next;
    delete temp;
    temp = NULL;
    elementCount--;
}

// Description: Returns (but does not remove) the element at the "front" of this Queue
//              (not necessarily the "front" of this Queue's data structure).
// Precondition: This Queue is not empty.
// Postcondition: This Queue is unchanged by this operation.
// Exception: Throws EmptyDataCollectionException if this Queue is empty.
// Time Efficiency: O(1)
template <class ElementType>
ElementType &Queue<ElementType>::peek() const
{
    // if (isEmpty())
    //     return NULL;
    // // throw EmptyDataCollectionException("peek() called with empty queue");
    return front->item;
}
