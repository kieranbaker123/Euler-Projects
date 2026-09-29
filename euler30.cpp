// euler30.cpp
// Kieran Baker
//
//

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
int x;
int n;
int QUACK;
int y;
int z;
int c;
int D1;
int D2;
int D3;
int D4;
int D5;
int D6;
int m;
int g;
int l;
int o;
int p;
int h;
int i;
y = 0;

for ( i = 2; i < 1000000; i++ )
	{
	D1 = i % 10;
	D2 = ( i % 100 - D1 ) / 10;
	D3 = ( i % 1000 - D1 - D2 * 10 ) / 100;
	D4 = ( i % 10000 - D1 - D2 * 10 - D3 * 100 ) / 1000;
	D5 = ( i % 100000 - D1 - D2 * 10 - D3 * 100 - D4 * 1000 ) / 10000;
	D6 = ( i % 1000000 - D1 - D2 * 10 - D3 * 100 - D4 * 1000 - D5 * 10000 ) / 100000;

	m = pow(D1,5);
	g = pow(D2,5);
	l = pow(D3,5);
	o = pow(D4,5);
	p = pow(D5,5);
	h = pow(D6,5);

	x = m + g + l + o + p + h;

		if ( x == i )
		{
		n = n + 1;
		cout << endl << i << endl << n << endl;
		y = y + i;
		}
	}
cout << endl << endl << y << endl << endl;
return 0;
}
