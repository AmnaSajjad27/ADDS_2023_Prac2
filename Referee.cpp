#include "Referee.h"
#include <string>

using namespace std;

    Referee::Referee(){};

    Player * Referee::refGame(Player * player1, Player * player2)
    {
    Move* move_1 = player1->makeMove();
    Move* move_2 = player2->makeMove();

// Check for a draw 

if (move_1->getName() == move_2->getName())
{
    // return a nullptr
    return nullptr;
}
// checks for who wins 
// player 1's instance of winner
else if( winner == true )
{
    // return player1
}

}
