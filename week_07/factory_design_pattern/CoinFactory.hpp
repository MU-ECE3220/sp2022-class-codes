#include "Coin.hpp"
#include "CoinType.hpp"

class CoinFactory {
    public:
        static Coin* get_coin(enum CoinType::coin_type);
};