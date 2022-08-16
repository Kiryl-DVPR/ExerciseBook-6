#include <iostream>
using namespace std;

int gcd( int x, int y);
int gcdX(int x);
int gcdY(int y);

int main()
{
    cout << gcd(27,27);

}

int i=1, r=1;

int gcd( int x, int y)
{
    int xmax = gcdX(x);
    int ymax = gcdY(y);

    if( xmax > ymax )
    {
        return xmax;
    }
        return ymax;

    if( xmax == ymax )
    {
        return xmax;
    }
        

}

int gcdX(int x)
{
    if (x==0)
    {
        return 0;
    };

    if (x==1)
    {
        return 1;
    };
    
    int s = x % (x-r);
 
    r++;
 
    if(s==0)
    {
        int xmax = x-r+1;
        return xmax;
    }
    gcdX(x);
}

int gcdY(int y)
{
    if (y==0)
    {
        return 0;
    };

    if (y==1)
    {
        return 1;
    };
    
    int b = y % (y-i);
 
    i++;
 
    if(b==0)
    {
        int ymax = y-i+1;
        return ymax;
    }
    gcdY(y);
}