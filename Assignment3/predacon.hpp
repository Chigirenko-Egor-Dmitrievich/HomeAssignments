/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#ifndef PREDACON_HPP
#define PREDACON_HPP

#include "transformer.hpp"

class predacon: public transformer
{
    private:
	int energy;

    public:
	predacon(int lvl, int str, int fl, int am, Weapon* wpn, int en);
	
        int getEnergy() const;
        void setEnergy(int en);

        void hunt();
        void transform() override;
};

#endif
