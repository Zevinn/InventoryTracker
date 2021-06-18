/*
This module is a practice module based on the inventory of 'RoisCream', where I currently part-time-work.
This is to practice coding and designed to track products
*/

#include <iostream>
#include <vector>
//#include "InventoryManager.h"
#include "Date.h"
#include "Macaron.h"

using namespace std;
using namespace RoisCream;

int main()
{
	Date today = Date();
	today.currentDate();
	Date a = Date(2021, 5, 17);
	Date b = Date(today + 20);
	if (a >= b) cout << "a is greater than b" << endl;
	else cout << "a is NOT greater than b" << endl;

	if (a < b) cout << "a is less than b" << endl;
	else cout << "a is NOT less than b" << endl;

	if (a == b) cout << "a is equal to b" << endl;
	else cout << "a is different from b" << endl;

	Date c = b;
	if (c == b) cout << "c is equal to b" << endl;
}