#include "Move.h"

#include <iostream>

using namespace std;

// getName implentation 
string Move::getName()
{
    return this->Name;
}

// logic to check which player wins and returning true or false
bool Move::winner(Move* oppmove)
{
    // holding the opponents move's name as a string in 'move'
    string move = oppmove->getName();

    // checking who wins
    // remember that wins and loses vector hold who the opponent can win or lose against
    if (find(wins.begin(), wins.end(), move) != wins.end())
    {
        return true;
    }
    // CHANGED FROM IF ELSE to if upon disscusion with tutor 
    if(find(loses.begin(),loses.end(), move) != loses.end())
    {
        return false;
    }
    else
    {
        std::cout << "no outcome";
        return false;
    }
    return false;
}