#include <iostream>
#include <string>
#include "Medio.h"

Medio::Medio(string name){
    this->name_ = name;
    this->team_ = team;
    this->position_ = 2;
    this->dribleHability_ = generarStat();
    this->passHability_ = generarStat();
}

int Medio::drible(){
    return this->dribleHability_;   
}

int Medio::pass(){
    return this->passHability_;
}