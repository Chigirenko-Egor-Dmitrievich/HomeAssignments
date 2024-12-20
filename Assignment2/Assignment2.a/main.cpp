/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment2.a
*/

#include <fstream>
#include <filesystem>
#include <cstddef>

int main()
{
    std::ifstream infile;
    infile.open("source.txt", std::ios::binary | std::ios::in);

    size_t size = std::filesystem::file_size("source.txt");

    char *array = new char[size];

    infile.read(array, size);
    infile.close();

    for (int i = 0; 2 * i < size; i++)
    {
        std::swap(array[i], array[size - i - 1]);
    }

    std::ofstream outfile;
    outfile.open("destination.txt", std::ios::binary | std::ios::out);

    outfile.write(array, size);
    outfile.close();

    delete[] array;

    return 0;
}
