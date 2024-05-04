#include "T100.h"

T100::T100(){
    this->type = 1;
    this->health = rand() % 11 + 5;
    this->firepower = rand() % 7 + 10;
    int random = rand() % 2 + 1;
    if (random == 1) {
        this->weapon = Weapon("Bazooka");
    } else {
        this->weapon = Weapon("Ametralladora");
    }
}

int T100::getFirepower(){
    return this->firepower;
}

Weapon T100::getWeapon(){
    return this->weapon;
}