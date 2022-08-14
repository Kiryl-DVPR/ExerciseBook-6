#include <iostream>
#include <cmath>

using namespace std;

int funct( int, int, int, int );

int main()
{
    funct( 3, 1, 3, 2 );

}

int funct(int n, int start, int finish, int transit)
{
    cout << start << " -> " << transit << endl;

    if ( n == 1)
    {
        cout << start << " -> " << finish << endl;
        return 0;
    }
      
    return funct( n-1, start, finish, transit );

}


  