#include "Creator.hpp"
/*
 * Concrete Creator
 * implements factory method that is responsible for creating
 * one or more concrete products ie. it is class that has
 * the knowledge of how to create the products
 */
class ConcreteCreator : public Creator {
    public:
        ~ConcreteCreator() {};
        Product* createProductA();
        Product* createProductB();
        void removeProduct(Product *product);
        // ...
};