#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(const char *weaponName, double power){
    this->weaponName = weaponName;
    this->power = power;
}

void Weapon::displayWeapon(){
    std::cout << "menggunakan senjata " << this->weaponName;
    std::cout << " power " << this->power << std::endl;
}
std::string Weapon::getWeapon(){
    return this->weaponName;
}