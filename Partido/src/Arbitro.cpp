#include "Arbitro.h"
#include <iostream>
using namespace std;

Arbitro::Arbitro(string name)
{
    name_ = name;
}

void Arbitro::shootAtGoal(Jugador jugador1, Jugador jugador2)
{
    if (striker.shoot() > goalkeeper.save()){
        goal(player1.getTeam());
        player2.receiveBall(player1.leaveBall());
    }else {
        player2.receiveBall(player1.leaveBall());
        // El balón pasa a ser del portero
    }
}

void Arbitro::goal(Equipo team)
{
    score(team);
    cout << "¡Gol!" << endl;
}

void Arbitro::passBall(Jugador player1, Jugador player2)
{
    if (player1.pass() > player2.pass()){// El balón pasa a ser de player2
        player2.receiveBall(player1.leaveBall());
    }else {
        // El balón sigue siendo de player1
    }
}

void Arbitro::dribblePlayer(Jugador player1, Jugador player2)
{
    if (player1.dribble() > player2.pass()){
        // El balón sigue siendo de player1
    }else {// El balón pasa a ser de player2
        player2.receiveBall(player1.leaveBall());
    }
}

void Arbitro::tacklePlayer(Jugador player1, Jugador player2)
{
    if (player1.tackle() > player2.pass()){
        // El balón pasa a ser de player1
        player1.receiveBall(player2.leaveBall(););
    }else {
        // El balón sigue siendo de player2
    }
}