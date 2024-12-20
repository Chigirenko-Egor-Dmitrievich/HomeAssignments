/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#include "decepticon.hpp"
#include <iostream>

decepticon::decepticon(int lvl, int str, int fl, int am , Weapon* wpn, bool fly): transformer(lvl, str, fl, am, wpn), canFly(fly) {}
    
bool decepticon::getCanFly() const
{
    return canFly;
}

void decepticon::setCanFly(bool fly)
{
     canFly = fly;
}

void decepticon::sabotage()
{
    std::cout << "Sabotaging autobots" << '\n';
}

void decepticon::transform()
{
   std::cout << "Decepticon is transforming" << '\n';
}
