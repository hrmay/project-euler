all: threeandfive fib primefactor palindrome factor.o

threeandfive: threeandfive.cpp
	g++ -Wall -g -std=c++11 -o threeandfive threeandfive.cpp

fib: fib.cpp
	g++ -Wall -g -std=c++11 -o fib fib.cpp

primefactor: primefactor.cpp
	g++ -Wall -g -std=c++11 -o primefactor primefactor.cpp
palindrome: palindrome.cpp
	g++ -Wall -g -std=c++11 -o palindrome palindrome.cpp

factor.o: factor.cpp
	g++ -Wall -g -std=c++11 -c factor.cpp
