#include"Maze.h"
#include"Player.h"
#ifndef GAME_ENGINE
#define GAME_ENGINE

class GameEngine{
    private:
        Maze m;                //Stores Maze object constructed from Maze class(Class Composition)
        Player p;              //Stores Player object constructed from Player class(Class Composition)
        bool won;              //Tells whether player reached exit successfully or not
    public:
        GameEngine(int rows,int cols, int startRow, int startCol,bool w=false);   //Parameterised Constructor
        ~GameEngine() = default;         //default Destructor provided by compiler(no definition required)

        bool movePlayer(char direction);    //Checks if a move is valid and updates the player position accordingly
        bool hasWon() const;                //Checks whether player has reached exit

        const Maze& getMaze() const;        //Allows test driver to access maze for displaying
        const Player& getPlayer() const;    //Allows test driver to access player's position
};

#endif