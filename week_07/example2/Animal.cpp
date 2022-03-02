#include "Animal.hpp"

void Animal::printAnimalInfo() {
	cout << "Type of Animal=" << this->animalType << ", Type of Diet=" << this->dietType << ", Num. of legs="<< this->numOfLegs << endl;
}

int Animal::countLegs(){
	return this->numOfLegs;
}
