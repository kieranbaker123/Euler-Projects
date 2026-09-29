
//euler12.cpp
// Kieran Baker
//
// sum of all primes below 2 million

#include<cmath>
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
long int x;
int i;
int y;
int z;
int n;
float c;

for ( i=1; i<20000; i++ )
	{
	cout << i << endl;
	x = x + i;
	n = 1;
	y = 0;
	c = x / 2;
		while ( y < c )
		{
		y = y + 1;
		z = x % y;
			if ( z == 0 )
			{
			n = n + 1;
			}
		}
	if ( n > 499 )
	{
	break;
	}
	}
cout << endl << endl << x << endl;

return 0;
}
