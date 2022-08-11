#pragma once
#include <iostream>

class String
{
	char* mString;
	int mLength;

public:
	String()
	{
		mString = nullptr;
		mLength = 0;
	}
	String(const char* str);
	~String();
	void Print();
};

