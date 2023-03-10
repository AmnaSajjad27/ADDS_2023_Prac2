#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include <unordered_map>
#include <string>
#include <iostream>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Robot.h"
#include "Ninja.h"

using namespace std;
class MoveFactory
{
    private:
    enum class Name
    {
        Rock,
        Paper,
        Scissors,
        Robot,
        Monkey,
        Pirate,
        Ninja,
        Zombie,
    };

    static std::unordered_map<std::string,Name> mapMoves;

    public:
    MoveFactory();
    Move* createMove() const;

};

#endif