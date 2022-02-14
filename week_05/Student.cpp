#include "Student.h"

string Student::getName() {
	return _name;
}

int Student::getAge() {
	return _age;
}

void Student::setName(string name) {
	// _name = name;
	this->_name = name;
}

void Student::setAge(int age) {
	this->_age = age;
}

Student::Student() {}

Student::Student(string name, int age) {
	this->_name = name;
	this->_age = age;
	Singleton::getInstance()->getFile().readFile();
}

Student::Student(Student &s) {
	this->_name = s._name;
	this->_age = s._age;
//	Singleton::getInstance()->getFile().readFile();
}

// Implement Destructor here
Student::~Student(){
	cout << "Student " << _name << " object is destroyed" << endl;
}
