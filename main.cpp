# include "Computer.h"
# include "Human.h"
# include "Referee.h"

# include <iostream>

using namespace std;

int main()
{   
    Human one ("Amber");
    Human two("Amna");
    Referee Ref;

    Player* temp = Ref.refGame(&one, &two);

    cout << temp-> getName()<<endl;

    return 0;
}
