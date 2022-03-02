#include <string>
#ifndef COIN_H
#define COIN_H
class Coin {
    public:
        virtual std::string get_description() = 0;
        virtual ~Coin(){};
};
#endif