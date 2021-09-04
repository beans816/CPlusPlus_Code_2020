//---inheritance.cpp

//#include "stdafx.h" // compiler error: cannot open source file 
#include "pch.h"
#include "student.h"




int main()
{
    student student1;
    student1.displayNameAge();
    student1.displayCourse();

    //create a student object using the parameterized constructor
    student student2("jaden smith", 18, "physics");
    student2.displayNameAge();
    student2.displayCourse();

    return 0;
}


