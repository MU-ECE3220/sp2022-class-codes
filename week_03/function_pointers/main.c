#include "function_pointer.h"
#include "math_functions.h"

int main() {
	//void (*f_ptr)() = function_ptr_2;
	//f_ptr(6);

	float (*m_funcs[4])(float, float) = {add, sub, div, mul};
	//m_funcs[0] = add;

	int choice = 1;
	while(choice >= 0) {
		scanf("%d", &choice);
		if(choice>= 0 && choice <=3) {
			printf("Value: %f\n", m_funcs[choice](2.0, 5.0));
		}
		else {
			fprintf(stderr, "something went wrong!\n");
		}
	}
	return 0;
}
