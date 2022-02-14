#include "const_example.h"

//const char *path = "files/star_wars_script.txt";

int write_to_file(const char *const path){
	path = "dummy.txt";
	FILE *file;
	file = fopen(path, "w");
	if(file == NULL) {
		fprintf(stderr, "Couldn't open file\n");
		return 1;
	}
	fprintf(file, "May the force be with you...\n");
	fclose(file); // without a potential memory leak
	return 0;
}
