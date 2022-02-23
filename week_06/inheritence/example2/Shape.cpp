#include "Shape.hpp"

void Shape::setWidth(int w) {
    this->_width = w;
}

void Shape::setHeight(int h) {
    _height = h;
}

int Shape::getWidth() {
    return _width;
}

int Shape::getHeight() {
    return _height;
}

void Shape::printShapeType() {
	std::cout << "My shape is: " << shape_type << std::endl;
}

Shape::Shape(){}

Shape::Shape(int w, int h) : _width(w), _height(h) {}