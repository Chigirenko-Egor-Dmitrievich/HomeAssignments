/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP

#include "transformer.hpp"

class autobot: public transformer
{
    private:
	int repairPower;

    public:
        autobot(int lvl, int str, int fl, int am, Weapon* wpn, int repair);
	
        void repair();
        void transform() override;
};

#endif
