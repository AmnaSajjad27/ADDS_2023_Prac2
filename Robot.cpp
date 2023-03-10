#include "Robot.h"
#include "string"

using namespace std;

// default constructor 

Robot::Robot()
{
    this->Name = "Robot";
    vector<string> wins = {"Ninja", "Zombie"};
    vector<string> loses = {"Monkey","Pirate"};
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