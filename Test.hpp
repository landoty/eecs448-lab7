#include "Test.h"

Test::Test(int testSize, bool useFile)
{
  m_tests = testSize;
  m_useFile = useFile;
  m_currentTest = 0;
  m_currentTestMessage = "";
}

void Test::printBool(bool isPassed) const
{
  if(isPassed)
  {
    std::cout << "PASSED\n";
    m_currentTestMessage.append("PASSED");
  }
  else
  {
    std::cout << "FAILED\n";
    m_currentTestMessage.append("FAILED");
  }
}
void Test::printTestMessage(std::string testMessage)
{
  m_currentTest++;
  std::cout << "Test #" << m_currentTest << ": " << testMessage << ": ";
  m_currentTestMessage.append("Test #");
  m_currentTestMessage.append(m_currentTest);
  m_currentTestMessage.append(": ");
  m_currentTestMessage.append(testMessage);
  m_currentTestMessage.append(": ");
}

void Test::printException() const
{
  std::cout << "Exception occurred\n";
  m_currentTestMessage.append("Exception occurred\n");
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
