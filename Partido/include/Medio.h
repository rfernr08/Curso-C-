#include <iostream>
#include <string>
#include "Jugador.h"

class Medio : public Jugador{
    private:
        string name_;
        Equipo team_;
        int position_;
        shared_ptr<Ball> ball_;
        int dribleHability_;
        int passHability_;
    public:
        Medio(string name);
        int drible();
        int pass();
};