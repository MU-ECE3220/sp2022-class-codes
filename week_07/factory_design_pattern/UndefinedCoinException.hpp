#include <exception>

// inherit exception class
// override *what function from exception
class UndefinedCoinException : public std::exception {
    public: 
	    const char *what() const throw ();
};