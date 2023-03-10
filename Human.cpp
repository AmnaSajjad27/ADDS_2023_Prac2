
#include "Human.h"

using namespace std;

Human::Human()
{
    this->Name = "Human";
}
Human::Human(std::string name)
{
    this->Name = name;
}

// function that gets the move 
// commitng 
*Move Human::makeMove()
{
    Move* temp = ' ';
    //Enter R,P or S 

    while (temp != 'Rock' && temp != 'Paper' && temp != 'Scissors')
    {
        std::cout << "Enter Move:";
        std::cin >> temp;
    }
    return temp;
}