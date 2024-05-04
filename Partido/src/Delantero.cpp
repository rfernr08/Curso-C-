#include <iostream>
#include <string>
#include "Delantero.h"

Delantero::Delantero(string name){
    this->name_ = name;
    this->team_ = team;
    this->position_ = 4;
    this->shootHability_ = generarStat();
    this->dribleHability_ = generarStat();
}                                   
int Delantero::shoot(){
    return this->shootHability_; 
}
int Delantero::dribble(){
    return this->dribleHability_;
}