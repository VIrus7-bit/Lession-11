#pragma once
#include <iostream>
#include <string>
#include "StaticLib.h"

using namespace std;

namespace Static
{
	void Greeter::greet()
	{
		cout << "Здравствуйте, " << Name << endl;
	}
}