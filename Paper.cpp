#include "Paper.h"
#include "string"

using namespace std;

// default constructor 

Paper::Paper()
{
    this->Name = "Paper";
}
// 

bool Paper::winner(string moveName)
{
  if(moveName == "Scissors")
  {
    return false;
  }
  else
  {
    return true;
  }
}