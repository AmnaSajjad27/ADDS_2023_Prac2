// Inherited Class Paper from Move

#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate:public Move
{
    public:

    Pirate()
    {
        moveType = "Pirate";
        vector<std::string> wins = {"Robot", "Monkey"};
        vector<std::string> loses = {"Ninja", "Zombie"};
    }
};

#endif