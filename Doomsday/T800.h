#ifndef T800_H
#define T800_H

#include "Terminator.h"

class T800 : public Terminator{
    private:
        int type;
        Weapon weapon;
        int health;
        int firepower;
    public:
        T800();
        int getFirepower();
        Weapon getWeapon();
};

#endif