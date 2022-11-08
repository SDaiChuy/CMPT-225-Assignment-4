#include <iostream>
#include "UnableToInsertException.h"
#include "ElementDoesNotExistException.h"
#include "Queue.h"

using std::cout;
using std::endl;


int main(){
    Queue<ElementType> * intQueue = new Queue<ElementType>();

    cout <<"Testing 1 Enquque into queue" << endl;
    intQueue->enqueue(3);

    cout << "peek: " <<intQueue->peek();

    return 0;
}