#include <cstdlib>
#include <iostream>
#include <vector>
#include "factor.cpp"

using namespace std;

int main() {
	vector<int> factors;
	for (int i=2; i<=20; i++) {
		vector<int> numfactors = factor(i); //factors of the number currently being looked at

		
		vector<int> tempfactors = factors;	
		
		//loop through both vectors of factors
		for (unsigned int j=0; j<numfactors.size(); j++) {
			bool notFound = true; //loop will end if the factor is found

			for (unsigned int k=0; k<tempfactors.size(); k++) {
				//check if the factor exists in the main set already

				if (numfactors.at(j) == tempfactors.at(k) && notFound) {
					//if it does, ignore it
					numfactors.at(j) = -1;
					tempfactors.at(k) = -1;
					notFound = false; //factor is found, end loop
				}
			}
		}
		
		//add all the non-bogus factors to the big set
		for (unsigned int l=0; l<numfactors.size(); l++){
			if (numfactors.at(l) != -1)
				factors.push_back(numfactors.at(l));
		}
	}

	//once done getting all the factors, multiply them
	long long int sum = 1;

	for (unsigned int m=0; m<factors.size(); m++) {
		sum *= factors.at(m);
	}

	cout<<"Least Common Multiple of 1-20: "<<sum<<endl;

	return sum;
}
