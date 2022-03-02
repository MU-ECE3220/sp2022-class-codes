#include "Dog.hpp"
#include "Gorilla.hpp"
#include "animal_function.hpp"

int main() {

	// create objects of Dog and Gorilla
	//Dog(int numOfLegs, string dietType, string animalType);
	Dog *d1 = new Dog(4, "Everything", "Husky");
	Gorilla *g1 = new Gorilla(6, "Vegetarian", "SilverBack");
	// create a vector of Animal
	vector<Animal> animals;
	// push_back the animal objects (Dog, Gorilla)
	animals.push_back(*d1);
	animals.push_back(*g1);
	// call the leg count function
	cout << total_number_of_legs(animals) << endl;
	return EXIT_SUCCESS;
}
