#include "Pirate.h"
#include "string"

using namespace std;

// default constructor 

Pirate::Pirate()
{
    this->Name = "Pirate";
}
// 

bool Pirate::winner(string moveName)
{
    if (moveName == "Ninja" || moveName == "Zoombie")
        return false;
    else
        return true;
}