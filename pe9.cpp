/**
	Project Euler Problem 9: Special Pythagorean Triplet
 	pe9.cpp

	@author Evan May
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	long long int answer = 0;

	for (int a=1; a<=500; a++) {
		for (int b=1; b<=500; b++) {
			int c = 1000 - a - b;
			//cout<<"Current Triple: "<<a<<"  "<<b<<"  "<<c<<endl;
			
			if ((a*a) + (b*b) == (c*c)) {
				cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
				answer = a*b*c;
				break;
			}
		}
	}

	cout<<"Pythagorean Product: "<<answer<<endl;
	return answer;
}
