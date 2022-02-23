#include <iostream>

class MyClass {
	private:
	public:
		// define an int function
		int func();
		// define a void function with int arg
		void func(int x);
		// define a void function with two int args
		void func(int x, int y);
		// define a void function with const char*
		void func(const char *c);
		// definte default constructor
		MyClass();

};
