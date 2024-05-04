//#include "TerminatorGenerator.h"
#include "Terminator.h"
#include "GameEngine.h"
#include "Ejercito.h"
#include "Weapon.h"

int main(){
    GameEngine* game = new GameEngine();
    Ejercito John = Ejercito("John Connor", 5);
    Ejercito Skynet = Ejercito("Skynet", 5);
    game->battle(John, Skynet);
    return 0;
}