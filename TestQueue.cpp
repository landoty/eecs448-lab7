#include "TestQueue.h"

TestQueue::TestQueue(int testSize, bool useFile): Test(testSize, useFile)
{}

void TestQueue::runTests()
{
  test0();
  test1();
  test2();
  test3();
  test4();
}

void TestQueue::test0()
{
  std::string descr = "Created queue";
  printTestMessage(descr);
  try
  {
    Queue q;
    printBool(1);
    toFile();
  }
  catch(std::exception& e)
  {
    printBool(0);
    printException();
    toFile();
  }
}

void TestQueue::test1()
{
  std::string descr = "New queue is empty";
  printTestMessage(descr);
  try
  {
    Queue q;
    printBool(q.isEmpty());
    toFile();
  }
  catch(std::exception& e)
  {
    printBool(0);
    printException();
    toFile();
  }
}

void TestQueue::test2()
{
  std::string descr = "Cannot dequeue empty queue";
  printTestMessage(descr);
  try
  {
    Queue q;
    q.dequeue();
    //Should not be able to dequeue
    printBool(0);
    toFile();
  }
  catch(std::exception& e)
  {
    //Dequeue should throw exception if attempted on empty queue
    printBool(1);
    toFile();
  }
}

void TestQueue::test3()
{
  std::string descr = "Enqueue makes queue non-empty";
  printTestMessage(descr);
  try
  {
    Queue q;
    q.enqueue(1);
    printBool(!q.isEmpty());
    toFile();
  }
  catch(std::exception& e)
  {
    printBool(0);
    printException();
    toFile();
  }
}

void TestQueue::test4()
{
  std::string descr = "Enqueued value is seen at front";
  printTestMessage(descr);
  try
  {
    Queue q;
    q.enqueue(1);
    printBool(q.peekFront() == 1);
    toFile();
  }
  catch(std::exception& e)
  {
    printBool(0);
    printException();
    toFile();
  }
}
