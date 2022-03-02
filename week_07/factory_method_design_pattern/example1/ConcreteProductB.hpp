#include "Product.hpp"
/*
 * Concrete Product
 * define product to be created
 */
class ConcreteProductB : public Product {
    public:
        ~ConcreteProductB();
        ConcreteProductB();
        std::string getName();  
        // ...
};