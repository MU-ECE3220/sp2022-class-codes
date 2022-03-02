#include <exception>

class UndefinedCoinException : public std::exception {
    public:
        const char* what() const throw();
};