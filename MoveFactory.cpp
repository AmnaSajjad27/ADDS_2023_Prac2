#include "MoveFactory.h"
#include <string>
#include <iostream>

#include "Move.h"

using namespace std;

unordered_map<std::string, MoveFactory::Name> MoveFactory::mapMoves = 
{
    {"Rock", MoveFactory::Name::Rock},
    {"Paper", MoveFactory::Name::Paper},
    {"Scissors",MoveFactory::Name::Scissors},
    {"Robot", MoveFactory::Name::Robot},
    {"Monkey",MoveFactory::Name::Monkey},
    {"Pirate",MoveFactory::Name::Pirate},
    {"Ninja",MoveFactory::Name::Ninja},
    {"Zombie",MoveFactory::Name::Zombie}
};

MoveFactory(){}
Move* MoveFactory::createMove() const
{
    string moveName;
    bool isMove = true;

    do
    {
        cout << "Enter Move: ";
        isMove = true;
        cin >>moveName;

        switch (mapMoves[moveName])
        {
            case Name::Rock;
            return new Rock;
            break;
            
            case Name::Paper;
            return new Paper;
            break;

            case Name::Scissors;
            return new Scissors;
            break;

            case Name::Pirate;
            return new Pirate;
            break;

            case Name::Ninja;
            return new Ninja;
            break;

            case Name::Robot;
            return new Robot;
            break;

            case Name::Zombie;
            return new Zombie;
            break;

            case Name::Monkey;
            return new Monkey;
            break;

            default:
            cout << "Invalid Move. error in createMove()";
            isMove = false;
        }
    }while (!isMove);
    return nullptr;
}
