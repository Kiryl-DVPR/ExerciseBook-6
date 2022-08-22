#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int tripleCallByValue(int);

int tripleByReference(int);

int main()
{  
    int count = 5;

    int &y = count;

    cout << tripleCallByValue(count);
    cout << tripleByReference(y);

}

int tripleCallByValue(int count)
{
    return count*3;
}

int tripleByReference(int y)
{
    return y*3;
}