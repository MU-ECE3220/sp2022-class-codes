#include "Singleton.h"
#include "FileIO.h"

// Initialize the private "instance" attribute
Singleton *Singleton::instance = NULL;

// Implement getInstance() function. Only one instance will be created for Singleton class
Singleton *Singleton::getInstance(){
	if(!instance) {
		instance = new Singleton();
	}
	return instance;
}


// Implement getFile() function
FileIO Singleton::getFile() {
	return this->file;
}

// Implement setFile(FileIO file) function
void Singleton::setFile(FileIO file) {
	this->file = file;
}
