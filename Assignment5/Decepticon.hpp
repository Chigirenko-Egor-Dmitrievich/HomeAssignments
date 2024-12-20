/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment5
*/

#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP
#include "transformer.hpp"
#include <string>

class Decepticon : public Transformer {
private:
    bool canFly;
    std::string name;
public:
    Decepticon(const std::string& name, int lvl, int str, int fl, int am, Weapon* wpn, bool fly);

    bool getCanFly() const;
    void setCanFly(bool fly);

    void sabotage();
    void transform() override;
    void openFire() override;
    void ulta() override;
};

#endif
