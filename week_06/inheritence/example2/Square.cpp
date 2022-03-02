#include "Square.hpp"

int Square::getArea(){
    // add an exception handling here
    if(_width != _height) {
        std::cerr << "_height:" << _height << ", _width:" << _width <<std::endl;
        throw this;
    }
    return (_width * _height);		
}

Square::Square(){
	shape_type = "Square";
}