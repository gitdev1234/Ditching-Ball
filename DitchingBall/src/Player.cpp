/**
 * Player.cpp
 * Purpose: implement Player class
 *
 * @author Wall.Of.Death, gitdev42
 * @version 1.0
 */


#include "include/Player.h"
#include "types.h"


/* --- constructors / destructors --- */

// standard-constructor
/**
 * Player::Player
 * @brief standard constructor of class Player
 * @param lifesUntilDeath_ number of lifes until this player is loosing the game
 * @param name_ name of this player
 * This is the standard constructor of class Player. It initializes all attributes.
 */
Player::Player(int lifesUntilDeath_, string name_)
    : lifesUntilDeath ( lifesUntilDeath_),
      name            ( name_           )

{ }

// copy-constructor
/**
 * Player::Player
 * @brief copy constructor of class Player
 * @param other_ Player object to copy from
 */
Player::Player(const Player &other_) {
    *this = other_;
};
