#pragma once
#include <string>
#include "StaticLib.h"

using namespace std;

namespace Static
{
	class Greeter
	{
	private:
		string Name;

	public: Greeter(string Name_ptr) : Name{Name_ptr} {}

		  void greet();
	};
}
