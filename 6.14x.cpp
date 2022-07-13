#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float roundToInteger( float );
float roundToTenths( float );
float roundToHundredths( float );
float roundToThousandths( float );

int main()
{
    float x;

    cout << "Enter number: ";
    cin >> x;
    cout << "RoundToInteger: "<< roundToInteger(x) << endl;
    cout << "RoundToTenths: "<< fixed << setprecision(1) << roundToTenths(x) << endl;
    cout << "RoundToHundredths: "<< fixed << setprecision(2) << roundToHundredths(x) << endl;
    cout << "RoundToThousandths: "<< fixed << setprecision(3) <<roundToThousandths(x) << endl;
}


float roundToInteger (float number)
{
    float y = floor(number + 0.5);
    return y;
}

float roundToTenths( float number )
{
    float y = (floor(number*10 + 0.5))/10;
    return y;
}
float roundToHundredths( float number )
{
    float y = (floor(number*100 + 0.5))/100;
    return y;
};
float roundToThousandths( float number )
{
    float y = floor(number*1000 + 0.5)/1000;
    return y;
};
