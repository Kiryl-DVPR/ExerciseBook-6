#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int rollDice();

int main()
{   
    int bankBalance = 1000; // Начальный баланс
    int wager;
    cout << "Your balance: " << bankBalance << endl;
    cout << "Please enter wager: ";
    cin >> wager;

    while( wager > bankBalance )
    {
        cout << "Please enter correct wager: ";
        cin >> wager; 
    };

    while (bankBalance != 0)
    {      
        enum Status { CONTINUE, WON, LOST };

        int myPoint; 
        Status gameStatus;

        srand( time(0)); 

        int sumOfDice = rollDice(); // Первый бросок костей;

        switch ( sumOfDice)
        {
            case 7:
            case 11:
                gameStatus = WON;
            break;

            case 2:
            case 3:
            case 12:
                gameStatus = LOST;
                bankBalance = bankBalance - wager;
            break;
        
            default:
                gameStatus = CONTINUE;
                myPoint = sumOfDice;
                cout << "Point is " << myPoint << endl;
            break;
        }

        while ( gameStatus == CONTINUE )
        {
            sumOfDice = rollDice();

            if ( sumOfDice == myPoint )
            {
                gameStatus = WON;
            }
            else
            {
                if( sumOfDice == 7)
                    gameStatus = LOST;
            }
            
        }

        if( gameStatus == WON )
            cout << "Player wins. Your balance: " << (bankBalance = bankBalance + wager) << endl;
        else
            cout << "Player loses. Your balance: " << (bankBalance = bankBalance - wager) << endl; 

        
        cout << "Your balance: " << bankBalance << endl;

        if ( bankBalance == 0)
        {
            return 0;
        }
        cout << "Please enter wager: ";
        cin >> wager;

        while( wager > bankBalance )
            {
                cout << "Please enter correct wager: ";
                cin >> wager; 
            }
    }
}

int rollDice()
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;

    int sum = die1 + die2;

    cout << "Player rolled: " << die1 << " + " << die2 << " = " << sum << endl;

    return sum;
}

