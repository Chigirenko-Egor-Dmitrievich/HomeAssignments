/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#include "predatorcon.hpp"
#include <iostream>

predatorcon::predatorcon(int lvl, int str, int fl, int am, Weapon* wpn, int en): transformer(lvl, str, fl, am, wpn), energy(en) {}

int predatorcon::getEnergy() const
{
    return energy;
}

void predatorcon::setEnergy(int en)
{
    energy = en;
}

void predatorcon::hunt()
{
    std::cout << "Predatorcon is hunting" << '\n';
}

void predatorcon::transform()
{
    std::cout << "Predatorcon is transforming" << '\n';
}
