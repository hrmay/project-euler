all: threeandfive fib palindrome

threeandfive: threeandfive.cpp
	g++ -Wall -g -std=c++11 -o threeandfive threeandfive.cpp

fib: fib.cpp
	g++ -Wall -g -std=c++11 -o fib fib.cpp

palindrome: palindrome.cpp
	g++ -Wall -g -std=c++11 -o palindrome palindrome.cpp
