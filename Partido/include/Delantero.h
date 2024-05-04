#include <iostream>
#include <string>
#include "Jugador.h"

class Delantero : public Jugador{
    private:
        string name_;
        Equipo team_;
        int position_;  
        shared_ptr<Ball> ball_;
        int shootHability_;
        int dribleHability_;
    public:
        Delantero(string name);                                  
        int shoot();
        int dribble();
};