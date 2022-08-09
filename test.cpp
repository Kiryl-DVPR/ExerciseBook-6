#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = nullptr;
    
    ptr = &array[0];

    cout << ptr[5];
}
