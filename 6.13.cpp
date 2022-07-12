#include <iostream>
#include <math.h>
using namespace std;

int calculateCharges(float);

int main()
{
    float Hours; // Time

    cout << "car\t" << "Hours\t" << "Charge" << endl;

    for (int i = 1; i <= 3; i++)
    {
        cout << i <<"\t" ;
        cin >> Hours;
        cout << "\t" << calculateCharges(Hours) << endl;
    }
    

}

float calculateCharges(float Hours)
{
    if (Hours <= 3)
    {
        return 2;
    }
    
}