/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment4
*/

#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP
#include "Transformer.hpp"

class Decepticon : public Transformer
{
    private:
        bool canFly;

    public:
        Decepticon(int lvl = 1, int str = 10, int am = 5, int fuelCapacity = 100, Weapon* wpn = nullptr, bool fly = false);

        bool getCanFly() const;
        void setCanFly(bool fly);
        void sabotage();
        void transform() override;
   
        friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
};
#endif
