// euler21.cpp
// Kieran Baker
//
//

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int x;
  int n;
  int QUACK;
  int y;
  int z;
  int c;
  int i;
  int j;
  int k;
  int a;
  int b;
  int r;
  int g;

  for (i = 0; i < 10000; i++) {
    a = (i / 2) + 1;
    x = 0;
    b = 0;
    while (x < a) {
      x = x + 1;
      z = i % x;
      if (z == 0) {
        b = b + x;
      }
    }
    y = 0;
    r = b / 2 + 1;
    c = 0;
    while (y < r) {
      y = y + 1;
      g = b % y;
      if (g == 0) {
        c = c + y;
      }
    }
    if (c == i && c >= b) {
      QUACK = QUACK + i;
    } else {
      cout << endl << c << "     " << i;
    }
  }
  cout << endl << endl << endl << QUACK << endl << endl << endl;
  return 0;
}
