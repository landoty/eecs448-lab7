/**
*	@file main.cpp
*	@author Landen Doty
*	@date 2022.03.30
*/

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
  test5();
  test6();
  test7();
  test8();
  test9();
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
  std::string descr = "Single enqueued value is seen at front";
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

void TestQueue::test5()
{
  std::string descr = "First enqueued value seen at front";
  printTestMessage(descr);
  try
  {
    Queue q;
    for(int i=0; i<10; i++)
    {
      q.enqueue(i);
    }
    printBool(q.peekFront() == 0);
    toFile();
  }
  catch(std::exception& e)
  {
    printBool(0);
    printException();
    toFile();
  }
}

void TestQueue::test6()
{
  std::string descr = "Equal enqueue and dequeue leaves queue empty";
  printTestMessage(descr);
  try
  {
    Queue q;
    for(int i=0; i<10; i++)
    {
      q.enqueue(i);
    }
    for(int i=0; i<10; i++)
    {
      q.dequeue();
    }
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

void TestQueue::test7()
{
  std::string descr = "Cannot peek empty queue";
  printTestMessage(descr);
  try
  {
    Queue q;
    q.peekFront();
    //Should not be able to peek empty queue
    printBool(0);
    toFile();
  }
  catch(std::exception& e)
  {
    printBool(1);
    toFile();
  }
}

void TestQueue::test8()
{
  std::string descr = "Nth enqueued value seen after N-1 dequeues";
  printTestMessage(descr);
  try
  {
    Queue q;
    for(int i=0; i<=10; i++)
    {
      q.enqueue(i);
    }
    for(int i=0; i<=9; i++)
    {
      q.dequeue();
    }
    printBool(q.peekFront()==10);
    toFile();
  }
  catch(std::exception& e)
  {
    printBool(0);
    printException();
    toFile();
  }
}

void TestQueue::test9()
{
  std::string descr = "Destructor leaves queue empty";
  printTestMessage(descr);
  try
  {
    Queue q;
    for(int i=0; i<=10; i++)
    {
      q.enqueue(i);
    }
    q.~Queue();
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
