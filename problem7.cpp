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
  int i = 0;
  int num = 0;
  while (i!=10001) {
    if (isPrime(++num)) 
      i+=1;
  }
  cout << num << endl;
  return 0;
}