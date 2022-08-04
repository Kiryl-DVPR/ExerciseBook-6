#include <iostream>
using namespace std;

int prefer(int);

int main()
{
    
    for (int numb = 1; numb <= 10000; numb++)
    {
       
        if (prefer(numb)==numb)
        {
            cout << numb << " = " << "1" ; // Т.к. "1" всегда входит в целый делитель

            for (int i = 2; i < numb; i++)
            {
                if (numb%i==0)
                {
                    cout << "+" << i ;
                }
            }

            cout << endl;
        }
        
    }
    
}

int prefer(int numb)
{
    int i, sum=0;

    for (i=1; i < numb; i++)
        {
            if (numb%i==0)
            {
                sum=sum+i;
            };
        }

    return sum;
    
};