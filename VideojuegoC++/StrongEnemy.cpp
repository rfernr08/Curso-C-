#include "StrongEnemy.h"
#include <iostream>
#include <string>
using namespace std;

StrongEnemy::StrongEnemy(string species){
    this->species = species;
}
void StrongEnemy::attack(){
    cout << "The enemy " << species << "attacks!" << endl;
}
void StrongEnemy::block(){
    cout << "The enemy " << species << "blocks without a scrath!" << endl;
}
void StrongEnemy::run(){
    cout << "The enemy " << species << "runs away!" << endl;
}
