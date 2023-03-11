#include <iostream>
#include "Move.h"
#include "Human.h"
#include <string>
#include "MoveFactory.h"

using namespace std;

Human::Human()
{
    Name = "Human";
}
Human::Human(string name)
{
    Name = name;
}

// function that gets the move 
// commitng 
Move* Human::makeMove()
{
    // check if there is move in Name and return address 
    // create an instance of a move type
    Move* move = inputHandler.createMove();
    return move;
}

string Human::getName()
{
    return Name;
}