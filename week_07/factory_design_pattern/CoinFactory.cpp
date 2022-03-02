#include "CoinFactory.hpp"
#include "GoldCoin.hpp"
#include "CopperCoin.hpp"

Coin* CoinFactory::get_coin(enum CoinType::coin_type type) {
    if(type == CoinType::coin_type::GOLD_COIN){
        return new GoldCoin();
    }
    else if(type == CoinType::coin_type::COPPER_COIN){
        return new CopperCoin();
    }
    else {
        throw "This is not a valid coin!";
    }
}