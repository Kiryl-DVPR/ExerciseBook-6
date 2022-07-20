#include <iostream>
#include <cstdlib>
using namespace std;

int integerPower(int, int);

int main()
{
    int base;
    cout << "Base: ";
    cin >> base;
    int exponent;
    cout << "Exponent: ";
    cin >> exponent;

    cout << base << "^" << exponent << "=" << integerPower(base, exponent);
}

int integerPower(int base, int exponent)
{
    int p = 1;

    for ( int i = 1; i <= exponent; i++)
    {
        p=p*base;
    }
    
    return p;
    
}