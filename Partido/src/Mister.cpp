#include "Mister.h"

Mister::Mister(string name){
    this->name_ = name;
}

void Mister::addPlayer(Jugador jugador){
    this->team_->jugadores_.add(jugador);
}

void Mister::coachTeam(Equipo newTeam){
    this->team_ = team; 
}