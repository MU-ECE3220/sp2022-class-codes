#include <iostream>
#include <string>
#include<fstream>

using namespace std;

void error_function(const string &x) {

}

void some_other_function(const std::string &y) {
	// Do stuff
	error_function(y);
	// Do more stuff
}

int main() {
	try{
		some_other_function("numberss.txt");
	} // implement the catch block

	return EXIT_SUCCESS;
}
