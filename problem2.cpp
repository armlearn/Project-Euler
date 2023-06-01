#include <iostream>
using namespace std;
int main() {
	int a, b, c, sum;
	a = 0; 
	b = 1;
	sum = 0;
	while (c < 4000000) {
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0) sum+=c;
	}
	cout << sum << endl;

	return 0;
}