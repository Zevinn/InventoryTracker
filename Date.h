#pragma once
#include <iostream>
#include <ctime>

namespace RoisCream
{
	static int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, -1 };
	static const int min_year = 2021;
	static const int max_year = min_year + 5;

	class Date
	{
		int year;
		int month;
		int day;

		int mdays(int s_year, int s_month); // Given method to validate the number of days in a specific month.
		
	public:
		Date();
		Date(int s_year, int s_month, int s_day);
		void currentDate();
		bool valid();
		Date& operator+=(int days);
		Date operator+(int days);
		bool operator==(const Date& rhs);
		bool operator!=(const Date& rhs);
		bool operator>(const Date& rhs);
		bool operator<(const Date& rhs);
		bool operator>=(const Date& rhs);
		bool operator<=(const Date& rhs);
	};
}
