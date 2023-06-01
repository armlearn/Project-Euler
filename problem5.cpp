#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  else return gcd(b, a%b);
}
int lcm(int a, int b) {
  return a*b/gcd(a, b);
}
int smallestMult(int a, int b) {
  int currentLCM = a;
  while (a < b) {
    currentLCM = lcm(currentLCM, a++);
  }
  return currentLCM;
}
int main() {
  cout << smallestMult(1, 20) << endl;
  return 0;
}