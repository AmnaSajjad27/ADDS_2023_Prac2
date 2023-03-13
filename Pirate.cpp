#include "Pirate.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Pirate::Pirate()
{
    this->Name = "Pirate";
    // Pirate downs robot and also Skewers monkey
    wins = {"Robot", "Monkey"};
    loses = {"Ninja", "Zombie"};
}