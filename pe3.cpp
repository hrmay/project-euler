/**
	Project Euler Problem 3: Largest Prime Factor
 	pe3.cpp

	@author Evan May
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include "factor.cpp"

using namespace std;

int main() {
	long long int number = 600851475143;

	vector<int> factors = factor(number);

	int max = 0;
	for (unsigned int i=0; i<factors.size(); i++) {
		if (factors.at(i) > max)
				max = factors.at(i);
	}

	cout<<max<<endl;
	return max;
}
