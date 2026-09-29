// euler6.cpp
// Kieran Baker
//
// difference of sum of squares and square of sums

#include <cmath>
#include <iostream>
#include <string>

using namespace std;
long int a = 0;
long int b;
long int c = 0;
int i;

int main() {
  for (i = 1; i < 101; i++) {
    a = a + i;
    c = c + pow(i, 2);
  }
  b = pow(a, 2);

  cout << endl << endl << b << endl << c << endl << endl;
  cout << b - c << endl << i;

  return 0;
}
