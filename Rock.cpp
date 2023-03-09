#include "Rock.h"
#include "string"

using namespace std;

// default constructor 

Rock::Rock()
{
    this->Name = "Rock";
}
// 

bool Rock::winner(string moveName)
{
  if(moveName == "Scissors")
  {
    return true;
  }
  else
  {
    return false;
  }
}