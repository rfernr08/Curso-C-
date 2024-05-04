#ifndef ENEMY_H
#define ENEMY_H
class Enemy {
    public:
        virtual void attack() = 0;
        virtual void block() = 0;
        virtual void run() = 0;
};

#endif