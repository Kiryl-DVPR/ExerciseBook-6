#include <iostream>
#include <cmath>

using namespace std;

int power( int, int);

int main()
{

    int base=4;
    int exponent=3;

    cout << base << " exp " << exponent << " = " << power(base, exponent);

};

int power (int base, int exponent)
{
    int expbase = base * base;
    int sum = expbase * base;

    if (exponent <= 1)
    {
        return sum;
    }

    exponent = exponent-2;
    return pow(sum, exponent);
    
}