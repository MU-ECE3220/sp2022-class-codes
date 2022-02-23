#include <iostream> 
#include<string> 

using namespace std; 
  
class Parent { 
	public: 
		virtual string print() { 
			return "This is Parent class"; 
		} 
}; 
  
class Child : public Parent { 
	public: 	
		string print() { 
			return "This is Child class"; 
		} 
}; 
  
void describe(Parent *c) {
	cout << c->print() << endl;
} 
  
int main() {  
	Child *c = new Child();
	describe(c); 
	return EXIT_SUCCESS;
} 