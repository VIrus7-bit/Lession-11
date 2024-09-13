#include <iostream>
#include "Dynamic.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");

	string Name;
	cout << "Введите имя: "; cin >> Name;

	Dynamic::Leaver leave(Name);
	leave.leave();

	system("pause");

	return EXIT_SUCCESS;
}
