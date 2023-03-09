
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
char Human::makeMove()
{
    char temp = ' ';
    //Enter R,P or S 

    while (temp != 'R' && temp != 'P' && temp != 'S')
    {
        std::cout << "Enter Move:";
        std::cin >> temp;
    }
    return temp;
}