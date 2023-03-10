// Inherited class Computer 
#ifndef MOVE_H
#define MOVE_H

#include <algorithm> 
#include <string>
#include <vector>

using namespace std:

// Abstract class move that we will later use to inherit child classes for different moves

class Move
{

protected:

public:

    // returns the name of a Move instance, for example "Ninja".
    vector<string> wins;
    vector<string> loses;

    string getName();
    // virtual function
    bool winner(Move* move);
    Move();
    
};

#endif