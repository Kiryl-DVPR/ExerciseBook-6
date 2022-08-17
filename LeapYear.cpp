#include <iostream>
#include <string>

using namespace std;

string year(int year);

int main()
{

    int a;
  
    cout <<"Enter year: ";   
    cin >> a;
    cout << year(a);

}

string year( int year )
{
    if(year%400==0)
    {
        return "It's a leap year";
    }

    if(year%100==0)
    {
        return "It's not a leap year";
    }
    if(year%4 == 0)
    {
        return "It's a leap year";
    }
    else
    {
        return "It's not a leap year";
    }

}