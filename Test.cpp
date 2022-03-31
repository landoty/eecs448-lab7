/**
*	@file main.cpp
*	@author Landen Doty
*	@date 2022.03.30
*/

#include "Test.h"

Test::Test(int testSize, bool useFile)
{
  m_tests = testSize;
  m_useFile = useFile;
  m_currentTest = 0;
  m_currentTestMessage = "";
}

void Test::printBool(bool isPassed)
{
  if(isPassed)
  {
    std::cout << "PASSED\n";
    m_currentTestMessage = m_currentTestMessage + "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
    m_currentTestMessage = m_currentTestMessage + "FAILED\n";
  }
}
void Test::printTestMessage(std::string testMessage)
{
  m_currentTest++;
  std::cout << "Test #" << m_currentTest << ": " << testMessage << ": ";
  m_currentTestMessage = m_currentTestMessage + "Test #" + std::to_string(m_currentTest) + ": " + testMessage + ": ";
}

void Test::printException()
{
  std::cout << " Exception occurred\n";
  m_currentTestMessage = m_currentTestMessage + " Exception occurred\n";
}

void Test::toFile()
{
  if(m_useFile)
  {
    testFile.open("test.txt");
    testFile << m_currentTestMessage;
    testFile.close();
  }
}
