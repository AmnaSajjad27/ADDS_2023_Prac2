#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "zombie.h"

class Zombie:public Move
{
    public:

    Zombie()
    {
        moveType = "Zombie";
        vector<std::string> wins = {"Pirate", "Monkey"};
        vector<std::string> loses = {"Ninja", "Robot"};
    }
};

#endif