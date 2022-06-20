#ifndef __WEAPON
#define __WEAPON
#include <string>

class Weapon{
    private:
        std::string weaponName;
        double power;

    public:
        Weapon(const char *, double);
        void displayWeapon();
        // getter, read only
        std::string getWeapon();
};


#endif