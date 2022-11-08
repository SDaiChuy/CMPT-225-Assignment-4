all: td

td: testQueue.o Queue.o ElementDoesNotExistException.o UnableToInsertException.o EmptyListException.o 
	g++ -Wall -o td testQueue.o Queue.o ElementDoesNotExistException.o UnableToInsertException.o EmptyListException.o 
testQueue.o: testQueue.cpp Queue.h 
	g++ -Wall -c testQueue.cpp
	
Queue.o: Queue.h Queue.cpp
	g++ -Wall -c Queue.cpp

ElementDoesNotExistException.o: ElementDoesNotExistException.h ElementDoesNotExistException.cpp
	g++ -Wall -c ElementDoesNotExistException.cpp

UnableToInsertException.o: UnableToInsertException.h UnableToInsertException.cpp
	g++ -Wall -c UnableToInsertException.cpp
		
EmptyListException.o: EmptyListException.h EmptyListException.cpp
	g++ -Wall -c EmptyListException.cpp
	
clean:
	rm -f td *.o
