QueueDemo: main.o Test.o TestQueue.o
	g++ -g -Wall -std=c++11 main.o Test.o Queue.o TestQueue.o -o QueueDemo

main.o: main.cpp Queue.h Node.h TestQueue.h
	g++ -g -std=c++11 -c main.cpp

TestQueue.o: TestQueue.h TestQueue.cpp Test.h
	g++ -g -Wall -std=c++11 -c TestQueue.cpp

Test.o: Test.h Test.cpp
	g++ -g -Wall -std=c++11 -c Test.cpp

clean:
	rm main.o Test.o TestQueue.o QueueDemo
