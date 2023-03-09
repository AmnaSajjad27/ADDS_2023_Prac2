// Inherited class Computer 
#ifndef MOVE_H
#define MOVE_H

#include <iostream> 
#include <string>

// Abstract class move that we will later use to inherit child classes for different moves

class Move
{

protected:

public:
// returns the name of a Move instance, for example "Ninja".
std::string getName();

// we need the following child classes; Rock, Paper, Scissors, Robot, Monkey, Pirate, Ninja, Zombie

};

// Destructor 
~Move();

#endif