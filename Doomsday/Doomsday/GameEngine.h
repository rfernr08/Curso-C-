#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <iostream>
#include <string>
#include <vector>
#include "Weapon.h"
#include "Terminator.h"
#include "TerminatorGenerator.h"
#include "Ejercito.h"

class GameEngine{
    public:
        int getRandom(int min, int max);
        void battle(Ejercito John, Ejercito Skynet);
        Terminator getRandomTerminator();
        void printArmy(Ejercito army);
};

#endif