#include "Weapon.hpp"

class Blacksmith {
    public:
        virtual Weapon manufactureWeapon(WeaponType weaponType) = 0;
}