#ifndef ENFACTORY_H
#define ENFACTORY_H

#include "Enemy.h"
#include "FastEnemy.h"
#include "FlyingEnemy.h"
#include "StrongEnemy.h"
#include <string>
using namespace std;
class EnemyFactory{
    public:
        static Enemy* generateEnemy(string tipo);
};

#endif
