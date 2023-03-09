#include "Robot.h"
#include "string"

using namespace std;

// default constructor 

Robot:: Robot()
{
    this->Name = "Robot";
}
// 

bool Robot::winner(string moveName)
{
    if (moveName == "Monkey" || moveName == "Pirate")
        return false;
    else
        return true;
}