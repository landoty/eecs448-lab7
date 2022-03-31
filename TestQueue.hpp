#include "TestQueue.h"

TestQueue::TestQueue(int testSize, bool useFile)
{
  TEST_SIZE = testSize;
  USE_FILE = useFile;
}
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
