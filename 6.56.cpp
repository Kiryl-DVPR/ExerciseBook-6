#include <iostream>
#include <cstdlib>
#include <ctime>

int multiply();

int main()
{
    multiply();
}

int multiply()
{   
    srand( time(0));

    int a = rand()%9+1; 
    int b = rand()%9+1;
    int c = a*b;
    int d;

    std::cout << "Multiply " << a << " by " << b << " = ";
    std::cin >> d;
    if( d == c )
    {
        std::cout << " Very well ";
    }
        std::cout << " Incorrect. Try again ";
    
}