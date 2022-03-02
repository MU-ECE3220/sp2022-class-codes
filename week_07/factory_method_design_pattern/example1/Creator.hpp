#include "Product.hpp"
#ifndef CREATOR_H
#define CREATOR_H
/*
 * Creator
 * contains the implementation for all of the methods
 * to manipulate products except for the factory method
 */
class Creator {
    public:
        virtual ~Creator() {}
        virtual Product* createProductA() = 0;
        virtual Product* createProductB() = 0;
        virtual void removeProduct(Product *product) = 0;
        // ...
};
#endif