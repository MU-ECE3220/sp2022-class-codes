#include "Parent.hpp"

class Child : public Parent { 
	public: 
		std::string child_data;
        Child();
        ~Child();
};