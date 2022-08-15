#include <iostream>
#include <cmath>

using namespace std;

int gcd( int x, int y);

int main()
{
    
   cout << gcd(9,8);
}

int gcd( int x, int y)
{
    x = x % (x - 1);
    gcd( x, y );
}