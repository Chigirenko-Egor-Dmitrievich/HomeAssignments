/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment4
*/

#include "Weapon.hpp"

Weapon::Weapon(int dmg) : damage(dmg) {}
int Weapon::getDamage() const { return damage; }
void Weapon::setDamage(int dmg) { damage = dmg; }
std::ostream& operator<<(std::ostream& os, const Weapon& weapon) {
   os << "Weapon damage: " << weapon.damage;
   return os;
}
bool Weapon::operator>(const Weapon& other) const { return damage > other.damage; }
bool Weapon::operator<(const Weapon& other) const { return damage < other.damage; }
bool Weapon::operator==(const Weapon& other) const { return damage == other.damage; }
