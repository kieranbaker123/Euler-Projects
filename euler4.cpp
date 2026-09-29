// euler4.cpp
// Kieran Baker
//
// Find largest product of 2 three digit numbers that is palendromic

#include<cmath>
#include<string>
#include<iostream>

using namespace std;
int a;
int b;
int c;
int D1;
int D2;
int D3;
int D4;
int D5;
int D6;
int u;
int v;
int w;
int x;
int y;
int grob;
int glob;
int MEOW = 1;

int main()
{


for ( a = 100; a <= 999; a++ )
	{
	for ( b = 100; b <= 999; b++ )
		{
		c = a * b;
		u = c % 10;
		v = c % 100;
		w = c % 1000;
		x = c % 10000;
		y = c % 100000;

		D1 = u;
		D2 = ( v - u ) / 10;
		D3 = ( w - v ) / 100;
		D4 = ( x - w ) / 1000;
		D5 = ( y - x ) / 10000;
		D6 = ( c - y ) / 100000;

		if ( D6 == D1 && D2 == D5 && D3 == D4 )
		{
		cout << endl << c;
			if ( c > MEOW )
			{
			MEOW = c;
			grob = a;
			glob = b;
			}
		}
		}
	}

cout << endl << endl << MEOW << endl;
cout << glob << " * " << grob << endl;
return 0;
}
