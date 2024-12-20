/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP

#include "transformer.hpp"

class decepticon : public transformer
{
    private:
        bool canFly;

    public:
        decepticon(int lvl, int str, int fl, int am, Weapon* wpn, bool fly);

    bool getCanFly() const;
    void setCanFly(bool fly);
      
    void sabotage();
    void transform() override;
};

#endif
