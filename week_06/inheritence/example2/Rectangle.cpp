#include "Rectangle.hpp"

int Rectangle::getArea() {
    return (_width * _height);
}

// Define default constructor
Rectangle::Rectangle() {
    shape_type = "Rectangle";
}
// Define parameterized constructor, with constructor initialization list
Rectangle::Rectangle(int w, int h) : Shape(w, h) {
    shape_type = "Rectangle";
}