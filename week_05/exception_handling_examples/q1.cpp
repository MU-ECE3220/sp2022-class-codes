#include <iostream>
using namespace std;

void fun() {
	// throw two different types "char" and "int"
	int x = 4;
	if(x < 0) {
		throw x;
	}
	else if(x == 4) {
		throw x;
	}
}

int main() {

	try {
		fun();
	}
	// can have multiple catch blocks?
	catch(char) {
		cerr << "Character exception" << endl;
	}
	catch(int a) {
		if(a < 0) {
			cerr << " 0> exception" << endl;
		}
		else if(a == 4) {
			cerr << "x =4 exception" << endl;
		}
	}

	return EXIT_SUCCESS;
}
