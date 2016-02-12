#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int largest = 0;
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
			}
		}
	}
	
	cout<<largest<<endl;
	return largest;
}
