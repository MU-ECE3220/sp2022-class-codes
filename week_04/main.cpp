#include "Student.h"

int main() {

	int a = 5;
	cout << "Test " << a << "\n";

	Student *alice = new Student("Alice", 25);
	cout << "Name: "<< alice->getName() << ", Age: " << alice->getAge() << endl; 
	alice->setAge(24);
	cout << alice->getAge() << endl;
	
	delete alice;
	return EXIT_SUCCESS;
}
