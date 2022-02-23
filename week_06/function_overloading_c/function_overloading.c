#include <stdio.h>

// define function prototypes, one with a parameter and one with no parameter
// void func();
void func(int x);

int main(){
	// call two functions
	// func();
	func(2);
	return 0;
}

// implement function with no parameter
// void func() {
// 	printf("No Value\n");
// }

// implement function with one parameter
void func(int x) {
	printf("Value x: %d\n",x);
}
