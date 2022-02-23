#include <iostream>

using namespace std;

// void func();
int func();
void func(int x);
void func(int x, int y);
void func(char *y);

int main(){

	func();

	func(2);
	return 0;
}

// void func(){
// 	cout << "Test 0\n";
// }

int func(){
	cout << "Test (int) 0\n";
    return 0;
}

void func(int x){
	cout << "Test 1: " << x << endl;
}

void func(int x, int y){
	cout << "Test 2: " << x << y << endl;
}

void func(char *y){
	cout << "Test 3: " << y << endl;
}