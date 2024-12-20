/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment4
*/

#include <gtest/gtest.h>
#include "Autobot.hpp"
#include "Decepticon.hpp"
#include "Weapon.hpp"
#include "Predacon.hpp"

TEST(TransformerTest, CreationAndBasicMethods) {
    auto weapon = std::make_unique<Weapon>(20);
    Transformer transformer(5, 100, 30, 50, weapon.release());

    EXPECT_EQ(transformer.getLevel(), 5);
    EXPECT_EQ(transformer.getStrength(), 100);
    EXPECT_EQ(transformer.getAmmo(), 30);
    EXPECT_EQ(transformer.getFuel(), 50);

    transformer.move();
    EXPECT_EQ(transformer.getFuel(), 49);

    transformer.fire();
    EXPECT_EQ(transformer.getAmmo(), 29);
}

TEST(TransformerTest, MoveMethod) {
    auto weapon = std::make_unique<Weapon>(20);
    Transformer transformer(5, 100, 30, 50, weapon.release());

    transformer.move();
    EXPECT_EQ(transformer.getFuel(), 49);

    transformer.move();
    EXPECT_EQ(transformer.getFuel(), 48);
}

TEST(TransformerTest, FireMethod) {
    auto weapon = std::make_unique<Weapon>(20);
    Transformer transformer(5, 100, 30, 50, weapon.release());

    transformer.fire();
    EXPECT_EQ(transformer.getAmmo(), 29);

    transformer.fire();
    EXPECT_EQ(transformer.getAmmo(), 28);
}

TEST(TransformerTest, OperatorOverloads) {
    auto weapon1 = std::make_unique<Weapon>(20);
    auto weapon2 = std::make_unique<Weapon>(15);

    Transformer t1(5, 100, 30, 50, weapon1.release());
    Transformer t2(5, 80, 25, 40, weapon2.release());

    EXPECT_TRUE(t1 > t2);
    EXPECT_FALSE(t1 < t2);
    EXPECT_FALSE(t1 == t2);
}

TEST(AutobotTest, RepairMethod) {
    auto weapon = std::make_unique<Weapon>(20);
    Autobot autobot(5, 100, 30, 50, weapon.release(), 25);

    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    autobot.repair();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(output.str(), "Repairing with power: 25\n");
}

TEST(AutobotTest, TransformMethod) {
    auto weapon = std::make_unique<Weapon>(20);
    Autobot autobot(5, 100, 30, 50, weapon.release(), 25);

    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    autobot.transform();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(output.str(), "Autobot is transforming\n");
}

TEST(AutobotTest, OutputStream) {
    auto weapon = std::make_unique<Weapon>(20);
    Autobot autobot(5, 100, 30, 50, weapon.release(), 25);

    std::ostringstream output;
    output << autobot;
    EXPECT_NE(output.str().find("Repair Power: 25"), std::string::npos);
}

TEST(DecepticonTest, GetCanFlyMethod) {
    auto weapon = std::make_unique<Weapon>(25);
    Decepticon decepticon(6, 120, 35, 60, weapon.release(), true);

    EXPECT_TRUE(decepticon.getCanFly());
}

TEST(DecepticonTest, SetCanFlyMethod) {
    auto weapon = std::make_unique<Weapon>(25);
    Decepticon decepticon(6, 120, 35, 60, weapon.release(), true);

    decepticon.setCanFly(false);
    EXPECT_FALSE(decepticon.getCanFly());
}

TEST(DecepticonTest, SabotageMethod) {
    auto weapon = std::make_unique<Weapon>(25);
    Decepticon decepticon(6, 120, 35, 60, weapon.release(), true);

    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    decepticon.sabotage();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(output.str(), "Sabotaging Autobots\n");
}

TEST(DecepticonTest, TransformMethod) {
    auto weapon = std::make_unique<Weapon>(25);
    Decepticon decepticon(6, 120, 35, 60, weapon.release(), true);

    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    decepticon.transform();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(output.str(), "Decepticon is transforming\n");
}

TEST(DecepticonTest, OutputStream) {
    auto weapon = std::make_unique<Weapon>(25);
    Decepticon decepticon(6, 120, 35, 60, weapon.release(), true);

    decepticon.setCanFly(false);
    std::ostringstream output;
    output << decepticon;
    EXPECT_NE(output.str().find("Can Fly: No"), std::string::npos);
}

TEST(PredaconTest, GetEnergyMethod) {
    auto weapon = std::make_unique<Weapon>(30);
    Predacon predacon(7, 130, 40, 70, weapon.release(), 100);

    EXPECT_EQ(predacon.getEnergy(), 100);
}

TEST(PredaconTest, SetEnergyMethod) {
    auto weapon = std::make_unique<Weapon>(30);
    Predacon predacon(7, 130, 40, 70, weapon.release(), 100);

    predacon.setEnergy(150);
    EXPECT_EQ(predacon.getEnergy(), 150);
}

TEST(PredaconTest, HuntMethod) {
    auto weapon = std::make_unique<Weapon>(30);
    Predacon predacon(7, 130, 40, 70, weapon.release(), 100);

    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    predacon.hunt();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(output.str(), "Predacon is hunting\n");
}

TEST(PredaconTest, TransformMethod) {
    auto weapon = std::make_unique<Weapon>(30);
    Predacon predacon(7, 130, 40, 70, weapon.release(), 100);

    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    predacon.transform();
    std::cout.rdbuf(oldCoutBuffer);
    EXPECT_EQ(output.str(), "Predacon is transforming\n");
}

TEST(PredaconTest, OutputStream) {
    auto weapon = std::make_unique<Weapon>(30);
    Predacon predacon(7, 130, 40, 70, weapon.release(), 100);

    predacon.setEnergy(150);
    std::ostringstream output;
    output << predacon;
    EXPECT_NE(output.str().find("Energy: 150"), std::string::npos);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

