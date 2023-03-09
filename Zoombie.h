// Inherited Class Paper from Move

#ifndef ZOOMBIE_H
#define ZOOMBIE_H

#include "Move.h"

class Zoombie:public Move
{
    public:

    Zoombie()
    {
        moveType = "Zoombie";
        vector<string> wins = {""};
        vector<string> loses = {""};
    }
};

#endif