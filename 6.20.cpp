#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

string multiple(int, int);

int main()
{
  for (int i = 0; i <= 5; i++)
  {
    int a, b;
  
    cin >> a;
    cin >> b;

    cout << multiple(a, b) << endl;

  }
  
}

string multiple(int a, int b)
{

    if (a%b==0)
    {
        return "True";
    }
        return "False";
    
}