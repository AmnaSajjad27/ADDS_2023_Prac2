#include "Scissors.h"
#include "string"

using namespace std;

// default constructor 

Scissors::Scissors()
{
    this->Name = "Scissors";
    vector<string> wins = {"Paper"};
    vector<string> loses = {"Rock"};
}

// logic to check 

bool Robot::winner(Move* oppMove)
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