// Inherited Class Scissor from Move

#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors:public Move
{
    public:

    Scissors()
    {
        moveType = "Scissors";
    }
};

#endif