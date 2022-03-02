#include "Coin.hpp"

class CopperCoin : public Coin {
    public:
        std::string get_description();
    private:
        static std::string _description;
};