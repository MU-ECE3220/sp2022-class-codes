#ifndef MY_ARITMETIC_FUNCTOR_H
#define MY_ARITMETIC_FUNCTOR_H
#include<iostream>

class MyArithmeticFunctor {
	public:
		MyArithmeticFunctor();
		virtual double operator ()(double leftOp, double rightOp) = 0;
		double arithmetic_op(double leftOp, double rightOp, MyArithmeticFunctor *arit_func);
};
#endif