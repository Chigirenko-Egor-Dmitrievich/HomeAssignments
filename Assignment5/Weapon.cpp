/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment5
*/

#include "Weapon.hpp"

Weapon::Weapon(int dmg) : damage(dmg){}

int Weapon::getDamage() const {
    return damage;
}
