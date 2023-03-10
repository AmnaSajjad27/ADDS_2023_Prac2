// Inherited class Computer 
#ifndef MOVE_H
#define MOVE_H

#include <iostream> 
#include <string>
#include <vector>

// Abstract class move that we will later use to inherit child classes for different moves

class Move
{

protected:
std::string moveType;
vector<string> wins;
vector<string> loses;

public:
// returns the name of a Move instance, for example "Ninja".
std::string getName();
virtual Move* winner() = 0;

// we need the following child classes; Rock, Paper, Scissors, Robot, Monkey, Pirate, Ninja, Zombie

};

// Destructor 
// ~Move();

#endif