#include <iostream>
#include <string>
#include <vector>
#include "Equipo.h"
#include "Mister.h"

Equipo::Equipo(string name){
    this->name_ = name;
}

void Equipo::checkPositions(){
    vector<Jugador> jugadoresActuales = jugadores_;
    bool hasPortero = false;
    bool hasDefensa = false;
    bool hasMedio = false;
    bool hasDelantero = false;
    for(int i = 0; i < jugadoresActuales.size(); i++){
        if(jugadoresActuales[i].getPosition() == 1){
            hasPortero = true;
        }
        if(jugadoresActuales[i].getPosition() == 2){
            hasDefensa = true;
        }
        if(jugadoresActuales[i].getPosition() == 3){
            hasMedio = true;
        }
        if(jugadoresActuales[i].getPosition() == 4){
            hasDelantero = true;
        }
    }
    if(hasPortero && hasDefensa && hasMedio && hasDelantero){
        this->jugadores_ = jugadoresActuales;
    }
    else{
        cout << "El equipo no tiene las posiciones necesarias" << endl;
    }
}

void Equipo::getTeamGames(){
    for(int i = 0; i < partidos_.size(); i++){
        cout << partidos_[i].getResult() << endl;
    }
}

void Equipo::addGameRecord(Partido partido){
    this->partidos_.push_back(partido);
}

void Equipo::asignMister(Mister mister){
    this->mister_ = mister;
}