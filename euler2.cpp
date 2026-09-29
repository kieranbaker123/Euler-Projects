// euler2.cpp
// Kieran Baker
//
// find sum of even fibonacci numbers

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {

  int temp1 = 1;
  int temp2 = 1;
  int temp3;
  int i;
  int TOTAL;

  for (i = 0; i < 4000000; i++) {
    temp3 = temp2 + temp1;
    temp1 = temp2;
    temp2 = temp3;

    if (temp3 % 2 == 0) {
      TOTAL = TOTAL + temp3;
    }
    i = temp3;
  }

  cout << endl << "Result: " << TOTAL << endl;

  return 0;
}

// correct
