// Inherited Class Paper from Move

#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey:public Move
{
    public:

    Monkey()
    {
        moveType = "Monkey";
        vector<string> wins = {""};
        vector<string> loses = {""};
    }
};

#endif