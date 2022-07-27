#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void square(int, char);

int main()
{
    int side;
    char fillCharacter;

    cout << "Side: ";
    cin >> side;
    cout << "Character: ";
    cin >> fillCharacter;

    square(side, fillCharacter);
}

void square(int side, char fillCharacter)
{
    for (int b = 0; b < side; b++)
    {
        for (int i = 0; i < side; i++)
        {
            cout << fillCharacter << " ";
        }

        cout << endl;
    }

}
