#include "MyArithmeticFunctor.hpp"
#include "Multiply.hpp"
#include "Add.hpp"
#include "Divide.hpp"
#include "Subtract.hpp"

int main() {
	double a = 2.0;
	double b = 3.6;
	MyArithmeticFunctor *may;
    MyArithmeticFunctor *fMul = new Multiply();
	MyArithmeticFunctor *fAdd = new Add();
	MyArithmeticFunctor *fDiv = new Divide();
    MyArithmeticFunctor *fSub = new Subtract();

	std::cout << "Multiply: " << may->arithmetic_op(a, b, fMul) << std::endl;
	std::cout << "Divide: " << may->arithmetic_op(a, b, fDiv) << std::endl;
    std::cout << "Add: " << may->arithmetic_op(a, b, fAdd) << std::endl;
    std::cout << "Subtract: " << may->arithmetic_op(a, b, fSub) << std::endl;

    delete fMul; 
    delete fAdd;
    delete fSub;
    delete fDiv;
    
	return EXIT_SUCCESS;
}