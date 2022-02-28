#include<iostream>
#ifndef PRODUCT_H
#define PRODUCT_H
/*
 * Product
 * products implement the same interface so that the classes can refer
 * to the interface not the concrete product
 */
class Product {
    public:
        virtual ~Product() {};
        virtual std::string getName() = 0;
        // ...
};
#endif