#include "Move.h"

using namespace std;

// Constructor 
string Move::getName()
{
    return this-> Name;
}

/ logic to check 

bool Move::winner(Move* oppMove)
{
    string oppMove = oppMove->getName();
    
    if (find(wins.begin(), wins.end(), oppMove) != wins.end() )
    {
        return true;
    }
    else if( find(loses.begin(),loses.end(), oppMove) != loses.end() )
    {
        return false;
    }
    else 
    {
        std::cout << "no outcome";
        return false;
    }
}