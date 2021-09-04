//----person.h
#pragma once
#include <string>

class Person
{
private:
	std::string name;

protected:
	int age;

public:
	Person();
	Person(const std::string & name, int age);
	void displayNameAge() const;

};