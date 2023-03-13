#include "Paper.h"
#include "Move.h"
#include <string>

using namespace std;
 
Paper::Paper()
{
    this->Name = "Paper";
    wins = {"Rock"};
    loses = {"Scissors"};
}