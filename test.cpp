#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int x = 1'000'000;

    int *ptrY;

    ptrY = &x;

    cout << ptrY << endl;

    cout << *ptrY;
}
