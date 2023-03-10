#include "Zombie.h"
#include "string"

using namespace std;

// default constructor 

Zombie::Zombie()
{
    this->Name = "Ninja";
    vector<string> wins = {"Pirate", "Monkey"};
    vector<string> loses = {"Ninja", "Robot"};
}

// logic to check 

bool Zombie::winner(Move* oppMove)
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