#include "Scissors.h"
#include "string"

using namespace std;

// default constructor 

Scissors::Scissors()
{
    this->Name = "Scissors";
}
// 

bool Scissors::winner(string moveName)
{
  if(moveName == "Paper")
  {
    return true;
  }
  else
  {
    return false;
  }
}