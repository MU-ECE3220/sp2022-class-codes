#include "Captain.hpp"

Captain::Captain(RowingBoat *rowingBoat) {
    _rowingBoat = rowingBoat;
}

void Captain::row() {
    _rowingBoat->row();
}

Captain::~Captain(){
    delete _rowingBoat;
}
