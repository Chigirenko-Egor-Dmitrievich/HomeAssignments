/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#ifndef FUELTANK_HPP
#define FUELTANK_HPP

class FuelTank
{
    private:
	int fuelAmount;

    public:
	FuelTank(int amount): fuelAmount(amount){}
	void consume() 
	{
	    if (fuelAmount > 0)
	    {
	        fuelAmount--;
	    }
	}
	int getFuelAmount() const 
	{
	    return fuelAmount;
	} 
	
};
#endif
