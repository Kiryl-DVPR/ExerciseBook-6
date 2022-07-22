#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double hypotenuse(double, double);

int main()
{
    double a, b, c;

    cin >> a;
    cin >> b;

    cout << hypotenuse(a, b);
}

double hypotenuse(double a, double b)
{
    double c = sqrt( ( pow( a, 2 ) + pow( b, 2 ) ) );

    return c;
}