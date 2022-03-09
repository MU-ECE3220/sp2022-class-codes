#ifndef DRAGONSLAYINSTRATEGY_H
#define DRAGONSLAYINSTRATEGY_H
#include<iostream>
class DragonSlayingStrategy {
    public:
        virtual void execute() = 0;
        virtual ~DragonSlayingStrategy(){};
};
#endif