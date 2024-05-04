#include "Ejercito.h"

Ejercito::Ejercito(string leader, int armySize){
    TerminatorGenerator* generator = new TerminatorGenerator();
    this->leader = leader;
    for(int i = 0; i < armySize; i++){
        Terminator* terminator = generator->generateTerminator(rand() % 3 + 1);
        this->army.push_back(*terminator);
    }
}

string Ejercito::getLeader(){
    return this->leader;
}
