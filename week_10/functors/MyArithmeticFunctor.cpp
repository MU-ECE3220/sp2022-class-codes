#include "MyArithmeticFunctor.hpp"

MyArithmeticFunctor::MyArithmeticFunctor(){}

double MyArithmeticFunctor::arithmetic_op(double leftOp, double rightOp, MyArithmeticFunctor *arit_func) {
	return (*arit_func)(leftOp, rightOp);
}