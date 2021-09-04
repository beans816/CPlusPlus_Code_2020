#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;


void PassByValue(int& refNum1);
void PassByRef(int *pNum);
int main()
{
    int num = 5;

    int* pNum = &num;
    cout << "In main pNum = " << * pNum << endl;

   PassByRef(&num);
   cout << "In main, the value of num is now " << num << endl;


    int num1 = 3;
    cout << "In main()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    PassByValue(num1);

    cout << "Back in main() and the value of num1 is  " << num1 << endl;
 
    return 0;


}

void PassByValue(int& refNum1)
{
    cout << "In PassByValue()" << endl;
    cout << "Value of refNum1 is " << refNum1 << endl;

    // modify num1 which will now change num
    refNum1++;

    cout << "refNum1 is now " << refNum1 << endl;
}
void PassByRef(int* pNum)
{
    cout << "In PassByRef()" << endl;
    *pNum = 50;
    cout << "the value of pNum is now" << *pNum << endl;
}