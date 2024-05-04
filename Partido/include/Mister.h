#include <iostream>
#include <string>
#include "Equipo.h"
#include "Jugador.h"
class Mister{
    private: 
        string name_;
        Equipo team_;
    public:
        Mister(string name);
        void addPlayer(Jugador player);
        void coachTeam(Equipo team);
};