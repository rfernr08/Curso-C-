#include <iostream>
#include <string>
#include "EnemyFactory.h"

using namespace std;

Enemy* EnemyFactory::generateEnemy(string tipo) {
    if (tipo == "volador") {
        return new FlyingEnemy("Dragon");
    } else if (tipo == "fuerte") {
        return new StrongEnemy("Tarrasque");
    } else if (tipo == "rapido") {
        return new FastEnemy("Kobold");
    } else {
        return nullptr;
    }
}