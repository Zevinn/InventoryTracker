#include <iostream>
#include <vector>
#include "Macaron.h"

using namespace std;

namespace RoisCream
{
	const float Macaron::f_price = 3.5f;

	Macaron::Macaron()
	{
	}


	const float Macaron::getPrice() const
	{
		return f_price;
	}

	const string Macaron::getDesc()
	{
		return s_desc;
	}
}

