#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "Flavours.h"

using namespace std;
namespace RoisCream
{
	const string* filename = new string[]{ "MacaronFlavours.dat", "CookieFlavours.dat" };

	Flavours::Flavours()
	{
		initialize();
	}

	void Flavours::initialize()
	{
		// ** Macaron Flavours **
		ifstream file;
		file.open(filename[0]);
		if (!file)
			throw string("Failed to open the file: " + filename[0]);

		string flavour;
		while (!file.eof())
		{
			getline(file, flavour);
			macaron.push_back(flavour);
		}

		file.close();
		sort(macaron.begin(), macaron.end()); // sort them in the alphabetical order.
		

		// ** Cookie Flavours **
		file.open(filename[1]);
		if (!file)
			throw string("Failed to open the file: " + filename[0]);

		while (!file.eof())
		{
			getline(file, flavour);
			cookie.push_back(flavour);
		}

		file.close();
		sort(cookie.begin(), cookie.end());
	}

	void Flavours::ListMacaron()
	{
		cout << "### Macaron Flavours ###" << endl;
		int no = 1;
		for (string flavour : macaron)
		{
			cout << "[" << no++ << "] " + flavour << endl;
		}
		cout << endl;
	}
	
	void Flavours::ListCookie()
	{
		cout << "### Cookie Flavours ###" << endl;
		int no = 1;
		for (string flavour : cookie)
		{
			cout << "[" << no++ << "] " + flavour << endl;
		}
		cout << endl;
	}

	
	
}