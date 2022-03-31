#ifndef TEST_QUEUE
#define TEST_QUEUE

#include <iostream>
#include "Queue.h"
#include "Test.h"

class TestQueue : public Test
{
  public:
    TestQueue(int testSize, bool useFile);
    void runTests();

    void test0(); //Create queue
    void test1(); //New queue is empty
    void test2(); //Can't dequeue empty queue
};
#endif
