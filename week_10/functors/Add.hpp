#include "MyArithmeticFunctor.hpp"

class Add: public MyArithmeticFunctor {
	public:
		Add();
		virtual double operator ()(double leftOp, double rightOp);
};