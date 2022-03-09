#include "DragonSlayingStrategy.hpp"

class DragonSlayer {
    private:
        DragonSlayingStrategy *_strategy;
    public:
        DragonSlayer(DragonSlayingStrategy *strategy);
        ~DragonSlayer();
        void changeStrategy(DragonSlayingStrategy *strategy);
        void goToBattle();
};