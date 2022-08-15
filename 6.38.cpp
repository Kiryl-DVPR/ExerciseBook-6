#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int f, int l, int m);

int main()
{
    hanoi( 3, 1, 3, 2 );

}

void hanoi( int n, int start, int finish, int transit )
{
    if(n == 1)
    {
        cout << start << " -> " << finish << endl;
    }

    if(n > 1)
    {
        hanoi( n-1, start, transit, finish) ;

        cout << start << " -> " << finish << endl;

        hanoi( n-1, transit, finish, start );
    }
}


  