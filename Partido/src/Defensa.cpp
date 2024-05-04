#include <iostream>
#include <string>
#include "Defensa.h"

Defensa::Defensa(string name){
    this->name_ = name;
    this->team: = team;
    this->position_ = 2;
    this->tackleHability_ = generarStat();
    this->passHability_ = generarStat();
}

int Defensa::tackle(){
    return tackleHability_;
}

int Defensa::pass(){
    return passHability_;
}