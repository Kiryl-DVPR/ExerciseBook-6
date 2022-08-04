#include <iostream>

using namespace std;

float numberMin(float, float, float);

int main()
{

 float a=2.34,b=-3.45,c=1.14;
 
 cout << numberMin(a, b, c);

}

float numberMin(float a, float b, float c)
{
 if(a<b & a < c)
    {
        return a;
    }
 
    if(b<a & b<c)
        {
            return b;
        }
    else
        {
            return c;
        }
}