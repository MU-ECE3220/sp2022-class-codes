#include <iostream>
#include <string>
#include<fstream>

using namespace std;

void error_function(const string &x) {
	ifstream file;
	file.open(x);
	cout << "inside error function\n";
	//if(!file) {
		//throw runtime_error("Variable x: Could not open file\n");
	//}
}

void some_other_function(const std::string &y) {
	// Do stuff
	error_function(y);
	// Do more stuff
}

int main() {
	//try{
		some_other_function("numberss.txt");
	//} // implement the catch block
	//catch(exception &ex){
	//	cerr << "Exception info: " << ex.what() << endl;
	//}
	cout << "End of program" << endl;

	return EXIT_SUCCESS;
}
