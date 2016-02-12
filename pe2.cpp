/**
	Project Euler Problem 2: Even Fibonacci Numbers
 	pe2.cpp

	@author Evan May
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int num=1;
	int lastnum=1;
	int temp = 0;
	int sum = 0;

	while (num < 4000000) {
		if (num%2 == 0)
			sum += num;

		temp = num;
		num += lastnum;
		lastnum = temp;
	}
	
	cout<<sum<<endl;
	return sum;
}
