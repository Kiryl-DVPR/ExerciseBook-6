#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double);

int main()
{
    double Hours1, Hours2, Hours3; // Time

    cout << "You need to enter parking time (less 24 hour): " << endl;
    cin >> Hours1 >> Hours2 >> Hours3;

    cout << setw(8) << left << "Car" << setw(5) << right << "Hours" << setw(10) << "Charge" << endl;

    cout << setw(8) << left << "1" << setw(5) << right << Hours1 << setw(9) << fixed << setprecision(2) << calculateCharges(Hours1) << endl; 
    cout << setw(8) << left << "2" << setw(5) << right << fixed << setprecision(1) << Hours2 << setw(9) << fixed << setprecision(2) << calculateCharges(Hours2) << endl;
    cout << setw(8) << left << "3" << setw(5) << right << fixed << setprecision(1) << Hours3 << setw(9) << fixed << setprecision(2) << calculateCharges(Hours3) << endl;  

}

double calculateCharges(double Hours)
{   
    if (Hours <= 3 && Hours > 0)
    {
        return 2.0;
    };

    if (Hours > 3 && Hours <= 16)
    {
        return (2 + ceil(Hours-3)*0.5);
    };

    if (Hours == 0)
    {
        return 0.0;
    };

    if (Hours == 24)
    {
        return 10;
    };

}