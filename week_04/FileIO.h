#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;

class FileIO {
	private:
		string _filename;
	public:
		bool readFile();
		bool writeFile(string filename);
		bool read_add_numbers_from_file(string filename);
		void setFilename(string filename);
		string getFilename();
		FileIO(string filename);
};
