#include "Ninja.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Ninja::Ninja()
{
    this->Name = "Ninja";
    // Ninja karate chops Pirate and decapitates Zombie
    wins = {"Pirate", "Zombie"};
    loses = {"Monkey", "Robot"};
}