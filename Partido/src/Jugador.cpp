#include <iostream>
#include <string>
#include <memory>
#include "Jugador.h"
#include "Balon.h"

int Jugador::generarStat(){
    return rand() %5 + 1;
}

void Jugador::receiveBall(shared_ptr<Ball> newBall) {
    ball_ = newBall;
}

shared_ptr<Ball> Jugador::leaveBall() {
    shared_ptr<Ball> tempBall = ball;
    ball_ = nullptr;
    return tempBall;
}

int Jugador::getPosition(){
    return position_;
}

string Jugador::getTeam(){
    return team_;
}

bool Jugador::hasBall(){
    return ball_ != nullptr;
}

Equipo Jugador::getTeam(){
    return team_;
}

