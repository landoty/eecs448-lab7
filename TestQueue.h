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
    void test3(); //Enqueue makes queue non empty
    void test4(); //Single enqueued value is seen at front
    void test5(); //First enqueued value not seen at front
};
#endif
