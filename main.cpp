# include "Computer.h"
# include "Human.h"
# include "Referee.h"

# include <iostream>

using namespace std;

int main()
{
    Human one("Amna");
    Computer comp;
    Referee Andy;

    Player* temp = Andy.refGame(&one, &comp);

    cout << temp-> getName()<<endl;

    return 0;
}