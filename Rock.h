// Inherited Class Rock from Move

#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock:public Move
{
    public:

    Rock()
    {
        moveType = "Rock";
        vector<string> wins = {"Paper"};
        vector<string> loses = {"Scissors"};
    }
};

#endif