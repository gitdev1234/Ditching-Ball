/**
 * Player.cpp
 * Purpose: define Player class
 *
 * @author Wall.Of.Death, gitdev42
 * @version 1.0
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std;


class Player {
    public:
        /* --- constructors / destructors --- */

        // standard-constructor
        Player (int lifesUntilDeath_, string name_);

        // copy-constructor
        Player (const Player& other_);

        /* --- miscellaneous --- */

        /* --- getter / setter --- */
        int getLifesUntilDeath() const         {return lifesUntilDeath;};
        string getName()         const         {return name;           };

        void setLifesUntilDeath (int    lifesUntilDeath_) {lifesUntilDeath = lifesUntilDeath_; };
        void setName            (string            name_) {name            = name_;            };

    private:
        int lifesUntilDeath;
        string name;


};


#endif // PLAYER_H
