#include "Zombie.h"
#include "Move.h"

using namespace std;

// default constructor 

Zombie::Zombie()
{
    this->Name = "Zombie";
    // Zoombie eats pirate and savages monkey
    wins = {"Pirate", "Monkey"};
    loses = {"Robot", "Ninja"};
}