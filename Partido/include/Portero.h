#include <iostream>
#include <string>
#include "Jugador.h"

class Portero : public Jugador{
    private:
        string name_;
        Equipo team_;
        int position_;
        shared_ptr<Ball> ball_;
        int saveHability_;
        int passHability_;
    public:
        Portero(string name);
        int save();
        int pass();
};