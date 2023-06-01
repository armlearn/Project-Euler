#include <iostream>
#include <cmath>
using namespace std;
int sumOfSquare(int a, int b) {
  int sum = 0;
  for (int i = a; i <= b; i++) {
    sum+=pow(i, 2);
  }
  return sum;
}
float sqaureOfSum(float a, float b) {
  float sum = (a+b)/2*b;
  return pow(sum, 2);
}
int main() {
  long a = sqaureOfSum(1, 100)-sumOfSquare(1, 100);
  cout << a << endl;
  return 0;
}