
#include "Computer.h"
#include <string>

using namespace std;

// default contructor 
Computer::Computer()
{
    this->Name = "Computer";
}

char Computer::makeMove()
{
    return 'R';
}