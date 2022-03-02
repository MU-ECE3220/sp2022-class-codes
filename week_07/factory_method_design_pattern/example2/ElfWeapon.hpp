#include "Weapon.hpp"
#include "Blacksmith.hpp"

class ElfBlackSmith : public Blacksmith {
    public:
        Weapon manufactureWeapon(WeaponType weaponType);
};