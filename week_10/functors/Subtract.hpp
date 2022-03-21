#include "MyArithmeticFunctor.hpp"

class Subtract: public MyArithmeticFunctor {
	public:
		Subtract();
		virtual double operator ()(double leftOp, double rightOp);
};