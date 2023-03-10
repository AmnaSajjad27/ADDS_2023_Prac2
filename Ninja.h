
#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja:public Move
{
    public:

    Ninja()
    {
        moveType = "Ninja";
        vector<std::string> wins = {"Pirate", "Zombie"};
        vector<std::string> loses = {"Monkey", "Robot"};
    }
};

#endif