//Michael Lewis
//Assignment: Final
//Description: main


#include "Rtrap.h"
#include <iostream>

using namespace std;

int main()
{
    Maze RatRunner;
    RatRunner.mazeBuild();
    int success = 0;
    char I;
    cout << "help the rat to the cheese." << endl;
    while (success != 1)
    {
        cout << "Choose a direction for the rat to run:" << endl;
        cout << "u to go up." << endl;
        cout << "d to go down." << endl;
        cout << "l to go left." << endl;
        cout << "r to go right." << endl;
        cin >> I;
        
        if (I == 'U'||I =='u')
        {
            RatRunner.moveUp(success);
        }
        
       else if (I == 'D'||I =='d')
        {
            RatRunner.moveDown(success);
        }
       else if (I == 'L'||I =='l')
       {
           RatRunner.moveLeft(success);
       }
       else if (I == 'R'||I =='r')
       {
           RatRunner.moveRight(success);
       }

        
       else
       {
           cout << " Please choose a character from the above selection." << endl;
       }
        
        
    }
    cout << "Thank you for playing." << endl;
    return 0;
}