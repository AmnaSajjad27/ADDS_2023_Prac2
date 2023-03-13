#include "Computer.h"
#include "Rock.h"
#include "Move.h"
#include <string>

using namespace std;

// Default contructor 
Computer::Computer()
{
    Name = "Computer";
}
// makeMove implementation 
Move* Computer::makeMove()
{
    Move* move = new Rock;
    return(move);
}
// getName implementation 
string Computer::getName()
{
    return Name;
}