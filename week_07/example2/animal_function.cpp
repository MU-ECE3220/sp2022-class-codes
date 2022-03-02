#include "animal_function.hpp"

int total_number_of_legs(vector<Animal> list) {
	int totalLegs = 0;
	// implement the leg count
	for(Animal a : list) {
		totalLegs += a.countLegs();
	}
	return totalLegs;
}

int num_of_diet_type(vector<Animal> list, string dietType) {
	return 0;
}
