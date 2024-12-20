/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment5
*/

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
private:
    	int damage; 
public:
     	Weapon(int dmg);
     	
     	int getDamage() const;
};
#endif
