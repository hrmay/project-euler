/**
	Project Euler Problem 7: 10001st Prime
 	pe7.cpp

	@author Evan May
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include "factor.cpp"

using namespace std;

int main() {
	bool notDone = true;

	int num = 2; //the current number
	int numprime = 0; //which number prime it is

	while (notDone) {
		vector<int> factors = factor(num);

		//if there's only one factor (the number itself), it's a prime
		if (factors.size() == 1)
			numprime++;
		
		//if this is the 10001st prime, end the loop
		if (numprime == 10001)
			notDone = false;
		else
			num++;
	}

	cout<<"10001st Prime: "<<num<<endl;

	return num;
}
