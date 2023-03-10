// Inherited class Computer 
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "Move.h"
#include <iostream> 

class Computer: public Player
{
    public:
    Computer();
    Move* makeMove();
    std::string getName();
};

#endif