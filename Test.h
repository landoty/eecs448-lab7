#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>

class Test {
  public:
    Test(int testSize, bool useFile);
    virtual void runTests() = 0;
  private:
    int m_tests;
    int m_currentTest;
    bool m_useFile;
    std::ofstream testFile;
    std::string m_currentTestMessage;

    void printBool(bool isPassed) const;
    void printTestMessage(std::string testMessage);
    void printException();
    void toFile();
};

#endif
