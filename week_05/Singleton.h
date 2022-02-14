#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
#include "FileIO.h"

using namespace std;

class Singleton {
	private:
		// define static member for Singleton class
		static Singleton *instance;
		// define a constructor
		Singleton(){};
		// define a FileIO attribute
		FileIO file;
	public:
		// a static function that gets the instance
		static Singleton *getInstance();
		// setter/getter functions for file
		void setFile(FileIO file);
		FileIO getFile();
};
#endif
