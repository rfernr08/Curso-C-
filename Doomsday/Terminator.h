#ifndef TERMINATOR_H
#define TERMINATOR_H

#include "Weapon.h"

class Terminator{
    private:
        int type;
        Weapon weapon;
        int health;
        int firepower;
    public:
        Terminator();
        int getFirepower();
        Weapon getWeapon();
};

#endif
