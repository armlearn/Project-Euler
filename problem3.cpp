#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
	if (num == 2) return true;
	if (num < 2) return false;
	else {
		for (int i = 2; i <= round(sqrt(num)); i++) 
			if (num % i == 0)
				return false;
		return true;
	}
}
int main() {
	long num = 600851475143;
	for (int i = 2; i <= num; i++) 
		if (isPrime(i) && num % i == 0) {
			cout << i << endl;
			num = num / i;
		}
	return 0;
}