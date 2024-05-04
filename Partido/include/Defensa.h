#include <iostream>
#include <string>
#include "Jugador.h"
#include "Balon.h"
#include <memory>

class Defensa : public Jugador{
    private:
        string name_;
        Equipo team_;
        int position_;
        shared_ptr<Ball> ball_;
        int tackleHability_;
        int passHability_;
    public:
        Defensa(string name);
        int tackle();
        int pass();
};