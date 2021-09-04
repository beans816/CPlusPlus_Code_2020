//-----student.cpp

#include "stdafx.h"
#include "student.h"

#include <iostream>

//no argument student constructor
//the compiler will always invoke the base constructoe whether you want it to or not, so if you mention the default constructor in the base class and if your base class doesnt have a default constructor then you have a compiler error. so this will invoke the default constructor from person to person to initialize the name and age with artificial values.
student::student()
	: course("[Unassigned course]")
{
	std::cout << "hello from student ::student()" << std::endl;
}

//parameterized student constructor
student::student(const std::string & name, int age, const std::string & course)
	:Person(name, age), course(course)
{
	std::cout << "hello from student ::student (string, int, string)" << std::endl;
}

void student::displayCourse() const
{
	std::cout << course << std::endl;
}
