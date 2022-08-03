#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int time(int, int, int);

int main()
{
    int h,m,s;

    cin >> h >> m >> s;

    cout << time(h, m, s);
}

int time(int h, int m, int s)
{
    if (h>12)
        {
            return (((h-12)*3600)+ m*60 + s );
        } 
    else
        {
            return h*3600+m*60+s;
        }; 
}