main:class.o lab2.o
	g++ -o main class.o lab2.o

class.o: class.h class.cpp
	g++ -c class.cpp class.h

lab2.o: lab2.cpp class.h
	g++ -c lab2.cpp class.h


