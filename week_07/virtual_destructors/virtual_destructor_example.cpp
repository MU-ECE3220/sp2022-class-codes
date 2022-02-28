#include <iostream> 
#include<string> 
  
class Parent { 
	public: 
		std::string print() { 
			return "This is Parent class"; 
		} 
        Parent(){
            std::cout << "Parent Constructor\n";
        }
        virtual ~Parent(){ 
            std::cout << "Parent Destructor\n";
        }
}; 
  
class Child : public Parent { 
	public: 	
		std::string print() { 
			return "This is Child class"; 
		} 
        Child(){
            std::cout << "Child Constructor\n";
        }
        ~Child(){ 
            std::cout << "Child Destructor\n";
        }
}; 
  
void describe(Parent *c) {
	std::cout << c->print() << std::endl;
} 
  
int main() {  
	Parent *c = new Child();
    //c->print();
	describe(c);
    delete c; 
	return EXIT_SUCCESS;
} 