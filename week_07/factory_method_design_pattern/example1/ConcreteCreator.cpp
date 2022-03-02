#include "ConcreteCreator.hpp"
#include "ConcreteProductB.hpp"
#include "ConcreteProductA.hpp"

Product* ConcreteCreator::createProductA() {
    return new ConcreteProductA();
}
  
Product* ConcreteCreator::createProductB() {
    return new ConcreteProductB();
}
  
void ConcreteCreator::removeProduct(Product *product) {
    delete product;
}