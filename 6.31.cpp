#include <iostream>

using namespace std;

int ged(int, int);


int main()
{

    int a, b;
 
    cin >> a >> b;
 
    cout << ged(a, b);

}

int ged(int a, int b)
{
    int sa;
    int sb;
 
    for(int i = 1; i < a; i++)
    {
 
        if(a%i==0)
        {
            sa = i;
        };
  
    };
 
    for(int i = 1; i < b; i++)
    {
 
        if(b%i==0)
        {
            sb = i;
        };
  
    };

    if(sa==sb)
    {
        return sa;
    }
    {
        return 0;
    }

}