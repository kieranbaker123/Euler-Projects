// euler5.cpp
// Kieran Baker
//
// smallest multiple of 1 - 20

#include<cmath>
#include<string>
#include<iostream>

using namespace std;
int a;
long int b = 2520;
int c;
int D1;
int D2;
int D3;
int D4;
int D5;
int D6;
int D7;
int D8;
int D9;
int D10;
int D11;
int D12;
int D13;
int D14;
int D15;
int D16;
int D17;
int D18;
int D19;
int D20;
int MEOW = 1;

int main()
{
	while ( MEOW != 0 )
		{
		D1 = b % 1;
		D2 = b % 2;
		D3 = b % 3;
                D4 = b % 4;
		D5 = b % 5;
                D6 = b % 6;
		D7 = b % 7;
                D8 = b % 8;
		D9 = b % 9;
                D10 = b % 10;
		D11 = b % 11;
                D12 = b % 12;
                D13 = b % 13;
                D14 = b % 14;
                D15 = b % 15;
                D16 = b % 16;
                D17 = b % 17;
                D18 = b % 18;
                D19 = b % 19;
		D20 = b % 20;
		cout << b << endl;
		MEOW = D1 + D2 + D3 + D4 + D5 + D6 + D7 + D8 + D9 + D10 + D11 + D12 + D13 + D14 + D15 + D16 + D17 + D18 + D19 + D20;
		b = b + ( 2520 );
		}

cout << endl << endl << b - 2520 << endl;

return 0;
}
