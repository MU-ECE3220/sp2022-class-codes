#include "functions.hpp"
#define SIZE 5
   
int main() { 
	int a[SIZE] = {10, 50, 20, 5, 40};
	char c[SIZE] = {'a', 'z', 'e', 'b', 'c'};
	std::string s[SIZE] = {"luke", "leia", "obi-wan", "darth-vader", "han"};

	bubbleSort(a, SIZE);
	for(int i=0; i<SIZE; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	bubbleSort(c ,SIZE);
	for(int i=0; i<SIZE; i++) {
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;

	bubbleSort(s ,SIZE);
	for(int i=0; i<SIZE; i++) {
		std::cout << s[i] << " ";
	}
	std::cout << std::endl;
	return EXIT_SUCCESS; 
} 