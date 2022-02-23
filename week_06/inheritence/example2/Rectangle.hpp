#include "Shape.hpp"

class Rectangle: public Shape {
   public:
      int getArea();
      Rectangle();
	   Rectangle(int w, int h);
};