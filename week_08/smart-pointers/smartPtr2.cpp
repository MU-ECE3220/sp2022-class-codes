#include<iostream>
#include<memory>

void fun(int);

void fun(int size)
{
	std::unique_ptr<int[]> ptr(new int[size]());
	std::cout << "Enter some intergers" << std::endl;
	int k=0;
	while(k!=size){
		int a;
		std::cin>>a;
		if(a < 0){
			std::cout << "Invalid number" << std::endl;
			return;
		}
		ptr[k] = a;
		k++;
	}

	for(int i=0; i<size; i++){
		std::cout << "Num #" << (i+1) << ": " << (ptr[i]) << std::endl;
		if(i!=0)
			ptr[0] += (ptr[i]);
	}

	std::cout << "Sum is: " << ptr[0] << std::endl;
}

int main() {
	fun(3);
	std::cout << "Complete" << std::endl;
	return EXIT_SUCCESS;
}
