#ifndef FLENEMY_H
#define FLENEMY_H
#include "Enemy.h"
#include <string>

using namespace std;

class FlyingEnemy : public Enemy {
    private:
        string species;
    public:
        FlyingEnemy(string species);
        void attack();
        void block();
        void run();
};

#endif