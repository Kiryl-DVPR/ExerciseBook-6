#include <iostream>
#include <cstdlib>

using namespace std;

int randNumb();

int main()
{

int numb = randNumb();
int thinkNumb;
string YN;

cout << numb;
cout << "Hello!!! I'm thinking of a number from 1 to 10 \n" << "Enter numbers from 1 to 10: ";
cin >> thinkNumb;

if(thinkNumb==numb)
{
    cout << "Great!!! You guessed the number";
}

while (thinkNumb != numb)
{
    
        cout << "You enter the wrong number. Do you want to try again? Yes / No :";
        cin >> YN;

        if (YN == "Yes")
        {
            cout << "Enter numbers from 1 to 10: ";
            cin >> thinkNumb;

            if(thinkNumb==numb)
            {
                cout << "Great!!! You guessed the number";
            }
        }
        else
        {
            numb = thinkNumb;
            cout << "Game over";
        }
  
}
}

int randNumb()
{
    return (rand()%11);
}
