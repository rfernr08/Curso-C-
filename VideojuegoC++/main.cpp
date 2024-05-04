#include <iostream>
#include "Enemy.h"
#include "EnemyFactory.h"

int main() {
    Enemy* enemigo = EnemyFactory::generateEnemy("volador");
    enemigo->attack();
    enemigo->block();
    enemigo->run();
    return 0;
}