#include "FileIO.h"

bool FileIO::readFile() {
	ifstream my_file;
	my_file.open(_filename);
	string data;
	if(!my_file){
		cerr << "Cannot open file" << endl;
		return false;
	}
	while(getline(my_file, data)) {
		cout << data << endl;
	}
	my_file.close();
	return true;
}

bool FileIO::writeFile(string filename) {
	ofstream my_file;
	my_file.open(filename, ios::app);
	if(my_file) {
		my_file << "Darth Vader: I am your father Luke!\n";
		my_file << "Nooooooo!!\n";
		my_file.close();
		return true;
	}
	return false;
}

bool FileIO::read_add_numbers_from_file(string filename) {

	return false;
}

void FileIO::setFilename(string filename) {
	_filename = filename;
}

string FileIO::getFilename() {
	return _filename;
}

FileIO::FileIO(string filename){
	// setFilename(filename);
	_filename = filename;
}
