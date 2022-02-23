#include <iostream>

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    protected:
        int _width;
        int _height;
    public:
	    std::string shape_type = "NO SPECIFIC TYPE";
        void setWidth(int w);
        void setHeight(int h);
        int getWidth();
        int getHeight();
	    void printShapeType();
        Shape();
        Shape(int,int);
};
#endif