/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment5
*/

#include "Autobot.hpp"
#include <iostream>
#include <string> 

Autobot::Autobot(const std::string& name, int lvl, int str, int fl, int am, Weapon* wpn, int repair): Transformer(name, lvl, str, fl, am, wpn), repairPower(repair), name(name) {}

void Autobot::repair()
{
	std::cout << "Repairing  with power: " << repairPower << '\n';
}

void Autobot::transform()
{
	std::cout<< "Autobot " << name << " is trnasforming" << '\n';
}

void Autobot::openFire()
{
	std::cout << "Autobot " << name << " opened fire" << '\n';
}

void Autobot::ult()
{
	std::cout << "Autobot " << name << " used it's ult" << '\n';
}











