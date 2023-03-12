#include <iostream>
#include <string>

#include "Move.h"
#include "Human.h"
#include "MoveFactory.h"

using namespace std;

// Default constructor 
Human::Human()
{
    Name = "Human";
}
Human::Human(string name)
{
    Name = name;
}
// function that gets the move 
Move* Human::makeMove()
{
    // check if there is move in Name and return address 
    // creates an instance of a move type
    Move* move = inputHandler.createMove();
    return move;
}
// get Name implementation 
string Human::getName()
{
    return Name;
}