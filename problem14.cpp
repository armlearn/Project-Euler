#include <iostream>
using namespace std;
int getCountCollatz(int n) {
  int count = 1;
  long num = n;
  while (num != 1) {
    if (num % 2 == 0)
      num/=2;
    else 
      num = 3*num+1;
    count+=1;
  }
  return count;
}
int main() {
  int max_chain = 1;
  for (int i = 1; i < 1000000; i++) {
    if (getCountCollatz(max_chain) < getCountCollatz(i)) 
      max_chain = i;
  }
  cout << max_chain << endl;

  return 0;
}