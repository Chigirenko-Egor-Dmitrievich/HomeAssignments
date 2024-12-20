/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment2.a
*/

#include "upside_down.hpp"
#include <algorithm>
#include <cstddef>

void upside_down(char *array, const size_t &size)
{
    for (int i = 0; i < size/2; i++)
    {
        std::swap(array[i], array[size - i - 1]);
    }
}
