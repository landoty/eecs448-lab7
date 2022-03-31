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

    bool test0();
}
#endif
