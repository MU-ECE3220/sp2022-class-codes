#include "ConcreteProductA.hpp"

std::string ConcreteProductA::getName() {
    return "type A";
}

ConcreteProductA::ConcreteProductA(){}

ConcreteProductA::~ConcreteProductA(){
    std::cout << "Product A destroyed\n";
}