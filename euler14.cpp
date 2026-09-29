// euler14.cpp
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

while ( x < 1000000 )
	{
	x = x + 1;
	c = x;
	n = 0;
		while ( c > 1 )
			{
			y = c % 2;
				if ( y == 0 )
				{
					c = c / 2;
					n = n + 1;
				}
				if ( y == 1 )
				{
					c = c * 3 + 1;
					n = n + 1;
				}
			}
	if ( n > QUACK )
	{
		QUACK = n;
		z = x;
		cout << endl << z;
	}
	}

cout << endl << endl << QUACK << endl << z << endl;
return 0;
}
