// Inherited Class Paper from Move

#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper:public Move
{
    public:

    Paper()
    {
        moveType = "Paper";
        vector<string> wins = {"Rock"};
        vector<string> loses = {"Scissors"};
    }
};

#endif