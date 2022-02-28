#include "ConcreteProductB.hpp"

std::string ConcreteProductB::getName() {
    return "type B";
}

ConcreteProductB::ConcreteProductB(){}

ConcreteProductB::~ConcreteProductB(){
    std::cout << "Product B destroyed\n";
}