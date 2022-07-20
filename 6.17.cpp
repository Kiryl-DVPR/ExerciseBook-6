#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Random for numbers: [2,4,6,8,10] : " << endl;

    for (int i = 0; i < 20; i++)
    {
        int n = 1+rand()%10;
        if (n%2==0)
        {
            cout << n << "  ";
        }
        
    }

    cout << endl << "Random for numbers: [3,5,7,9,11] : " << endl;

    for (int i = 0; i < 20; i++)
    {
        int n = 3+rand()%9;
        if (n%2!=0)
        {
            cout << n << "  ";
        }
        
    }
    
    
}