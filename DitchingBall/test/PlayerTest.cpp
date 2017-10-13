/**
 * PlayerTest.cpp
 * Purpose: implements unit-tests for the Player-class
 *
 * @author Wall.Of.Death, gitdev42
 * @version 1.0
 */

// !!!! TEST_CASE IN COMBINITION WITH REQUIRE IS LIKE A LOOP STRUCTURE !!!!
// !!!! THE TEST_CASE IS EXECUTED FOR EVERY SECTION !!!!

#include "include/catch.hpp"
#include "include/Player.h"
#include "types.h"

using namespace std;

TEST_CASE("Test constructors of Player class") {

    SECTION("standard-constructor without arguments") {
        Player P;
        REQUIRE(P.getLifesUntilDeath() == DEFAULT_LIFES_UNTIL_DEATH);
        REQUIRE(P.getName() == "");
    }

    SECTION("standard-constructor with arguments") {
        Player P(10,"TESTName1231324!/§$!=§$");
        REQUIRE(P.getLifesUntilDeath() == 10);
        REQUIRE(P.getName() == "TESTName1231324!/§$!=§$");

        SECTION("copy-constructor") {
            Player P2(P);
            REQUIRE_FALSE(&P == &P2);
            REQUIRE(P.getLifesUntilDeath() == P2.getLifesUntilDeath());
            REQUIRE(P.getName() == P2.getName());
        }

    }

}
