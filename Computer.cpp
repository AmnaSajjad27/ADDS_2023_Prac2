#include "Computer.h"
#include "Rock.h"
#include "Move.h"
#include <string>

using namespace std;

// default contructor 
Computer::Computer()
{
    this->Name = "Computer";
}

Move* Computer::makeMove()
{
    Move* move = new Rock;
    return(move);
}

string Computer::getName()
{
    return Name;
}