#include "Paper.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Paper::Paper()
{
    this->Name = "Paper";
    wins = {"Rock"};
    loses = {"Scissors"};
}