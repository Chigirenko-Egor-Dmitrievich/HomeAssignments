/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#include "weapon.hpp"

Weapon::Weapon(int dmg): damage(dmg){}

int Weapon::getDamage() const
{
    return damage;
}
