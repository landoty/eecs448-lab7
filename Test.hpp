#include "Test.h"

Test::Test(int testSize, bool useFile)
{
  TEST_SIZE = testSize;
  USE_FILE = useFile;
  m_currentTestMessage = "";
}

void Test::printBool(bool isPassed) const
{
  if(isPassed)
  {
    std::cout << "PASSED\n";
    m_currentTestMessage += "PASSED";
  }
  else
  {
    std::cout << "FAILED\n";
    m_currentTestMessage += "FAILED";
  }
}
void Test::printTestMessage(std::string testMessage)
{
  m_currentTest++;
  std::cout << "Test #" << m_currentTest << ": " << testMessage << ": ";
  m_currentTestMessage += "Test #";
  m_currentTestMessage += m_currentTest;
  m_currentTestMessage += ": ";
  m_currentTestMessage += testMessage;
  m_currentTestMessage += ": ";
}

void Test::printException() const
{
  std::cout << "Exception occurred\n";
  m_currentTestMessage += "Exception occurred\n";
}

void Test::toFile()
{
  if(USE_FILE)
  {
    testFile.open("test.txt");
    testFile << m_currentTestMessage;
    testFile.close();
  }
}
