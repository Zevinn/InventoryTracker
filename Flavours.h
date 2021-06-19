#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace RoisCream
{
	class Flavours
	{
		vector<string> macaron;
		vector<string> cookie;

	public:
		Flavours();
		void initialize(); // Fetch data from the file
		void ListMacaron();
		void ListCookie();
		// void AddFlavour();
	};
}
