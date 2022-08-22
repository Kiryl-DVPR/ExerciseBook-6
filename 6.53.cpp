#include <iostream>
#include <cstdlib>
#include <ctime>

template < class T >
T min( T count1, T count2 )
{
    if (count1 < count2)
    {
        return count1;
    }
        return count2;
    
};

int main()
{
    int x = 5, y = 4;
    
    std::cout << min(x, y) << std::endl;

    double q = 5.57, z = 9.85;

    std::cout << min(q, z);
}
