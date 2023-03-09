// Inherited class Computer 
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream> 


class Human: public Player
{
    public:
    Human();

    // get name 
    // override 
    Human(std::string setName);
    char makeMove();
};

#endif