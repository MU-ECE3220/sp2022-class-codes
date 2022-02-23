#include "Square.hpp"

int Square::getArea(){
    // add an exception handling here
    return (_width * _height);		
}

Square::Square(){
	shape_type = "Square";
}