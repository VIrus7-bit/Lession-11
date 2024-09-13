#include <iostream>
#include <string>
#include "StaticLib.h"

int main()
{
    using namespace std;

    setlocale(LC_ALL, "Rus");
    system("chcp 1251");
    system("cls");

    string Name;
 
    cout << "Введите имя: "; getline(cin, Name);
    Static::Greeter staticLib(Name);
    staticLib.greet();

    system("pause");

    return EXIT_SUCCESS;
}