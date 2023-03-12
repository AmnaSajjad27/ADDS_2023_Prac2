#include "Scissors.h"
#include "Move.h"
#include <string>

using namespace std;

// constructor 
Scissors::Scissors()
{
    this->Name = "Scissors";
    wins = {"Paper"};
    loses = {"Rock"};
}