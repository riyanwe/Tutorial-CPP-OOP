#include "Player.hpp"
#include <iostream>

Player::Player(const char *name){
    this->name = name;
}

void Player::displayPlayer(){
    std::cout << "player ini adalah seorang ";
    std::cout << this->name << std::endl;
    std::cout << "menggunakan " << this->weapon->getWeapon();
}
void Player::equipWeapon(Weapon *weapon){
    this->weapon = weapon;
}