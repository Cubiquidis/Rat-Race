//Michael Lewis
//Assignment: Final
// Description: functions

#include "Rtrap.h"

/*
 Author: Michael Lewis
 Description:maze boudaries
 Inputs:function
 Outputs:1's as boundaries
 */
Maze::Maze()
{
    mazeBuild();
    mazeRat.ratVertical = 1;
    mazeRat.ratHoriz = 1;
    visited[1][1].push_back(true);
}

/*
 Author: Michael Lewis
 Description:maze size
 Inputs:nothing
 Outputs: maze
 */
void Maze::mazeBuild()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mazeStruct[i][j] = "0";
            visited[i][j].push_back(false);
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mazeStruct[i][0] = mazeStruct[i][9] = mazeStruct[0][j] = mazeStruct[9][j] = "1";
        }
    }
    
    mazeStruct[2][6] = "1";
    mazeStruct[7][1] = "1";
    mazeStruct[8][3] = "1";
    mazeStruct[4][3] = "1";
    mazeStruct[3][6] = "1";
    mazeStruct[4][7] = "1";
    mazeStruct[3][2] = "1";
    mazeStruct[5][2] = "1";
    mazeStruct[6][4] = "1";
    
    mazeStruct[5][6] = "1";
    mazeStruct[5][7] = "1";
    mazeStruct[6][7] = "1";
    mazeStruct[7][4] = "1";
    mazeStruct[7][7] = "1";
    mazeStruct[1][4] = "1";
    mazeStruct[2][8] = "1";
    
    
}

/*
 Author: Michael Lewis
 Description:moves rat down one space
 Inputs:user input
 Outputs: one step
 */
void Maze::moveDown(int &Runner)
{
    mazeRat.ratVertical++;
    
    if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "1")
    {
        cout << "oops!, hit a wall!, let's try another way" << endl;
        mazeRat.ratVertical--;
    }
    else if (mazeRat.ratVertical == 8 && mazeRat.ratHoriz == 1)
    {
        cout << "golden DELICIOUSNESS, Nice Work!!" << endl;
        Runner++;
        return;
    }
    else
    {
        if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "*")
        {
            mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "-";
        }
        else
        {
            mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "*";
        }
        
    }
    clear();
}

/*
 Author: Michael Lewis
 Description:moves rat down one space
 Inputs:user input
 Outputs: one step
 */
void Maze::moveLeft(int &Runner)
{
    mazeRat.ratHoriz--;
    
    if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "1")
    {
        cout << "oops!, hit a wall!, let's try another way" << endl;
        mazeRat.ratHoriz++;
    }
    else if (mazeRat.ratVertical == 8 && mazeRat.ratHoriz == 1)
    {
        cout << "golden DELICIOUSNESS, Nice Work!!" << endl;
        Runner++;
        return;
    }
    else
    {
        
    if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "*")
    {
        mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "-";
    }
    else
    {
        
        mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "*";
    }
    
    clear();
}
}

/*
 Author: Michael Lewis
 Description:moves rat down one space
 Inputs:user input
 Outputs: one step
 */
void Maze::moveRight(int &Runner)
{
    mazeRat.ratHoriz++;
    
    if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "1")
    {
        cout << "oops!, hit a wall!, let's try another way" << endl;
        mazeRat.ratHoriz--;
    }
    else if (mazeRat.ratVertical == 8 && mazeRat.ratHoriz == 1)
    {
        cout << "golden DELICIOUSNESS, Nice Work!!" << endl;
        Runner++;
        return;
    }
    else
    {
        
    if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "*")
    {
        mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "-";
    }
    else
    {
        
        mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "*";
    }
        clear();
}
}

/*
 Author: Michael Lewis
 Description:moves rat down one space
 Inputs:user input
 Outputs: one step
 */
void Maze::moveUp(int &Runner)
{
    mazeRat.ratVertical--;
    
    if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "1")
    {
        cout << "oops!, hit a wall!, let's try another way" << endl;
        mazeRat.ratVertical++;
    }
    
    else if (mazeRat.ratVertical == 8 && mazeRat.ratHoriz == 1)
    {
        cout << "golden DELICIOUSNESS, Nice Work!!" << endl;
        Runner++;
        return;
    }
    else
    {
        
        if (mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] == "*")
        {
            mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "-";
            visited[mazeRat.ratVertical][mazeRat.ratHoriz].pop_back();
        }
        else
        {
            mazeStruct[mazeRat.ratVertical][mazeRat.ratHoriz] = "*";
            visited[mazeRat.ratVertical][mazeRat.ratHoriz].push_back(true);
        }
    }
    clear();
}

/*
 Author: Michael Lewis
 Description: outputs maze to screen
 Inputs: nothing
 Outputs: maze
 */
void Maze::printMaze()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << mazeStruct[i][j];
        }
        cout << endl;
    }
}

/*
 Author: Michael Lewis
 Description: clears screen
 Inputs: nothing
 Outputs: nothing
 */
void Maze::clear()
{
    system("CLS");
    printMaze();
}

