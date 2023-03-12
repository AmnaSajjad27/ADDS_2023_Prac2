#include "Zombie.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Zombie::Zombie()
{
    this->Name = "Zombie";
    // Zoombie eats pirate and savages monkey
    wins = {"Pirate", "Monkey"};
    loses = {"Ninja", "Robot"};
}