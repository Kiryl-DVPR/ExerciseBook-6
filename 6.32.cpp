#include <iostream>

using namespace std;

int qualityPoints(int);

int main()
{

    int a;
 
    cin >> a;
 
    cout << qualityPoints(a);

}

int qualityPoints(int a)
{
    if(a<=100 & a >= 90)
    {
        return 0;
    }
 
    if(a<=89 & a>= 80)
    {
        return 3;
    }
 
    if(a<=79&a>=70)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}