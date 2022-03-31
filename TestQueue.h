/**
*	@file main.cpp
*	@author Landen Doty
*	@date 2022.03.30
*/

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
    void test5(); //First enqueued value seen at front
    void test6(); //Equal enqueue and dequeue leaves queue empty
    void test7(); //Cannot peek empty queue
    void test8(); //Nth enqueued value seen after N-1 dequeues
    void test9(); //Destructor leaves queue empty
};
#endif
