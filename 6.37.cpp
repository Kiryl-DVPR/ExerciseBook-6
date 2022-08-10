#include <iostream>
#include <cmath>

using namespace std;

int fib( int );

int main()
{
    cout << fib(7);
}

int fib( int n )
{
    if((n == 0) || (n == 1))
    {
        return n;
    } 
    else
    {
        int n2;
        int n0 = 0;
        int n1 = 1;

        for (int i = 2; i <= n; i++)
        {
            n2 = n1 + n0;
            n0 = n1;
            n1 = n2;  
        }

        return n2;
        
    }

}