#include "Ninja.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Ninja::Ninja()
{
    this->Name = "Ninja";
    wins = {"Pirate", "Zombie"};
    loses = {"Monkey", "Robot"};
}