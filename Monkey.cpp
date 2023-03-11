#include "Monkey.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Monkey::Monkey()
{
    this->Name = "Monkey";
    wins = {"Pirate", "Zombie"};
    loses = {"Ninja", "Robot"};
}

