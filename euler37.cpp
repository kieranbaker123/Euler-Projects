// euler37.cpp
// Kieran Baker
//
//

#include <cmath>
#include <iostream>

using namespace std;

int p;
bool isitprime(int p);

int main() {
  cout << endl;
  int i;

  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;

  int QUACK;

  int D1;
  int D2;
  int D3;
  int D4;
  int D5;
  int D6;
  int D7;

  int z;
  int y;
  int x;
  int w;
  int v;
  int u;
  int t;

  int Z;
  int Y;
  int X;
  int W;
  int V;
  int U;
  int T;

  bool _67;
  bool aprime;
  bool _1;
  bool _2;
  bool _3;
  bool _4;
  bool _5;
  bool _6;
  bool _7;

  for (i = 10; i < 1000000; i++) {
    _67 = 0;
    _67 = isitprime(p = i);
    if (_67 == 1) {
      _1 = 0;
      _2 = 0;
      _3 = 0;
      _4 = 0;
      _5 = 0;
      _6 = 0;
      _7 = 0;

      D1 = i % 10;
      D2 = (i % 100 - D1) / 10;
      D3 = (i % 1000 - D1 - D2 * 10) / 100;
      D4 = (i % 10000 - D1 - D2 * 10 - D3 * 100) / 1000;
      D5 = (i % 100000 - D1 - D2 * 10 - D3 * 100 - D4 * 1000) / 10000;
      D6 = (i % 1000000 - D1 - D2 * 10 - D3 * 100 - D4 * 1000 - D5 * 10000) /
           100000;
      D7 = (i % 1000000 - D1 - D2 * 10 - D3 * 100 - D4 * 1000 - D5 * 10000 -
            D6 * 100000) /
           1000000;

      if (D7 != 0) {
        _1 = isitprime(p = D1);
        Z = D1 + D2 * 10;
        _2 = isitprime(p = Z);
        Y = Z + D3 * 100;
        _3 = isitprime(p = Y);
        X = Y + D4 * 1000;
        _4 = isitprime(p = X);
        W = X + D5 * 10000;
        _5 = isitprime(p = W);
        V = W + D6 * 100000;
        _6 = isitprime(p = V);
        U = V + D7 * 1000000;
        _7 = isitprime(p = U);
        if (_1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1 &&
            _7 == 1) {
          _1 = isitprime(p = D7);
          Z = D7 * 10 + D6;
          _2 = isitprime(p = Z);
          Y = Z * 10 + D5;
          _3 = isitprime(p = Y);
          X = Y * 10 + D4;
          _4 = isitprime(p = X);
          W = X * 10 + D3;
          _5 = isitprime(p = W);
          V = W * 10 + D2;
          _6 = isitprime(p = V);
          U = V * 10 + D1;
          _7 = isitprime(p = U);
          if (_1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1 &&
              _7 == 1) {
            cout << i << endl << endl;
            QUACK = QUACK + i;
          }
        } // if ( _1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1
          // && _7 == 1 )

      } // if ( D7 != 0 )

      if (D6 != 0 && D7 == 0) {
        _1 = isitprime(p = D1);
        Z = D1 + D2 * 10;
        _2 = isitprime(p = Z);
        Y = Z + D3 * 100;
        _3 = isitprime(p = Y);
        X = Y + D4 * 1000;
        _4 = isitprime(p = X);
        W = X + D5 * 10000;
        _5 = isitprime(p = W);
        V = W + D6 * 100000;
        _6 = isitprime(p = V);
        if (_1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1) {
          _2 = isitprime(p = D6);
          Y = D6 * 10 + D5;
          _3 = isitprime(p = Y);
          X = Y * 10 + D4;
          _4 = isitprime(p = X);
          W = X * 10 + D3;
          _5 = isitprime(p = W);
          V = W * 10 + D2;
          _6 = isitprime(p = V);
          U = V * 10 + D1;
          _7 = isitprime(p = U);
          if (_2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1 && _7 == 1) {
            cout << i << endl << endl;
            QUACK = QUACK + i;
          }
        } // if ( _1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1
          // && _7 == 1 )

      } // if ( D7 != 0 )

      if (D5 != 0 && D6 == 0 && D7 == 0) {
        _1 = isitprime(p = D1);
        Z = D1 + D2 * 10;
        _2 = isitprime(p = Z);
        Y = Z + D3 * 100;
        _3 = isitprime(p = Y);
        X = Y + D4 * 1000;
        _4 = isitprime(p = X);
        W = X + D5 * 10000;
        _5 = isitprime(p = W);
        if (_1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1) {
          _3 = isitprime(p = D5);
          X = D5 * 10 + D4;
          _4 = isitprime(p = X);
          W = X * 10 + D3;
          _5 = isitprime(p = W);
          V = W * 10 + D2;
          _6 = isitprime(p = V);
          U = V * 10 + D1;
          _7 = isitprime(p = U);
          if (_3 == 1 && _4 == 1 && _5 == 1 && _6 == 1 && _7 == 1) {
            cout << i << endl << endl;
            QUACK = QUACK + i;
          }
        } // if ( _1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1
          // && _7 == 1 )
      } // if ( D7 != 0 )
      if (D4 != 0 && D5 == 0 && D6 == 0 && D7 == 0) {
        _1 = isitprime(p = D1);
        Z = D1 + D2 * 10;
        _2 = isitprime(p = Z);
        Y = Z + D3 * 100;
        _3 = isitprime(p = Y);
        X = Y + D4 * 1000;
        _4 = isitprime(p = X);
        if (_1 == 1 && _2 == 1 && _3 == 1 && _4 == 1) {
          _4 = isitprime(p = D4);
          W = D4 * 10 + D3;
          _5 = isitprime(p = W);
          V = W * 10 + D2;
          _6 = isitprime(p = V);
          U = V * 10 + D1;
          _7 = isitprime(p = U);
          if (_4 == 1 && _5 == 1 && _6 == 1 && _7 == 1) {
            cout << i << endl << endl;
            QUACK = QUACK + i;
          }
        } // if ( _1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1
          // && _7 == 1 )
      } // if ( D7 != 0 )

      if (D3 != 0 && D4 == 0 && D5 == 0 && D6 == 0 && D7 == 0) {
        _1 = isitprime(p = D1);
        Z = D1 + D2 * 10;
        _2 = isitprime(p = Z);
        Y = Z + D3 * 100;
        _3 = isitprime(p = Y);
        if (_1 == 1 && _2 == 1 && _3 == 1) {
          _5 = isitprime(p = D3);
          V = D3 * 10 + D2;
          _6 = isitprime(p = V);
          U = V * 10 + D1;
          _7 = isitprime(p = U);
          if (_5 == 1 && _6 == 1 && _7 == 1) {
            cout << i << endl << endl;
            QUACK = QUACK + i;
          }
        } // if ( _1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1
          // && _7 == 1 )
      } // if ( D7 != 0 )

      if (D2 != 0 && D3 == 0 && D4 == 0 && D5 == 0 && D6 == 0 && D7 == 0) {
        _1 = isitprime(p = D1);
        Z = D1 + D2 * 10;
        _2 = isitprime(p = Z);
        if (_1 == 1 && _2 == 1) {
          _6 = isitprime(p = D2);
          U = D2 * 10 + D1;
          _7 = isitprime(p = U);
          if (_6 == 1 && _7 == 1) {
            cout << i << endl << endl;
            QUACK = QUACK + i;
          }
        } // if ( _1 == 1 && _2 == 1 && _3 == 1 && _4 == 1 && _5 == 1 && _6 == 1
          // && _7 == 1 )
      } // if ( D7 != 0 )
    } // if ( _67 == 1)
  } // for (i=10; i < 10000000; i++ )

  cout << endl << QUACK << endl << endl << endl;

  return 0;
}

bool isitprime(int p) {
  int b;
  int y;
  int x;
  int z;
  bool aprime;
  b = 1;
  y = b - 2;
  x = sqrt(p);
  aprime = 1;
  z = 1;
  if (p == 1) {
    return 0;
  }
  if (p == 0) {
    return 0;
  }
  if (p == 2) {
    return 1;
  }
  if (p == 3) {
    return 1;
  }
  if (p == 5) {
    return 1;
  }
  if (p == 7) {
    return 1;
  }
  while (x > y) {
    b = b + 1;
    y = b - 2;
    z = p % b;
    if (z == 0) {
      aprime = 0;
      break;
    }
  }
  if (aprime == 1) {
    return 1;
  }
  if (aprime == 0) {
    return 0;
  }
}
