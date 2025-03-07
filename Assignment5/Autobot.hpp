/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment5
*/

#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP
#include "Transformer.hpp"
#include <string>

class Autobot: public Transformer
{
    private:
        int repairPower;
        std::string name;

    public:
        Autobot(const std::string& name, int lvl, int str, int fl, int am, Weapon* wpn, int repair);

        void repair();
        void transform() override;
        void openFire() override;
        void ult() override;
};

#endif








