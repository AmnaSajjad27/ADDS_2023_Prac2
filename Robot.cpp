#include "Robot.h"
#include "Move.h"
#include "MoveFactory.h"

#include <string>

using namespace std;

// default constructor 

Robot::Robot()
{
    this->Name = "Robot";
    // Robot chokes Ninja and crushes Zoombie 
    wins = {"Zombie", "Ninja"};
    loses = {"Monkey","Pirate"};
}