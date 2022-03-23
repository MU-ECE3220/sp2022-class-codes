#include "Captain.hpp"
#include "FishingBoatAdapter.hpp"

int main() {
    Captain *captain = new Captain(new FishingBoatAdapter());
    captain->row();
    delete captain;
    return EXIT_SUCCESS;
}