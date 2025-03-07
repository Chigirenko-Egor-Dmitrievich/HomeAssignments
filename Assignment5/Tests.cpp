/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment5
*/

#include <gtest/gtest.h>
#include <vector>
#include <memory>
#include "Autobot.hpp"
#include "Decepticon.hpp"
#include "Transformer.hpp"

TEST(AutobotTest, DirectMethodCalls)
{
    Autobot a("A1", 1, 10, 50, 20, new Weapon(10), 5);
    EXPECT_NO_THROW(a.transform());
    EXPECT_NO_THROW(a.openFire());
    EXPECT_NO_THROW(a.ult());
}

TEST(DecepticonTest, DirectMethodCalls)
{
    Decepticon d("D2", 2, 15, 60, 30, new Weapon(15), true);
    EXPECT_NO_THROW(d.transform());
    EXPECT_NO_THROW(d.openFire());
    EXPECT_NO_THROW(d.ult());
}

TEST(TransformerTest, PointerCalls)
{
    Transformer* autobot = new Autobot("Autobot o5", 3, 12, 18, 21, new Weapon(24), 30);
    Transformer* decepticon = new Decepticon("Decepticon y4", 4, 16, 20, 24, new Weapon(28), 32);

    EXPECT_NO_THROW(autobot->transform());
    EXPECT_NO_THROW(autobot->openFire());
    EXPECT_NO_THROW(autobot->ult());

    EXPECT_NO_THROW(decepticon->transform());
    EXPECT_NO_THROW(decepticon->openFire());
    EXPECT_NO_THROW(decepticon->ult());

    delete autobot;
    delete decepticon;
}

TEST(TransformerTest, VectorOfTransformers)
{
    std::vector<std::unique_ptr<Transformer>> transformers;

    transformers.push_back(std::make_unique<Autobot>("Au Genesis1", 1, 5, 9, 15, new Weapon(19), 22));
    transformers.push_back(std::make_unique<Decepticon>("De Meg2", 8, 11, 14, 17, new Weapon(20), 23));
    transformers.push_back(std::make_unique<Transformer>("Tr Scrapper5", 3, 1, 13, 22, new Weapon(2)));

    for (int i = 0; i < 2; ++i)
    {
        transformers.push_back(std::make_unique<Autobot>("Bumblebee" + std::to_string(i + 1), 1 + i, 5 - i, 9 + i * 2, 15 + i * 3, new Weapon(19), 22 + i * 4));
        transformers.push_back(std::make_unique<Decepticon>("Megatron" + std::to_string(i + 2), 8 + i * 8, 11 + i * 9, 14 + i * 2, 17 + i * 3, new Weapon(20), 23 + i * 7));
        transformers.push_back(std::make_unique<Transformer>("Tr Optimus Prime" + std::to_string(i + 3), 3 + i * 9, 1 + i, 13 + i + 5, 22 + 6 * i, new Weapon(2)));
    }

    for (const auto& transformer : transformers)
    {
        EXPECT_NO_THROW(transformer->transform());
        EXPECT_NO_THROW(transformer->openFire());
        EXPECT_NO_THROW(transformer->ult());
    }
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

	
