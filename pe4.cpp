/**
	Project Euler Problem 4: Largest Palindrome Product
 	pe4.cpp

	@author Evan May
*/

#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int largest = 0;
	int num1 = 0;
	int num2 = 0;
	for (int i=100; i<999; i++) {
		for (int j=100; j<999; j++) {
			int k = i*j; //find product of the two numbers
			string num = to_string(k); //cast the product as a string
			string temp = num;
			reverse(num.begin(), num.end()); //reverse the string
			int number = stoi(num); //cast the reversed number as an int

			//check if the new number's a palindrome and larger than the old palindrome
			if (num == temp && number > largest)
			{
					largest = number;
					num1 = i;
					num2 = j;
			}
		}
	}
	
	cout<<"Num1: "<<num1<<"  Num2: "<<num2<<"  Product: "<<largest<<endl;
	return largest;
}
