#include "Ninja.h"
#include "string"

using namespace std;

// default constructor 

Ninja::Ninja()
{
    this->Name = "Ninja";
    vector<string> wins = {"Pirate", "Zombie"};
    vector<string> loses = {"Monkey", "Robot"};
}

// logic to check 

bool Ninja::winner(Move* oppMove)
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