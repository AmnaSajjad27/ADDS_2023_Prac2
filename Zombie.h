#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "zombie.h"

class Zombie:public Move
{
    public:

    Zombie()
    {
        moveType = "Zombie";
        vector<string> wins = {"Pirate", "Monkey"};
        vector<string> loses = {"Ninja", "Robot"};
    }
};

#endif