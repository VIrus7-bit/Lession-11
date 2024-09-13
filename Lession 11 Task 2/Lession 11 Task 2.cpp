#include <iostream>
#include <string>
#include "Dynamic.h"

int main(){

    using namespace std;

    setlocale(LC_ALL, "Rus");
    system("chcp 1251");
    system("cls");

    string Name;
    cout << "Введите имя: "; getline(cin, Name);
    Dynamic::Leaver Nam(Name);
    Nam.leave();

    system("pause");

    return EXIT_SUCCESS;
}