#pragma once
#include <iostream>
#include "Date.h"
#include "Flavours.h"

using namespace std;

namespace RoisCream
{
	class Macaron
	{
		//string s_name; -> this has to be a flavour + "macaron"
		Date made;
		string s_desc; // description
		int i_quantity;
		static const float f_price;

	public:
		Macaron();
		//const string getName() const;
		const float getPrice() const;
		const string getDesc();
		// void writeDesc();
	};
}

