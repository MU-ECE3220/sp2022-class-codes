#include "MyClass.hpp"

// define an int function
int MyClass::func() {
    std::cout << "int function" << std::endl;
    return 0;
}

// define a void function with int arg
void MyClass::func(int x) {
    std::cout << "void function one int arg" << x << std::endl;
}
		// define a void function with two int args
void MyClass::func(int x, int y) {
    std::cout << "void function two int arg" << x << " " << y << std::endl;
}
		// define a void function with const char*
        
void MyClass::func(const char *c) {
    std::cout << "void function char* arg" << c << std::endl;
}

// definte default constructor
MyClass::MyClass() {}