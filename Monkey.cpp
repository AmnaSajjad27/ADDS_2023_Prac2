#include "Monkey.h"
#include "string"

using namespace std;

// default constructor 

Monkey::Monkey()
{
    this->Name = "Monkey";
    vector<string> wins = {"Pirate", "Zoombie"};
    vector<string> loses = {"Ninja", "Robot"};
}

// logic to check 

bool Monkey::winner(Move* oppMove)
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