/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment4
*/

#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP
#include "FuelTank.hpp"
#include <iostream>
#include <memory>

class Weapon;

class Transformer
{
    protected:
        int level;
        int strength;
        int ammo;
        FuelTank fuelTank;
        std::unique_ptr<Weapon> weapon;

    public:
        Transformer(int lvl = 1, int str = 10, int am = 5, int fuelCapacity = 100, Weapon* wpn = nullptr);

        virtual ~Transformer();

        int getLevel() const;
        int getStrength() const;
        int getAmmo() const;
        int getFuel() const;
        void setLevel(int lvl);
        void setStrength(int str);
        void setAmmo(int am);
        void setFuel(int fuel);

        friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

        bool operator>(const Transformer& other) const;
        bool operator<(const Transformer& other) const;
        bool operator==(const Transformer& other) const;

        void move();
        void fire();

        virtual void transform();
};

#endif
 
