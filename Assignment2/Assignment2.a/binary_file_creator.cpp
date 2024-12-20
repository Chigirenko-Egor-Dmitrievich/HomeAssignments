/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment2.a
*/

#include <iostream>
#include <fstream>
#include <cstddef>

int main()
{
    std::ofstream outfile;
    outfile.open("source.txt", std::ios::binary | std::ios::out);
    
    size_t size;
    std::cout << "Input size of array: ";
    std::cin >> size;
    
    std::cout << "Input elements of array: ";
    char *array = new char[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    
    outfile.write(array, size);
    outfile.close();
    
    delete[] array;

    return 0;
}
