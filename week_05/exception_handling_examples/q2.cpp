#include <iostream>
using namespace std;

int main() {

	try{
		// try throwing multiple different types for a single catch block
		throw "MIZ!";
	}
	// Can I have a single generic catch block for different types?
	return EXIT_SUCCESS;
}

