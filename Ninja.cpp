#include "Pirate.h"
#include "string"

using namespace std;

// default constructor 

Ninja::Ninja()
{
    this->Name = "Ninja";
}
// 

bool Ninja::winner(string moveName)
{
    if (moveName == "Robot" || moveName == "Monkey")
        return false;
    else
        return true;
}