#include "MyClass.hpp"

int main(){

	//instantiate MyClass
	MyClass *mc = new MyClass();
	//call func()
	mc->func();
	//call func(2)
	mc->func(2);
	// define const char *c
	const char *c = "some message";
	//call funct(c)
	mc->func(c);
	// delete MyClass object
	delete mc;
	return EXIT_SUCCESS;
}