#pragma once
#include <iostream>

using namespace std;


class Macaron
{
	string s_name;
	// Date manufactured
	// Date expiry
	float f_price;
	string s_desc; // description
	int i_quantity;

public:
	const string getName() const;
	const float getPrice() const;
	const string getDesc();
	// void writeDesc();
};
