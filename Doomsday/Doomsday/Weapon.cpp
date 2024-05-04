#include "Weapon.h"

Weapon::Weapon(string name){
    this->name = name;
    if(name == "Fogeo"){
        this->firepower = 4;
    }else if(name == "Bazooka"){
        this->firepower = rand() % 5 + 12;
    }else if(name == "Ametralladora"){
        this->firepower = rand() % 5 + 4;
    }else if(name == "Misil"){
        this->firepower = rand() % 5 + 16;
    }
}

int Weapon::getFirepower(){
    return this->firepower;
}
