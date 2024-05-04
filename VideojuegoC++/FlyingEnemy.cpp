#include "FlyingEnemy.h"
#include <iostream>
#include <string>
using namespace std;

FlyingEnemy::FlyingEnemy(string species){
    this->species = species;
}
void FlyingEnemy::attack(){
    cout << "The enemy " << species << "attacks with might!" << endl;
}
void FlyingEnemy::block(){
    cout << "The enemy " << species << "blocks!" << endl;
}
void FlyingEnemy::run(){
    cout << "The enemy " << species << "runs away!" << endl;
}
