// Inherited Class Scissor from Move

#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Scissors:public Move
{
    public:

    Scissors()
    {
        moveType = "Scissors";
        vector<string> wins = {"Paper"};
        vector<string> loses = {"Rock"};
    }
};

#endif