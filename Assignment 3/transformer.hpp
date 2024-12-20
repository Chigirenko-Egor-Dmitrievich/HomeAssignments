/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP
#include "weapon.hpp"
#include "fuelTank.hpp"

class transformer
{
    protected:
      int level;
      int strength;
      int ammo;
      Weapon* weapon;
      FuelTank fuelTank;

    public:
      transformer(int lvl, int str, int fl, int am, Weapon* wpn);
      virtual ~transformer();

    int getLevel() const;
    int getStrength() const;
    int getFuel() const;
    int getAmmo() const;

    void move();
    void fire();
    virtual void transform();
};

#endif
