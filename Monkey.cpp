#include "Monkey.h"
#include "Move.h"

#include <string>

using namespace std;

// default constructor 

Monkey::Monkey()
{
    this->Name = "Monkey";
    // vectors that hold who the Monkey 
    wins = {"Ninja", "Robot"};
    loses = {"Pirate", "Zombie"};
}

