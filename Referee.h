#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"
#include "Move.h"
#include "MoveFactory.h"

#include <iostream> 

class Referee
{
    public:
    Referee(); // constructor
    Player * refGame(Player * player1, Player * player2);

    // returns the reference to the winning player

    // check for draw first 
    // make a move first 


};

#endif