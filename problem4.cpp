#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string reverseString(string a) {
  reverse(a.begin(), a.end());
  return a;
}
int main() {
	int max = 0;
	for (int a = 100; a <= 999; a++) 
		for (int b = 100; b <= 999; b++)  
			if (to_string(a*b) == reverseString(to_string(a*b)) && max < a*b)
				max = a*b;
	cout << max << endl;
	return 0;
}