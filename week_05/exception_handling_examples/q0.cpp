#include <iostream>

using namespace std;

int main() {

	int x = 9;
	// write try block, throw variabla as exception
	try {
		if(x < 0) {
			throw x;
		}
		cout << "Value is: " << x << endl;
	}
	// implement catch block, print the thrown exception
	catch(int a) {
		cerr << "The Exception was caused by: " << a << endl;
	}
	cout << "After catch\n";
	return EXIT_SUCCESS;
}

