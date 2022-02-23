#include<iostream>
using namespace std;

class A { 
	public: 
		const char x = 'x';
		void print(){ 
			cout << x << endl;
		}
	protected: 
		const char y = 'y'; 
	private: 
		const char z = 'z'; 
}; 
  
class B : public A { 
	public:
		void print() { 
			cout << x << endl;
			cout << y << endl;
			//cout << z << endl;
		}
}; 
  
class C : protected A { 
	public:
		void print() { 
			cout << x << endl;
			cout << y << endl;
			//cout << z << endl;
		}	
}; 
  
class D : private A { 
	public:
		void print() { 
			cout << x << endl;
			cout << y << endl;
			//cout << z << endl;
		}
}; 

int main() {
	A a;
	B b;
	C c;
	D d;

	d.print();
	//cout << d.x << endl;
	
	return EXIT_SUCCESS;
}