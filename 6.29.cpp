#include <iostream>
using namespace std;

void simpleNumber(int);

int main()
{

    for (int number=1; number <= 50; ++number)
    {
        simpleNumber( number );
    }

}

void simpleNumber(int a)
{
    int s=0;
 
    for(int i=2; i<=a; ++i)
    {
        if(a%i==0)
        {
            s = s + i;
        }
    }
 
    if(s<=a)
    {
        cout << a << endl;
    }
   
}