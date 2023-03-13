#ifndef MOVE_H
#define MOVE_H

#include <algorithm> 
#include <string>
#include <vector>

// Abstract class move that we will later use to inherit child classes for different moves
class Move
{
    protected:
    // nothing needed here 
    public:
    // returns the name of a Move instance, for example "Ninja".
    std::string Name;

    // Vectors to hold what wins and loses against each win
    std::vector<std::string> wins;
    std::vector<std::string> loses;

    // getName function
    std::string getName();

    // virtual function that decides who wins
    // each move class has its own implementation
    bool winner(Move* move);
};

#endif