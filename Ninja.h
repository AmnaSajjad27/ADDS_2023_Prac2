
#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja:public Move
{
    public:

    Ninja()
    {
        moveType = "Ninja";
        vector<string> wins = {"Pirate", "Zombie"};
        vector<string> loses = {"Monkey", "Robot"};
    }
};

#endif