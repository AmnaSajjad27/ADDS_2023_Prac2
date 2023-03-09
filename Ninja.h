// Inherited Class Paper from Move

#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja:public Move
{
    public:

    Ninja()
    {
        moveType = "Ninjs";
        vector<string> wins = {""};
        vector<string> loses = {""};
    }
};

#endif