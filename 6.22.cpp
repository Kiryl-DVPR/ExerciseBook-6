#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

string square(int);

int main()
{
    int side;
    cin >> side;

    square(side);
}

string square(int side)
{
    for (int b = 0; b < side; b++)
    {
        for (int i = 0; i < side; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }

}