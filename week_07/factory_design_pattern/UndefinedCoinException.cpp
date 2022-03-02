#include "UndefinedCoinException.hpp"

const char* UndefinedCoinException::what () const throw () {
    return "This is not a coin! Guards!!!\n";
}
