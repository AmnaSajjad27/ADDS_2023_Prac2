#include "Pirate.h"
#include "string"

using namespace std;

// default constructor 

Pirate::Pirate()
{
    this->Name = "Pirate";
    wins = {"Robot", "Monkey"};
    loses = {"Ninja", "Zombie"};
}