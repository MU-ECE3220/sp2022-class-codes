#include "static_variable_proto.h"

void incrementor(){
	static int x = 0;
	x++;
	printf("Value x: %d\n", x);
	decrement();
}

static void decrement() {
	int y = 0;
	y--;
	printf("Value y: %d\n", y);
}
