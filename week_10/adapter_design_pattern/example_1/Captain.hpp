#include "RowingBoat.hpp"

class Captain {
    private:
        RowingBoat *_rowingBoat;
    public:
        void row();
        Captain(RowingBoat *rowingBoat);
        ~Captain();
};