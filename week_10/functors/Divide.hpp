#include "MyArithmeticFunctor.hpp"

class Divide: public MyArithmeticFunctor {
	public:
		Divide();
		virtual double operator ()(double leftOp, double rightOp);
};