
//-----person.cpp

#include "stdafx.h"

#include  "person.h"
#include <iostream>

//no argument personconstructor

Person::Person()
	: name("[Unknown Name])"), age(0)
{
	std::cout << "hello from person::person()" << std::endl;
}

//parameterizd person constructor
Person::Person(const std::string & name, int age)
	:name(name), age(age)
{
	std::cout << "hello from person:: person(string,int)" << std::endl;
}

void Person::displayNameAge() const
{
	std::cout << name << "," << age << std::endl;
}
