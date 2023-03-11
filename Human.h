// Inherited class Computer 
#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "MoveFactory.h"
#include <iostream>
#include <string>

class Human: public Player
{
    private:
    MoveFactory inputHandler;

    public:
    Human();
    Human(std::string name);

    Move* makeMove();
    std::string getName();
};

#endif