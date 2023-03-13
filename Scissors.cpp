#include "Scissors.h"
#include "Move.h"

using namespace std;

// constructor 
Scissors::Scissors()
{
    this->Name = "Scissors";
    wins = {"Paper"};
    loses = {"Rock"};
}