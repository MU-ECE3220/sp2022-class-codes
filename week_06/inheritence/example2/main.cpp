
#include "Rectangle.hpp"
#include "Square.hpp"

int main() {
	Rectangle rect(5,3);
	// Rectangle rect;
	// rect.setWidth(5);
	// rect.setHeight(3);
	rect.printShapeType();
	std::cout << "Area: " << rect.getArea() << std::endl; 

	// Square *sq = new Square;
	// try {
	// 	sq->setWidth(5);
	// 	sq->setHeight(5);
	// 	std::cout << "Area: " << sq->getArea() << std::endl;
	// 	sq->printShapeType();
	// } catch(Square *s) { //type of exception?
	// 	std::cerr << "Exception caught for: " << s->shape_type << std::endl;
	// 	// error message for exception
	// }
	
	//delete sq;

	return EXIT_SUCCESS;
}