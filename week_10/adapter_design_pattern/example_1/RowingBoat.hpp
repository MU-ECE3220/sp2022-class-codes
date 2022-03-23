#include <iostream>
#ifndef ROWINGBOAT_H
#define ROWINGBOAT_H
class RowingBoat {
    public:
        virtual void row() = 0;
        virtual ~RowingBoat(){};
};
#endif