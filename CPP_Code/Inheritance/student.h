
//-----student.h
#pragma once
#include "person.h" 
#include <string>

class student : public Person
{
private:
	std::string course;

public:
	student();
	student(const std::string & name, int age, const std::string & course);
	void displayCourse() const; 
		
};