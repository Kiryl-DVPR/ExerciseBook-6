#include <iostream>
#include <cstdlib>
#include <ctime>
// Орёл или решка Heads or Tails
using namespace std;

int flip();

int main()
{
    int sumR=0;
    int sumO=0;
    for (int i = 1; i <= 100; i++)
    {
        flip();
        if (flip()==0)
        {
            cout << "Head" << endl;
            ++sumO;
        }
        else
        {
            cout << "Tail" << endl;
            ++sumR;
        }
        
    }

    cout << "Sum Head = "<< sumO << endl << "Sum Tail = " << sumR;
    
}

int flip()
{

    return (rand()%2);

}