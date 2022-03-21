#include "Subtract.hpp"

Subtract::Subtract() {}

double Subtract::operator ()(double leftOp, double rightOp) { 
    return (leftOp - rightOp); 
}