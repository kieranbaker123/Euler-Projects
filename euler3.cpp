// euler3.cpp
// Kieran Baker
//
// Find Largest prime factor

#include<cmath>
#include<string>
#include<iostream>

using namespace std;

int main()
{
int r;
int a = 2;
long int temp1 = 600851475143;

while ( temp1 != 1 )
{
r = 1;
	while ( r != 0 )
	{
	cout << endl << a << endl;
	a = a + 1;
	r = temp1 % a;
	}
	if ( r == 0 )
	{
	temp1 = temp1 / a;
	}
}
cout << endl << a << endl << endl;
return 0;
}

// correct
