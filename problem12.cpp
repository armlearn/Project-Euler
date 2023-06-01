#include <iostream>
#include <cmath>
using namespace std;

long get_divisors_cout(int num) {
  int count = 0;
  for (int i = 1; i < round(sqrt(num)); i++) {
    if (num % i == 0) {
      count+=2;
    }
  }
  return count;
}
int main() {
  int item = 0;
  int result = 0;
  for (int i = 1; true; i++) {
    item+=i;
    if (get_divisors_cout(item) > 500) {
      result = item;
      break;
    }
  }
  cout << result << endl;
  return 0;
}