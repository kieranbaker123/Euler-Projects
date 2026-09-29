// euler39.cpp
// Kieran Baker
//
//

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  cout << endl << endl;
  int i;
  int n;

  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;

  int p;
  int QUACK = 0;

  for (p = 10; p <= 1000; p++) {
    c = ceil(p / 3);
    while (c < p) {
      c = c + 1;
      d = c * c;
      b = c / 2;
      a = 0;
      while (b < c && b > a) {
        b = b + 1;
        a = p - b - c;
        e = b * b;
        f = a * a;
        g = d - e - f;
        if (g == 0) {
          n = n + 1;
        }
      }
    }
    if (n >= QUACK) {
      QUACK = n;
      cout << QUACK << ":      " << p << endl;
    }
    n = 0;
  }
  return 0;
}
