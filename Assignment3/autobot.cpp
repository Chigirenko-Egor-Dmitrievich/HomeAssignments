/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#include "autobot.hpp"
#include <iostream>

autobot::autobot(int lvl, int str, int fl, int am, Weapon* wpn, int repair): transformer(lvl, str, fl, am, wpn), repairPower(repair){}

void autobot::repair()
{
    std::cout << "Repairing with power: " << repairPower << '\n';
}

void autobot::transform()
{
    std::cout << "Autobot is transforming" << '\n';
}
