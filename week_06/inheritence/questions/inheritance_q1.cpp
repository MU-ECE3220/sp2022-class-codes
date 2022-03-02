#include<iostream> 
   
using namespace std;

class A { 
    public: 
        // Default constructor for Class A
        A(){ cout << "Class A's constructor is called" << endl; }
}; 
   
class B : public A { 
    public:
        // Default constructor for Class B
        B(){ cout << "Class B's constructor is called" << endl; } 
}; 
   
class C: public A, public B { 
    public:
        // Default constructor for Class C 
        C() { cout << "Class C's constructor is called" << endl; }
}; 
   
int main() {
    // Which constructors will be called?
    // If multiple constructors are invoked, what will be the order?
    C c;
    return EXIT_SUCCESS;
} 
