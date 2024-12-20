/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#include "transformer.hpp"
#include "weapon.hpp"
#include <iostream>

transformer::transformer(int lvl, int str, int fl, int am, Weapon* wpn): level(lvl), strength(str), ammo(am), weapon(wpn), fuelTank(fl) {}

transformer::~transformer() {}

int transformer::getLevel() const
{ 
    return level;
}

int transformer::getStrength() const
{
    return strength;
}

int transformer::getFuel() const 
{
    return fuelTank.getFuelAmount();
}

int transformer::getAmmo() const 
{
    return ammo;
}

void transformer::move()
{ 
    if(fuelTank.getFuelAmount() > 0)
    {
        fuelTank.consume();
    }
}

void transformer::fire()
{
    if (ammo>0)
    {
        ammo--;
	fuelTank.consume();
    }
}

void transformer::transform()
{
    std::cout << "Transformer is transforming" << '\n';
}
