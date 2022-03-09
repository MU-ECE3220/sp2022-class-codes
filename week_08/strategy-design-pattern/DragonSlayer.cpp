#include "DragonSlayer.hpp"

DragonSlayer::DragonSlayer(DragonSlayingStrategy *strategy) {
    _strategy = strategy;
}

DragonSlayer::~DragonSlayer() {
    delete _strategy;
}

void DragonSlayer::changeStrategy(DragonSlayingStrategy *strategy){
    delete _strategy;
    _strategy = strategy;
}

void DragonSlayer::goToBattle() {
    _strategy->execute();
}