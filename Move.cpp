#include "Move.h"
#include <iostream>

using namespace std;

// Constructor 
string Move::getName()
{
    return this->Name;
}

// logic to check 

bool Move::winner(Move* oppmove)
{
    string move = Move->getName();
    
    if (find(wins.begin(), wins.end(), move) != wins.end() )
    {
        return true;
    }
    else if( find(loses.begin(),loses.end(), move) != loses.end() )
    {
        return false;
    }
    else 
        std::cout << "no outcome";
        return false;
}