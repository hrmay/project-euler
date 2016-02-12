/**
	Project Euler Problem 6: Sum Square Difference
 	pe6.cpp

	@author Evan May
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int squaresum = 0; //square each then sum
	int sumsquare = 0; //sum all then square
	for (int i=1; i<=100; i++) {
		squaresum += i*i;
		sumsquare += i;
	}

	sumsquare *= sumsquare;

	cout<<"Difference between sumsquare and squaresum: "<<sumsquare-squaresum<<endl;

	return sumsquare-squaresum;
}
