#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include <unordered_map>
#include <string>

#include "Move.h"
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

    // definfing the map
    static std::unordered_map<std::string,Name> mapMoves;

    public:
    // const creatMove function of type move
    Move* createMove() const;
};

#endif