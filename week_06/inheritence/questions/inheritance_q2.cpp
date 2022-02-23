#include<iostream> 
   
using namespace std; 

class A { 
	public: 
		void print() { cout <<"I am in Class A" << endl; } 
}; 
   
class B : public A { 
	public: 
		void print() { cout <<"I am in Class B" << endl; } 
}; 
   
class C: public B { 
	public: 
		void print() { cout <<"I am in Class C" << endl; } 
}; 
   
int main(void) {
	A a;
    // which print method will be invoked, for object A?
	a.print();
	B b;
    // which print method will be invoked, for object B?
	b.print();
	C c;
    // which print method will be invoked, for object C?
	c.print(); 
	return EXIT_SUCCESS;
} 