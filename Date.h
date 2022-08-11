#pragma once
#include <iostream>

class Date
{
public:
	int mDay;
	int mMonth;
	int mYear;

	Date()
	{
		mDay = 0;
		mMonth = 0;
		mYear = 0;
	}

	void Print(int day, int month, int year);
};

