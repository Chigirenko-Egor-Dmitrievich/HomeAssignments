/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment1
*/

#include <iostream>
#include "hello.hpp"

int main()
{
    std::cout << hello("World") << std::endl;
    
    std::string name;
    std::cout << "Write name or None to end program: ";
    std::cin >> name;

    while (name != "None")
    {
        std::cout << hello(name) << std::endl;
        std::cout << "Write name or None to end program: ";
        std::cin >> name;
    }

    return 0;
}
