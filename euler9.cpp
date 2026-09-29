// euler9.cpp
// Kieran Baker
//
// find pythagorean triplet which a + b + c = 1000

#include<cmath>
#include<string>
#include<iostream>

using namespace std;
int a;
int b;
int c;
int i;
bool p;
float x;
float y;
int z;

int main ()
{
for ( a = 0; a != 500; a++ )
	{
	b  = 0;
	for ( b = 0; b != 500; b++ )
		{
		x = sqrt( a * a + b * b );
		c = sqrt( a * a + b * b );
		z = a + b + c;
		y = x - c;
		if ( y == 0 && z == 1000)
			{
			cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl << endl;
			cout << endl << a * b * c << endl << endl;
			}
		}
	}
return 0;
}
