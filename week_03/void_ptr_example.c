#include<stdio.h>

int main() {
	void *ptr = NULL;
	int a = 5;
	char b = 'x';
	ptr = &a;
	//printf("Value: %d\n", *ptr);
	ptr = NULL;
	ptr = &b;
	printf("Char: %c\n", *(char*)ptr);
	
	return 0;
}
