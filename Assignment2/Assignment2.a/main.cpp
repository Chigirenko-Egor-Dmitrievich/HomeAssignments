/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment2.a
*/

#include <fstream>
#include <filesystem>
#include <cstddef>
#include "upside_down.hpp"

int main()
{
    std::ifstream infile;
    infile.open("source.txt", std::ios::binary| std::ios::in);
    
    size_t size = std::filesystem::file_size("source.txt");
    
    char *array = new char[size];
    
    infile.read(array, size);
    infile.close();
    
    upside_down((char*)&array, size);
    
    std::ofstream outfile;
    outfile.open("destination.txt", std::ios::binary | std::ios::out);
    
    outfile.write(array, size);
    outfile.close();

    delete[] array;

    return 0;
}
