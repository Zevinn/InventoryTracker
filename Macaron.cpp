#include <iostream>
#include <vector>
#include "Macaron.h"

using namespace std;

const string Macaron::getName() const
{
	return s_name;
}

const float Macaron::getPrice() const
{
	return f_price;
}

const string Macaron::getDesc()
{
	return s_desc;
}
