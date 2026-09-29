// euler223.cpp
// Kieran baker
//
// 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long long int a;
	long long int b;
	long long int x;
	long long int y;
	long long int z;
	long long int xy;
	long long int abc;
	long long int ABC;
	long long int p;

	long long int n = 0;

	for ( a = 1; a < 12500000; a++ )
	{
		x = a * a;
		if ( a % 1000 == 0 )
		{
			cout << a << endl;
		}
		for ( b = 1; b <= a; b++ )
		{
			y = b * b;
			xy = x + y - 1;
			abc = sqrt(xy);
			ABC = abc * abc;
			if ( ABC == xy )
			{
				p = a + b + abc;
				if ( p <= 25000000 )
				{
					n = n + 1;
				}
			}
		}
	}
return 0;
}
