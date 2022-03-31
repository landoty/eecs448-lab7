# EECS 448 Lab 7

For this lab, we were given a node-based implementation of the queue data structure, but only the compiled object file
and header file for Queue were provided.

We were required to implement various tests to validate the functionality of the provided queue implementation and identify
any bugs (provided in buglist.txt)

## Test class

The Test class (Test.h/cpp) provides an interface to be inherited for various testing purposes. This class will print
the success of each test and its description along with a message if exceptions were encountered. In addition, the Test
class also provides functionality to write to file if desired

## TestQueue class

The TestQueue class inherits from Test and implements each of the tests:

  0.  Create queue
  1.  New queue is empty
  2.  Can't dequeue empty queue
  3.  Enqueue makes queue non empty
  4.  Single enqueued value is seen at front
  5.  First enqueued value seen at front
  6.  Equal enqueue and dequeue leaves queue empty
  7.  Cannot peek empty queue
  8.  Nth enqueued value seen after N-1 dequeues
  9.  Destructor leaves queue empty

## Compilation and running

``sh
$ make
$ ./TestQueue
``
