#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2);

int main()
{
    cout << fixed << setprecision(2) << distance (1.7, 2.6, 3.3, 4.4);
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt( pow( ( x1-x2 ), 2 )+pow( ( y1-y2 ), 2 ) );
}