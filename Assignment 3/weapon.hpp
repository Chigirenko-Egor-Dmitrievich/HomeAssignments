/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
    private:
        int damage;

    public:
     	Weapon(int dmg);
     	
    int getDamage() const;
};

#endif
