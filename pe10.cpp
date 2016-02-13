/**
	Project Euler Problem 10: Summation of Primes 
 	pe10.cpp

	@author Evan May
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include "factor.cpp"

using namespace std;

int main() {
	long long int sum = 0;

	for (int i=2; i<2000000; i++) {
		if (i%10000 == 0) 
			cout<<"Progress: "<<i<<" out of 2000000.\n";
		if (i%2 == 1) {
			vector<int> factors = factor(i);
			if (factors.size() == 1)
				sum += i;
		}
	}

	sum += 2; //the loop ignores all even numbers even though 2's a prime, so add it now

	cout<<"Sum of primes: "<<sum<<endl;

	return sum;
}
