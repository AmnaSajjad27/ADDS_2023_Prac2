// Inherited Class Rock from Move

#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock:public Move
{
    public:

    Rock()
    {
        Name = "Rock";
        std::vector<string> wins = {"Paper"};
        std::vector<string> loses = {"Scissors"};
    }
};

#endif