#include "Felidae.hpp"

void Felidae::make_sound() {
	std::cout << _species << " says: ROAAAR!!!\n";
}

void Felidae::set_species(std::string species) {
	_species = species;
}

std::string Felidae::get_species() {
	return _species;
}

bool Felidae::hunt() {
	return false;
}