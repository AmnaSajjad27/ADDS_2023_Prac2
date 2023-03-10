#include "Pirate.h"
#include "string"

using namespace std;

// default constructor 

Pirate::Pirate()
{
    this->Name = "Pirate";
    vector<string> wins = {"Robot", "Monkey"};
    vector<string> loses = {"Ninja", "Zombie"};
}

// logic to check 

bool Pirate::Pirate(Move* oppMove)
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