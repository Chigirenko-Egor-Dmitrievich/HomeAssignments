/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#include "predacon.hpp"
#include <iostream>

predacon::predacon(int lvl, int str, int fl, int am, Weapon* wpn, int en): transformer(lvl, str, fl, am, wpn), energy(en) {}

int predacon::getEnergy() const
{
    return energy;
}

void predacon::setEnergy(int en)
{
    energy = en;
}

void predacon::hunt()
{
    std::cout << "Predacon is hunting" << '\n';
}

void predacon::transform()
{
    std::cout << "Predacon is transforming" << '\n';
}
