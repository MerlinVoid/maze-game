#include"GameEngine.h"
#include<cstdlib> //For rand() function, generates pseudorandom integer

GameEngine::GameEngine(int rows,int cols, int startRow, int startCol,bool w): m(rows,cols,rand()), p(startRow,startCol,10)
{   //Maze and Player objects are constructed before the GameEngine constructor body executes
    //Member initialiser(:) is used to construct Maze and Player objects, by calling their constructors

    won = w;  //Assigning w to won(private data member)

}

bool GameEngine::movePlayer(char direction){
    //Input char direction is W/A/S/D

    if(won)
        return false;  //Prevents further movement if player has already reached exit

    int r = p.getX();
    int c = p.getY();

    switch(direction)
    {
    case 'W':
        r--;    //W-->Move Up
        break;
    case 'S':
        r++;    //S-->Move Down   
        break;
    case 'A':
        c--;    //A-->Move Left
        break;
    case 'D':
        c++;    //D-->Move Right
        break;
    default:
        return false;  //Invalid Input
    }   
    
    if (!m.isWalkable(r,c))         //Checks whether the destination is inside the maze and is not a wall
        return false;

    p.setPosition(r,c);             //Updates the player's coordinates

    if (m.isExit(r,c))             //Checks whether player has reached exit after this move and updates won accordingly
        won = true;

    return true;                  //return true if move is valid and player's position is updated

}

bool GameEngine::hasWon() const{
    return won;     
}

const Maze& GameEngine::getMaze() const{
    return m;
}

const Player& GameEngine::getPlayer() const{
    return p;
}
