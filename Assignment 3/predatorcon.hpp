/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#ifndef PREDATORCON_HPP
#define PREDATORCON_HPP

#include "transformer.hpp"

class predatorcon: public transformer
{
    private:
	int energy;

    public:
	predatorcon(int lvl, int str, int fl, int am, Weapon* wpn, int en);
	
    int getEnergy() const;
    void setEnergy(int en);

    void hunt();
    void transform() override;
};

#endif
