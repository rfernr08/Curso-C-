#include "T800.h"

T800::T800(){
    this->type = 3;
    this->health = rand() % 41 + 10;
    this->firepower = rand() % 3 + 2;
    int random = rand() % 2 + 1;
    if (random == 1) {
        this->weapon = Weapon("Bazooka");
    } else {
        this->weapon = Weapon("Fogueo");
    }
}

int T800::getFirepower(){
    return this->firepower;
}

Weapon T800::getWeapon(){
    return this->weapon;
}