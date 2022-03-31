/**
*	@file main.cpp
*	@author Landen Doty
*	@date 2022.03.30
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
