#ifndef __PLAYER
#define __PLAYER
#include <string>
#include "Weapon.hpp"

class Player{
    private:
        std::string name;
        Weapon *weapon;

    public:
        Player(const char *);
        void displayPlayer();
        // setter
        void equipWeapon(Weapon *);
};


#endif