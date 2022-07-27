#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int quotient(int, int);
int modul(int, int);

int main()
{
    int a, b=10;

    cin >> a;
    quotient(a, b);

    while (quotient(a, b) > 10)
    {
        cout << modul(a, b);

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