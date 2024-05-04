#include "FastEnemy.h"
#include <iostream>
#include <string>
using namespace std;

FastEnemy::FastEnemy(string species){
    this->species = species;
}
void FastEnemy::attack(){
    cout << "The enemy " << species << "attacks!" << endl;
}
void FastEnemy::block(){
    cout << "The enemy " << species << "blocks!" << endl;
}
void FastEnemy::run(){
    cout << "The enemy " << species << "runs away fast!" << endl;
}