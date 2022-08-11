#include <iostream>
#include "Date.h"
#include "Student.h"
#include "String.h"

int main()
{
	Date myDate;
	Student myStudent;
	String myString("Hello World");

	std::cout << "What Year : ";
	std::cin >> myDate.mYear;
	std::cout << "What Month : ";
	std::cin >> myDate.mMonth;
	std::cout << "What Day : ";
	std::cin >> myDate.mDay;

	myDate.Print(myDate.mDay, myDate.mMonth, myDate.mYear);	

	std::cout << "Enter Name : ";
	std::cin >> myStudent.mName;
	std::cout << "Enter Point : ";
	std::cin >> myStudent.mPoint;

	myStudent.Print(myStudent.mName, myStudent.mPoint);

	myString.Print();
	
}