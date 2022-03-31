/**
*	@file main.cpp
*	@author Landen Doty
*	@date 2022.03.30
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>

class Test {
  public:
    //Sets member variables
    Test(int testSize, bool useFile);
    //Runs tests
    virtual void runTests() = 0;
  protected:
    int m_tests;
    int m_currentTest;
    bool m_useFile;
    std::ofstream testFile;
    std::string m_currentTestMessage;

    //Prints PASSED or FAILED depending upon status
    void printBool(bool isPassed);
    //Prints full test message with number and description
    void printTestMessage(std::string testMessage);
    //Prints if exception is encountered
    void printException();
    //Stores test messages in file if requested by the user
    void toFile();
};

#endif
