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
  unsigned long sum = 0;
  for (int i = 2; i < 2000000; i++) 
    if (isPrime(i))
      sum+=i;
  cout << sum << endl;
  return 0;
}