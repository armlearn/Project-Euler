#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;
long double fact(int num) {
  if (num <= 1) 
    return 1;
  else 
    return fact(num-1)*num;
}
int main() {
  int size = 20;
  cout << fixed << fact(2*size)/pow(fact(size), 2) << endl;
  return 0;
}