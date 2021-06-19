/*
This module is a practice module based on the inventory of 'RoisCream', where I currently part-time-work.
This is to practice coding and designed to track products
*/

#include <iostream>
#include <vector>
//#include "InventoryManager.h"
#include "Date.h"
#include "Macaron.h"
#include "Flavours.h"

using namespace std;
using namespace RoisCream;

int main()
{
	static Flavours flavour;
	flavour.ListCookie();
	flavour.ListMacaron();
}