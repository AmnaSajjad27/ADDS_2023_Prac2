// Inherited class Computer 
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "Move.h"
#include <iostream>
#include <string>

class Computer: public Player
{
    public:
    // default constructor 
    Computer();
    // makeMove function
    Move* makeMove();
    // getName function 
    std::string getName();
};

#endif