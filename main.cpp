/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "TestQueue.h"
#include "Queue.h"

int main()
{
	TestQueue test(1, 1);
	test.runTests();

	return(0);
}
