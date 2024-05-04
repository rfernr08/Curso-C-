#ifndef FAENEMY_H
#define FAENEMY_H

#include "Enemy.h"
#include <string>

using namespace std;

class FastEnemy : public Enemy {
    private:
        string species;
    public:
        FastEnemy(string species);
        void attack();
        void block();
        void run();
};

#endif