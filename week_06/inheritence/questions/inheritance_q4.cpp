#include<iostream> 
   
using namespace std; 
class A { 
	public:
		char x = 'A'; 
		A() { cout << "Class A's constructor is called" << endl; } 
}; 
   
class B { 
	public: 
		char x = 'B';
		B() { cout << "Class B's constructor is called" << endl; } 
}; 
   
class C: public A, public B { 
	public:
		C() { cout << "Class C's constructor is called" << endl; } 
		void print() {
			cout << "Value is: " << x <<endl;
		}
}; 
   
int main() { 
	C c; 
	c.print();
	return EXIT_SUCCESS;
} 
