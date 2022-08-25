#include <iostream>
#include <cstdlib>
#include <ctime>

int multiply();

int main()
{    
    int i = 1;

    while ( i )
    {
        int Multiply = multiply();

        int MyMultiply;
        std :: cin >> MyMultiply;

        if ( MyMultiply == Multiply && i != 3 )
        {
            std::cout << "Very well!!! " << std::endl;
        }
        else
        {   
            while ( MyMultiply != Multiply )
            {   
                if(++i > 3)
                {
                    break;
                };
              
                std::cout << "Incorrect. Try again: ";
                std::cin >> MyMultiply;  

                if ( MyMultiply == Multiply && i != 3)
                {
                    std::cout << "Very well!!! " << std::endl;
                };

            }
            
        }

        if (i > 2)
        {
            std::cout << "You are loose";
            break;
        }
        
    }
}

int multiply()
{   
    srand( time(0));

    int a = rand()%9 + 1; 
    int b = rand()%9 + 1;
    
    std::cout << "Multiply " << a << " by " << b << " = ";     

    return a*b;    
}
