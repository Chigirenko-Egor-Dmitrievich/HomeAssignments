/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment5
*/

#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP
#include "Weapon.hpp"
#include "FuelTank.hpp"
#include <string> 

class Transformer{
protected:
      std::string name;
      int level;
      int strength;
      int ammo;
      Weapon* weapon;
      FuelTank fuelTank;
public:
      Transformer(const std::string& name ,int lvl,int str, int fl,int am,Weapon* wpn);
    virtual ~Transformer();
    int getLevel() const;
    int getStrength() const;
    int getFuel() const;
    int getAmmo() const;
    void move();
    void fire();
    virtual void transform();
    virtual void openFire();
    virtual void ulta();
};
#endif
