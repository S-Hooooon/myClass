#include "String.h"
#include <iostream>

String::String(const char* str)
{
	mLength = strlen(str);
	mString = new char[mLength + 1];
	strcpy_s(mString, mLength+1, str);
}

String::~String()
{
	delete[] mString;
}

void String::Print()
{
	std::cout << mString << std::endl;
}