// Inherited Class Paper from Move

#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot:public Move
{
    public:

    Robot()
    {
        moveType = "Robot";
        vector<string> wins = {""};
        vector<string> loses = {""};
    }
};

#endif