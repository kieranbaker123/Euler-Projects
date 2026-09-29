
// euler7g.cpp
// Kieran Baker
//
// find 10001th prime
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int l = 104800;
  int a = 1;
  int n;
  int i;
  bool isPrime;
  int b;

  for (n = 2; n <= l; n++) {
    isPrime = true;
    for (i = 2; i * i <= n; i++) {
      b = n % i;
      if (b == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime == 1) {
      cout << n << " is the " << a << "th prime." << endl;
      a = a + 1;
    }
  }
  cout << endl;
  return 0;
}
