#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

using namespace std;

class Weapon{
    private:
        string name;
        int firepower;
    public:
        Weapon();
        Weapon(string name);
        int getFirepower();
};

#endif