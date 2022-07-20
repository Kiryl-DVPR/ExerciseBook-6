#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << " n = random [1; 2] :" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        int n = (1 + rand()%2);
        cout << n << "  ";
    }
    
    cout << endl << " n = random [0; 9] :" << endl;

    for (int i = 0; i < 10; i++)
    {
        int n = (rand()%10);
        cout << n << "  ";
    }

    cout << endl << " n = random [1000; 1112] :" << endl;

    for (int i = 0; i < 10; i++)
    {
        int n = (1000 + rand()%113);
        cout << n << "  ";
         
    }

    cout << endl << " n = random [-1; 1] :" << endl;

    for (int i = 0; i < 10; i++)
    {
        int n = (-1 + rand()%3);
        cout << n << "  ";
         
    }
}