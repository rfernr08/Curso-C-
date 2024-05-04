#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>
using namespace std;
class Enemy {
    private:
        string species;
    public:
        virtual void attack(); 
        virtual void block();
        virtual void run();
};

#endif