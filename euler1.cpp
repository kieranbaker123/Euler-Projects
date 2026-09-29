// euler1.cpp
// Kieran Baker
//
// find multiples of 3 or 5 below a number

#include<cmath>
#include<string>
#include<iostream>

using namespace std;

int main()
{

int N = 1000;
int MULT3;
int MULT5;
int MULT15;

MULT3 = 3 + ( 6 + 999 ) * 332 / 2;

MULT5 = ( 995 + 0 ) * 100;

MULT15 = 1005 * 33;

cout << endl << "ANSWER: " << MULT3 + MULT5 - MULT15 << endl;

return 0;
}



// correct
