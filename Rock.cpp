#include "Rock.h"
#include "Move.h"
#include <string>

using namespace std;

// constructor 

Rock::Rock()
{
    this->Name = {"Rock"};
    wins = {"Paper"};
    loses = {"Scissors"};
}