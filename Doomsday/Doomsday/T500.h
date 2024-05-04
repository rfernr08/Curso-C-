#ifndef T500_H
#define T500_H

#include "Terminator.h"

class T500 : public Terminator{
    private:
        int type;
        Weapon weapon;
        int health;
        int firepower;
    public:
        T500();
        int getFirepower();
        Weapon getWeapon();
};

#endif