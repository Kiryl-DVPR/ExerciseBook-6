#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int quotient(int, int);
int modul(int, int);

int main()
{
    int a, b, c, d=1, q;
    
    cin >> a;

    c = a;

    while (q > 9) // Определяем разрядность
    {
        quotient(c, d);
        d=d*10;
        q=quotient(c, d);
    }
    
    b = d;

    while(b!=0)
    {
        cout << quotient(a, b) << " ";
        a = modul(a, b);
        b=b/10;
    }
    
}

int quotient(int a, int b)
{
    
    return (a/b);
}

int modul(int a, int b)
{
    return a%b;
}