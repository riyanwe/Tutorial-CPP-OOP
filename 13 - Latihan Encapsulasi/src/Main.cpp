#include <iostream>
#include <string>
#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

int main(int argc, char const *argv[])
{

    Player *player1 = new Player("sniper");
    Weapon *weapon1 = new Weapon("senapan", 100);

    // implementasi setter untuk mengequip weapon
    player1->equipWeapon(weapon1);

    player1->displayPlayer();

    return 0;
}
