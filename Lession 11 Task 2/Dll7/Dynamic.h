#pragma once
#include <string>
#include <iostream>
#include "Dynamic.h"

#ifndef DLL7_EXPORTS
#define HELLO_API __declspec(dllexport)
#else
#define HELLO_API __declspec(dllimport)
#endif


using namespace std;

namespace Dynamic
{
	class HELLO_API Leaver
	{
	private:
		string Name;

	public: Leaver(string Name_ptr) : Name{ Name_ptr } {}

		  void leave();
	};
}
