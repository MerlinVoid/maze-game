#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<string>

using namespace std;

struct Position{
    int x;
    int y;
};

class Player{
    private:
        Position pos;
        int health;
        int movesCount;

    public:
        Player(int x,int y,int health);
        void setPosition(int x,int y);
        void reduceHealth(int health);
        void move(int deltaX,int deltaY);

        int getX() const;
        int getY() const;
        int getHealth() const;
        int getMovesCount() const;
};
#endif
