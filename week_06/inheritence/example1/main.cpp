
#include "Child.hpp"

int main() { 
	Child c_obj;
	// set public child_data attribute
	c_obj.child_data = "This is child data\n";
	// set public parent_data attribute
	c_obj.parent_data = "This is parent data\n";

	// printing attributes of child
	std::cout << "Child: " << c_obj.child_data;
	std::cout << "Parent: " << c_obj.parent_data;
	return 0; 
}