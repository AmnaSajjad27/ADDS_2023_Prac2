#include "Scissors.h"
#include "Move.h"
#include <string>

using namespace std;

// default constructor 

Scissors::Scissors()
{
    this->Name = "Scissors";
    wins = {"Rock"};
    loses = {"Paper"};
}