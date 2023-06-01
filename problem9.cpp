#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long product = 0;
  for (int a = 2; a <= 1000; a++) 
    for (int b = 2; b <= 500; b++) 
      if (pow(a+b-1000, 2) == pow(a, 2)+pow(b, 2))  {
        product = a*b*abs(a+b-1000);
        goto jump;
      }
  jump:
    cout << product << endl;
  return 0;
}