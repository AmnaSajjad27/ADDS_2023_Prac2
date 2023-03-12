#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "MoveFactory.h"

#include <iostream>
#include <string>

class Human: public Player
{
    private:
    // handles the input in the movefactory class when creating an instance of the move type
    MoveFactory inputHandler;

    public:
    Human();
    Human(std::string name);

    Move* makeMove();
    std::string getName();
};

#endif