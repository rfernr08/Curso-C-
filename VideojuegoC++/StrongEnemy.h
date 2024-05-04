#ifndef STENEMY_H
#define STENEMY_H

#include "Enemy.h"
#include <string>

using namespace std;

class StrongEnemy : public Enemy {
    private:
        string species;
    public:
        StrongEnemy(string species);
        void attack();
        void block();
        void run();
};

#endif