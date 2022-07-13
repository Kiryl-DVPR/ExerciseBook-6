#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int functFloor(float);

int main()
{
    float x;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number: ";
        cin >> x;
        cout << functFloor(x) << endl;
    }
     
}

int functFloor(float x)
{
    int y = floor(x + 0.5);
    return y;
}