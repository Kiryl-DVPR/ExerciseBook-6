#include <iostream>
using namespace std;

int simpleNumber(int);

int main()
{

    for (int number=1; number <= 50; ++number)
    {
        cout << simpleNumber( number ) << endl;
    }

}

int simpleNumber(int a)
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
        return a;
    }
    else
    {
        return 0;
    }
   
}