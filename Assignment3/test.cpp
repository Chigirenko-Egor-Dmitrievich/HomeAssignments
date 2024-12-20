/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment3
*/

#include <gtest/gtest.h>
#include "transformer.hpp"
#include "autobot.hpp"
#include "decepticon.hpp"
#include "predatorcon.hpp"
#include "weapon.hpp"

TEST(weaponTest, initialization)
{
   Weapon weapon(50);
   EXPECT_EQ(weapon.getDamage(), 50);
}

TEST(transformerTest, initializationAndMethods)
{
   Weapon weapon(50);
   transformer transformer(5, 100, 300, 50, &weapon);
   
   EXPECT_EQ(transformer.getLevel(), 5);
   EXPECT_EQ(transformer.getStrength(), 100);
   EXPECT_EQ(transformer.getFuel(), 300);
   EXPECT_EQ(transformer.getAmmo(), 50);
 
   transformer.move();
   EXPECT_EQ(transformer.getFuel(), 299); 
   
   transformer.fire();
   EXPECT_EQ(transformer.getAmmo(), 49);
   
   EXPECT_EQ(weapon.getDamage(), 50); 
}

TEST(autobotTest, initializationAndRepair)
{
   Weapon weapon(50);
   autobot autobot(5, 100, 300, 50, &weapon, 25);
   
   EXPECT_EQ(autobot.getLevel(), 5);
   EXPECT_EQ(autobot.getStrength(), 100);
   EXPECT_EQ(autobot.getFuel(), 300);
   EXPECT_EQ(autobot.getAmmo(), 50);
   
   autobot.repair();
   autobot.transform();
}

TEST(decepticonTest, initializationAndSabotage) {
   Weapon weapon(50);
   decepticon decepticon(6, 120, 400, 60, &weapon, true);
   
   EXPECT_TRUE(decepticon.getCanFly());
   
   decepticon.setCanFly(false);
   EXPECT_FALSE(decepticon.getCanFly());
   
   EXPECT_EQ(decepticon.getLevel(), 6);
   EXPECT_EQ(decepticon.getStrength(), 120);
   EXPECT_EQ(decepticon.getFuel(), 400);
   EXPECT_EQ(decepticon.getAmmo(), 60);
   
   decepticon.sabotage();
   decepticon.transform();
}

TEST(predatorconTest, initializationAndHunt)
{
   Weapon weapon(60);
   predatorcon predatorcon(7, 130, 500, 70, &weapon, 100);
   
   EXPECT_EQ(predatorcon.getLevel(), 7);
   EXPECT_EQ(predatorcon.getStrength(), 130);
   EXPECT_EQ(predatorcon.getFuel(), 500);
   EXPECT_EQ(predatorcon.getAmmo(), 70);
   EXPECT_EQ(predatorcon.getEnergy(), 100);
   
   predatorcon.setEnergy(150);
   EXPECT_EQ(predatorcon.getEnergy(), 150);
   
   predatorcon.hunt();
   predatorcon.transform();
}

int main(int argc, char **argv)
{
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
