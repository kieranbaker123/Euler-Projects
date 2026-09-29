
// euler10.cpp
// Kieran Baker
//
// sum of all primes below 2 million
#include<cmath>
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int l = 2000000;
	int a;
	int n;
	int i;
	float SUM;
	bool isPrime;
	int b;

  			cout.setf(ios::fixed);
                        cout.unsetf(ios::scientific);
	for ( n = 2; n <= l; n++ )
		{
		isPrime = true;
        	for ( i = 2; i * i <= n; ++i )
 			{
			b = n % i;
            		if ( b == 0 )
				{
                		isPrime = false;
                		break;
           			}
        		}
        	if ( isPrime == 1 )
			{
			cout << n << endl;
			SUM = SUM + n;
			cout << "Sum: " << SUM << endl << endl;
			}
		}
	cout << endl;
    return 0;
}
