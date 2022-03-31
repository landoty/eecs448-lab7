QueueDemo: main.o Test.o TestQueue.o
	g++ -g -Wall -std=c++11 main.o TestQueue.o -o QueueDemo

main.o: main.cpp Queue.h Node.h TestQueue.h
	g++ -g -std=c++11 -c main.cpp

TestQueue.o: TestQueue.h TestQueue.hpp Test.h
	g++ -g -Wall -std=c++11 -c TestQueue.hpp

Test.o: Test.h Test.hpp
	g++ -g -Wall -std=c++11 -c Test.hpp

clean:
	rm main.o QueueDemo *.o
