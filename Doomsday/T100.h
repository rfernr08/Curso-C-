#ifndef T100_H
#define T100_H

#include "Terminator.h"

class T100 : public Terminator{
    private:
        int type;
        Weapon weapon;
        int health;
        int firepower;
    public:
        T100();
        int getFirepower();
        Weapon getWeapon();
};

#endif