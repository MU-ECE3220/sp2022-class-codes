#include <iostream>
#include <string>
#include "Creator.hpp"
#include "ConcreteCreator.hpp"
#include "Product.hpp"

int main() {
  // Instantiate a ConcreteCreator object to Creator
  Creator *creator = new ConcreteCreator();
  
  // Create product A using Creator
  Product *p1 = creator->createProductA();
  // print product A
  std::cout << "Product type: " << p1->getName() << std::endl;
  // remove product
  creator->removeProduct(p1);

  // Create product B using Creator
  Product *p2 = creator->createProductB();
  // print product B
  std::cout << "Product type: " << p2->getName() << std::endl;
  // remove product
  creator->removeProduct(p2);
  
  delete creator;
  // delete creator
  return 0;
}