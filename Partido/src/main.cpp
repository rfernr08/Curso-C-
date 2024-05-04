#include <iostream>
#include <vector>
#include "Jugador.cpp"
#include "Equipo.cpp"
#include "Mister.cpp"
#include "Partido.cpp"

#include "Delantero.h"
#include "Defensa.h"
#include "Medio.h"
#include "Portero.h"
#include "Equipo.h"
#include "Partido.h"
#include "Jugador.h"
#include "Mister.h"

using namespace std;

int main(){
    Mister mister1 = Mister("Pep");
    Mister mister2 = Mister("Zinedine");   
    Arbitro arbitro = Arbitro("Mateu");

    Equipo equipo1 = Equipo("Barcelona", mister1);
    Equipo equipo2 = Equipo("Real Madrid", mister2);
    Equipo equipo3 = Equipo("Cultural", mister2);

    Partido partido1 = Partido(equipo1, equipo2, arbitro);
    Partido partido2 = Partido(equipo2, equipo3, arbitro);
    Partido partido3 = Partido(equipo1, equipo3, arbitro);

    vector<Partido> partidos1 = {partido1, partido2};
    vector<Partido> partidos2 = {partido1, partido3};

    equipo1.addGameRecord(partido1);
    equipo1.addGameRecord(partido2);

    equipo2.addGameRecord(partido1);
    equipo2.addGameRecord(partido3);

    Jugador jugador1 = Delantero("Lionel");
    Jugador jugador2 = Delantero("Cristiano");
    Jugador jugador3 = Defensa("Sergio");
    Jugador jugador4 = Defensa("German");
    Jugador jugador5 = Medio("Luka");
    Jugador jugador6 = Medio("Frenkie");
    Jugador jugador7 = Portero("Marc");
    Jugador jugador8 = Portero("Thibaut");

    mister1.addPlayer(jugador1);
    mister1.addPlayer(jugador3);
    mister1.addPlayer(jugador5);
    mister1.addPlayer(jugador7);

    mister2.addPlayer(jugador2);
    mister2.addPlayer(jugador4);
    mister2.addPlayer(jugador6);
    mister2.addPlayer(jugador8);

    equipo1.checkPositions();
    equipo2.checkPositions();


    Partido nuevoPartido = Partido(equipo1, equipo2, arbitro);

    cout << "Playing" << endl;

    jugador3.recibirBalon();
    arbitro.passBall(jugador3, jugador1);
    arbitro.dribblePlayer(jugador1, jugador2);
    arbitro.shootAtGoal(jugador1, jugador8);
    arbitro.passBall(jugador8, jugador4);
    arbitro.tacklePlayer(jugador5, jugador4);
    arbitro.passBall(jugador5, jugador1);
    arbitro.dribblePlayer(jugador1, jugador2);
    arbitro.shootAtGoal(jugador1, jugador8);

    partido.acabarPartido();
    return 0;
}
