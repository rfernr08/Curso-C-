#include "T500.h"

T500::T500(){
    this->type = 2;
    this->health = rand() % 11 + 20;
    this->firepower = rand() % 5 + 6;
    int random = rand() % 2 + 1;
    if (random == 1) {
        this->weapon = Weapon("Misil");
    } else {
        this->weapon = Weapon("Ametralladora");
    }
}

int T500::getFirepower(){
    return this->firepower;
}

Weapon T500::getWeapon(){
    return this->weapon;
}