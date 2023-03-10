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
    // Each player has a name and its move
    std::string Name;
   // Move* Move;

    public:

    // set the name and move of the player 
    // void setName(std::string name); 
    Move* makeMove();

    // get the name and move of the player 
    std::string getName();

    // Destructor 
    ~Player();
};
#endif