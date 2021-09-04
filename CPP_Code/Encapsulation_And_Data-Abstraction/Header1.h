
//----------------------------------------------------------------------headerfile-------------------------------------------------
//Header 1
#pragma once
#include "pch.h"
#include <iostream>
using namespace System;
/* Notes https://www.geeksforgeeks.org/abstraction-in-c/?ref=lbp
Members declared as public in a class, can be accessed from 
anywhere in the program.
Members declared as private in a class, can be accessed only 
from within the class. They are not allowed to be accessed from any part of code outside the class.
*/
class player
{
private:
    //char encapsulation
    char _playername[10] = {};
    //int encapsulation
    int _binary;
    //data abstraction
    int a, b;

public:
    //char encapsulation
    void setchar()
    {
        std::cin >> _playername[10];
    }
    char* getchar()
    {
        return _playername;
    }

    //int encapsulation
    void setint(int a)
    {
        _binary = a;
    }

    int getint()
    {
        return _binary; 
    }

    //data abstraction
    void setAbstract(int x, int y)
    {
        a = x;
        b = y;

    }
    void displayAbstract()
    {
        std::cout << "a = '" << a << std::endl;
        std::cout << "b = '" << b << std::endl;
    }
};




