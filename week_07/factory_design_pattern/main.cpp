#include <iostream>
#include "CoinFactory.hpp"
#include "CoinType.hpp"

int main() {
    Coin *c1 = CoinFactory::get_coin(CoinType::coin_type::GOLD_COIN);
    std::cout << c1->get_description() << std::endl;
    Coin *c2 = CoinFactory::get_coin(CoinType::coin_type::COPPER_COIN);
    std::cout << c2->get_description() << std::endl;
    delete c1;
    delete c2;
    return EXIT_SUCCESS;
}