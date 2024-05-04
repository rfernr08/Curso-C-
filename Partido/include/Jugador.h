#include <iostream>
#include <string>
#include "Balon.h"
#include <memory>
#include "Equipo.h"
using namespace std;

class Jugador{
    private:
        string name_;
        Equipo team_;
        int position_;   
        shared_ptr<Ball> ball_;
    public:
        int generarStat();
        void receiveBall(shared_ptr<Ball> newBall);
        shared_ptr<Ball> leaveBall();
        int tackle();
        int pass();
        int shoot();
        int dribble();
        int save();
        Equipo getTeam();
        //void setTeam(int team);
        int getPosition();
        bool hasBall();
};