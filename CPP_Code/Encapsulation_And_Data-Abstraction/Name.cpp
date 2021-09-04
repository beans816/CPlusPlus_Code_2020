//----------------------------------------------------------------------consoleapp.cpp File------------------------------------------------- 
 //Name.cpp

#include "pch.h"
#include "Header1.h"
#include <iostream>



using namespace System;

unsigned main()
{
   
    player _playername;
    _playername.setchar();

    std::cout << _playername.getchar();

    player _binary;
    _binary.setint(1100);

    std::cout << _binary.getint();

    player obj;
    obj.setAbstract(9, 10);
    obj.displayAbstract();
    return 0;
}