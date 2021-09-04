#include "pch.h"
#include "Header1.h"
#include <iostream>



using namespace System;

int main()
{
	Rectangle uninitialised;
	Rectangle value{}; //brackets show that you are using the default constructor
	Rectangle agregate{4,7};
	value.resize(3,5);
	agregate.resize(3,2);

	int area_of_value{value.area()};
	int area_of_agregate{ agregate.area() };
	return 0;

}
