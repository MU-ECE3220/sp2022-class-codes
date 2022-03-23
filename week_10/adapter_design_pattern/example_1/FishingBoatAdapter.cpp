#include "FishingBoatAdapter.hpp"

//

FishingBoatAdapter::FishingBoatAdapter() {
    _boat = new FishingBoat();
}

void FishingBoatAdapter::row() {
    _boat->sail();
}

FishingBoatAdapter::~FishingBoatAdapter(){
    delete _boat;
}