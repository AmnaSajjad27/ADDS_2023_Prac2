// collabrated with Andy Le

#ifndef PLAYER_H
#define PLAYER_H

// Abstract class player 
#include <iostream> 
#include <string>

#include "Move.h"

class Player
{
    protected:
    // Name
    std::string Name;

    public:
    // Move of the player 
    virtual Move* makeMove() = 0;

    // get the name and move of the player 
    std::string getName();

    // Destructor 
    ~Player();
};
#endif