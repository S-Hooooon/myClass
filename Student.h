#pragma once
#include <iostream>

class Student
{
public:
	std::string mName;
	int mPoint;

	Student()
	{
		mPoint = 0;
	}
	~Student()
	{

	}
	void Print(std::string name, int point);
};

