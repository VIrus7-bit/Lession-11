#pragma once
#include "Dynamic.h"
#include <iostream>

namespace Dynamic
{
	class Leaver
	{
	private:
		std::string Name;

	public:Leaver(std::string Name_ptr) : Name{ Name_ptr } {}

		  void leave();
			  
	};
}