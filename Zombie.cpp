#include "Zombie.h"
#include "string"

using namespace std;

// default constructor 

Zombie::Zombie()
{
    this->Name = "Ninja";
    wins = {"Pirate", "Monkey"};
    loses = {"Ninja", "Robot"};
}