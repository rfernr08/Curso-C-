#include <string>
#include <vector>   
//#include "Mister.h"
//#include "Jugador.h"
#include "Partido.h"

class Equipo {
    private:
        string name_;
        Mister mister_;
        vector<Jugador> jugadores_;
        vector<Partido> partidos_;
    public: 
        Equipo(string name);
        void checkPositions();
        void addGameRecord(Partido partido);
        void getTeamGames();
        void asignMister(Mister mister);
};