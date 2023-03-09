#include "Zoombie.h"
#include "string"

using namespace std;

// default constructor 

Zoombie::Zoombie()
{
    this->Name = "Zoombie";
}
// 

bool Zoombie::winner(string moveName)
{
    if (moveName == "Ninja" || moveName == "Robot")
        return false;
    else
        return true;
}