#include "Monkey.h"
#include "string"

using namespace std;

// default constructor 

Monkey::Monkey()
{
    this->Name = "Monkey";
}
// 

bool Monkey::winner(string moveName)
{
    if (moveName == "Pirate" || moveName == "Zoombie")
        return false;
    else
        return true;
}