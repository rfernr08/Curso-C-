#ifndef EJERCITO_H
#define EJERCITO_H

#include <iostream>
#include <string>
#include <vector>
#include "Terminator.h"
#include "TerminatorGenerator.h"

class Ejercito{
    private:
        string leader;
        vector<Terminator> army;
    public:
        Ejercito(string leader, int armySize);
        vector<Terminator> getArmy();
        string getLeader();
};

#endif