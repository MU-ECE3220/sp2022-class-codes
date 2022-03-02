#include "Product.hpp"
/*
 * Concrete Product
 * define product to be created
 */
class ConcreteProductA : public Product {
    public:
        ~ConcreteProductA();
        ConcreteProductA();
        std::string getName();
};