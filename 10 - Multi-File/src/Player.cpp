#include <iostream>
#include <string>
#include "Player.h"


// Penjabaran method
Player::Player(const char *name){
    this->name = name;
}

void Player::display(){
    std::cout << "nama player: " << this->name << std::endl;
}

std::string Player::getName(){
    return this->name;
}

void Player::setName(const char *name){
    this->name = name;
}