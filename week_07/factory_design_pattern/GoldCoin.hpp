#include "Coin.hpp"

class GoldCoin : public Coin {
    public:
        std::string get_description();
    private:
        static std::string _description;
};