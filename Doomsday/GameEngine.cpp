#include "GameEngine.h"

int GameEngine::getRandom(int min, int max){
    return rand() % (max - min + 1) + min;
}
void GameEngine::battle(Ejercito John, Ejercito Skynet){
    int JohnFirepower = 0;
    int SkynetFirepower = 0;
    vector<Terminator> JohnArmy = John.getArmy();
    vector<Terminator> SkynetArmy = Skynet.getArmy();
    for(int i = 0; i < JohnArmy.size(); i++){   
        JohnFirepower += JohnArmy[i].getFirepower() + JohnArmy[i].getWeapon().getFirepower();
        SkynetFirepower += SkynetArmy[i].getFirepower() + SkynetArmy[i].getWeapon().getFirepower();
    }
    if(JohnFirepower > SkynetFirepower){
        cout << "John Connor wins!" << endl;
    }else if(JohnFirepower < SkynetFirepower){
        cout << "Skynet wins!" << endl;
    }else if(JohnFirepower == SkynetFirepower){
        cout << "It's a tie! Time for tea party" << endl;
    }else {
        cout << "Total analihilation!" << endl;
    }
}
Terminator GameEngine::getRandomTerminator(){
    int random = rand() % 3 + 1;
    if(random == 1){
        return T100();
    }else if(random == 2){
        return T500();
    }else{
        return T800();
    }
}
void GameEngine::printArmy(Ejercito army){
    cout << "Leader: " << army.getLeader() << endl;
    for(int i = 0; i < army.getArmy().size(); i++){
        cout << "Terminator " << i << endl;
    }
}
