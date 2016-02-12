/**
	Project Euler Problem 1: Multiples of Three and Five
 	pe1.cpp

	@author Evan May
*/


#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	for (int i=0; i<1000; i++) {
		if (i%3 == 0 || i%5 == 0)
				sum+=i;
	}
	
	cout<<sum<<endl;
	return sum;
}
