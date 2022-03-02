#include <iostream>
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal {

	public:
		void printAnimalInfo();
		int countLegs(); // getLegs();
	protected:
		int numOfLegs;
		string dietType;
		string animalType;
};
#endif
