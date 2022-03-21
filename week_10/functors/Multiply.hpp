#include "MyArithmeticFunctor.hpp"

class Multiply: public MyArithmeticFunctor {
	public:
		Multiply();
		virtual double operator ()(double leftOp, double rightOp);
};