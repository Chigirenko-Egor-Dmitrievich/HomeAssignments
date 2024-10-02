/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment1
*/

#include <iostream>
#include <string>
#include "hello.hpp"
using namespace std;
int main()
{
    hello();
    cout << endl;
    
    string name;
    cout << "Write name or None to end program: ";
    cin >> name;
    while (name != "None")
    {
        cout << "Hello, " << name << "!" << endl;
        cout << "Write name or None to end program: ";
        cin >> name;
    }
    return 0;
}
