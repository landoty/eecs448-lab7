#include "TestQueue.h"

TestQueue::TestQueue(int testSize, bool useFile): Test(testSize, useFile)
{}

void TestQueue::runTests()
{
  test0();
}

void TestQueue::test0()
{
  try
  {
    Queue q;
    printTestMessage("Created queue");
    printBool(1);
    toFile();
  }
  catch(std::exception& e)
  {
    printTestMessage("Created queue");
    printBool(0);
    printException();
    toFile();
  }
}
