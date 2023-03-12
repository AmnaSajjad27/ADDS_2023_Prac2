#include "Referee.h"
#include "Player.h"
#include "Move.h"
#include "Human.h"
#include "MoveFactory.h"

#include <string>
#include <algorithm>

using namespace std;

Referee::Referee(){};

Player* Referee::refGame(Player* player1, Player* player2)
{
    // edited from last prac to change type from a char to a move
    Move* move_1 = player1->makeMove();
    Move* move_2 = player2->makeMove();
    
    // Check for a draw 
    if ( (move_1->getName()) == (move_2->getName()) )
    {
        // return a nullptr
        return nullptr;
    }
    
    // checks for who wins 
    // player 1's instance of winner
    // chnaged this from else if TO IF
    if( move_1->winner(move_2) == true)
    {
        return(player1);
        // return player1
    }

    // TESTING
    if ( move_2->winner(move_1) == true)
    {
        return(player2);
    }

    //else return player 2
    return(player1);
}
