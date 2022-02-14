#include "Student.h"
//#include "FileIO.h"
#include "Singleton.h"

int main() {

	int a = 5;
	cout << "Test " << a << "\n";

	//Student s1("Ekincan", 10);
	//Student *s2 = new Student("Alice", 20);
	//delete s2;

	FileIO *f = new FileIO();
	f->setFilename("star_wars_script.txt");
	//f.writeFile("star_wars_script.txt");
	//f.readFile();
	Singleton::getInstance()->setFile(*f);

	Student s1("Ekin", 10);
	Student *s2 = new Student("Jaired", 20);
	/*
	Student *alice = new Student("Alice", 25);
	cout << "Name: "<< alice->getName() << ", Age: " << alice->getAge() << endl; 
	alice->setAge(24);
	cout << alice->getAge() << endl;
	
	delete alice;

	*/
	return EXIT_SUCCESS;
}
