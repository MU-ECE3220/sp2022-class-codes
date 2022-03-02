#include <iostream>
using namespace std;

// implement division function
int division(int a, int b) {
	cout << "Division\n";
	if(b == 0) {
		throw runtime_error("Division by zero\n");
	}
	return a/b;
}

int main () {
	int a = 5, b = 0;
	try {
		cout << "Before division\n";
	// surround try-catch block
		division(a, b);
	} catch(exception &ex){
		cerr << ex.what();
	}
	cout << "After division\n";
	return EXIT_SUCCESS;
}
