#include <vector>
using namespace std;

vector<int> factor(long long int num) {
	vector<int> factors;
	for (int i=2; i <= num; ++i) {
		while (num % i == 0) {
			num /= i;
			factors.push_back(i);
		}
	}

	return factors;
}
