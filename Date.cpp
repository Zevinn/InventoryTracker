#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Date.h"

namespace RoisCream
{

	int Date::mdays(int s_year, int s_month)
	{
		int month = s_month >= 1 && s_month <= 12 ? s_month : 13;
		month--;
		
		return days[month] + int((month == 1) * ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	}

	Date::Date() : year(0), month(0), day(0)
	{
	}

	Date::Date(int s_year, int s_month, int s_day)
	{
		if (s_year >= min_year && s_year <= max_year)
		{
			year = s_year;
			if (s_month > 0 && s_month < 13)
			{
				month = s_month;
				if (s_day > 0 && s_day <= mdays(s_year, s_month))
				{
					day = s_day;
				}
				else
				{
					*this = Date();
					return;
				}
			}
			else
			{
				*this = Date();
			}
		}
		else
		{
			*this = Date();
		}
	}

	bool Date::valid()
	{
		bool isit = (year >= min_year && year <= max_year && month > 0 && month < 13 && day > 0 && day <= mdays(year, month));
		
		return isit;
	}

	Date& Date::operator+=(int days)
	{
		day += days;
		if (day > mdays(year, month))
		{
			day -= mdays(year, month);
			month++;
			if (month > 12)
			{
				month = 1;
				year++;
			}
		}
		return *this;
	}

	Date Date::operator+(int days)
	{
		Date temp = Date(year, month, day);
		temp += days;
		return temp;
	}

	bool Date::operator==(const Date& rhs)
	{
		if (day != rhs.day) return false;
		if (month != rhs.month) return false;
		if (year != rhs.year) return false;

		return true;
	}

	bool Date::operator!=(const Date& rhs)
	{
		if (*this == rhs) return false;
		else return true;
	}

	bool Date::operator>(const Date& rhs)
	{
		if (year > rhs.year) return true;
		if (month > rhs.month) return true;
		if (year == rhs.year && month == rhs.month && day > rhs.day) return true;

		return false;
	}

	bool Date::operator<(const Date& rhs)
	{
		if (*this > rhs) return false;
		else if (*this == rhs) return false;
		else return true;
	}

	bool Date::operator>=(const Date& rhs)
	{
		if (*this == rhs) return true;
		else if (*this > rhs) return true;
		else return false;
	}

	bool Date::operator<=(const Date& rhs)
	{
		if (*this == rhs) return true;
		else if (*this < rhs) return true;
		else return false;
	}

	void Date::currentDate()
	{
		time_t now = time(0); // Elapsed time from 1970, Jan, 1 till now in seconds
		tm* local_time = localtime(&now);
		int yr = local_time->tm_year + 1900;
		int mth = local_time->tm_mon + 1;
		int day = local_time->tm_mday;

		*this = Date(yr, mth, day);
	}
}
