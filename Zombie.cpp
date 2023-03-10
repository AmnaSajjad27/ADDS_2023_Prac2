#include "Zombie.h"
#include "string"

using namespace std;

// default constructor 

Zombie::Zombie()
{
    this->Name = "Zombie";
    wins = {"Pirate", "Monkey"};
    loses = {"Ninja", "Robot"};
}