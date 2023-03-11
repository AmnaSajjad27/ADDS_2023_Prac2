#include "Robot.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Robot::Robot()
{
    this->Name = "Robot";
    wins = {"Ninja", "Zombie"};
    loses = {"Monkey","Pirate"};
}