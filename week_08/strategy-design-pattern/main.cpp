#include "DragonSlayer.hpp"
#include "SpellStrategy.hpp"
#include "MeleeStrategy.hpp"
#include "ProjectileStrategy.hpp"

int main() {
    DragonSlayer ekin(new SpellStrategy);
    ekin.goToBattle();
    ekin.changeStrategy(new MeleeStrategy);
    ekin.goToBattle();
    ekin.goToBattle();
    ekin.changeStrategy(new ProjectileStrategy);
    ekin.goToBattle();
    return EXIT_SUCCESS;
}