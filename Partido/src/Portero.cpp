#include <iostream>
#include <string>
#include "Portero.h"

Portero::Portero(string name){
    this->name_ = name;
    this->team_ = team;
    this->position_ = 1;
    this->saveHability_ = generarStat();
    this->passHability_ = generarStat();
}

int Portero::save(){
    return this->saveHability_;
}

int Portero::pass(){
    return this->passHability_;
}