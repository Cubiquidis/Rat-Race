//Michael Lewis
//Assignment: Final
// Description: header

#ifndef Rtrap_hpp
#define Rtrap_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


struct Mouse
{
    int ratVertical;
    int ratHoriz;
};

struct Cheese
{
    int cheeserow = 8;
    int cheesecol = 1;
};

class Maze
{
private:
    Mouse mazeRat;
    Cheese mazeCheese;
    string mazeStruct[10][10];
    vector <bool> visited[10][10];
    
public:
    Maze();
    void mazeBuild();
    void moveLeft(int &Runner);
    void moveRight(int &Runner);
    void moveUp(int &Runner);
    void moveDown(int &Runner);

    void printMaze();
    void clear();
    
    
};

#endif /* Rtrap_hpp */
