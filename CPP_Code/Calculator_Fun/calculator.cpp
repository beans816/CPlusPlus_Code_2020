#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;


//function 1 declairation
void pow(short x, double b);
/*
For the second function you will compute the sine of an angle.Your function should accept the opposite and hypotenuse
lengths and return the sine value.The formula for sine is :

sin = opposite / hypotenuse

where / is used to denote division

Ensure that you paste the code for the function as well as the code that calls the
functionand assigns the value to a variable.
*/

//funtion 2 declairation
void sine(short x, double b);

//experimenting: Use the code you created in the previous module for some of this functionality but add additional code
void log(short x, double b);
void sineRoot(short x, double b);
void CheckInputValues(short x ,double b);
s
//k is an angle or a rate of change (i.e hypotenuse)

	int main()
	{

	// local variables
	double b; 
	//exponent number, the base can be both positive and negative
	short x; //for future use this can be changed to a double, however it does not seem to work as yet as wasnt called for in this assignment so it just returns a 1 as soon as the exception of a interger pops up
	//answer to (b^{x}), int k=1 was taken out to prevent re-assignment of the variable once Pow() fuction is called...just in case
	double k;


	//begin input :)
		std::cout << "insert base (or) y-axis point (or) b" << std::endl;
		std::cin >> b;
	
		std::cout << "insert exponent (or) opposite (or) x-axis point (or) x" << std::endl;
		std::cin >> x;
		//y=a(b^{x})+c , equation of an exponential graph, c is the y intercept 
		std::cout << "insert hypotenuse(or) exponential curve (or) sinx (or) b^{x} (or) k" << std::endl;
		std::cin >> k;

		CheckInputValues(x,b); //calls value function to ensure input is valid and in range 

	}


	void CheckInputValues(short x, double b)
	{
		
	  { //x value
		if (x == 0)
		{
			//if it is 0,then immediately return 1 otherwise calculate the power and return the result.
			std::cout << "1" << std::endl;
			
		}
		//fractional exponents for example 2^3.2 or 2 to the power of 3 (1/2) the decimal number is taken as a root 
		/*
		  b^x where x= x + m/n where m < n
		  k = pow(b,x) * (1.00000/pow(b,x))
		  */

	     else if (-x) // further measure against a negative input 
		 {
			//The exponent x should not permit negative values
			//see below where x was changed into a positive by using the extended mathematical formula b^-x = 1/b^x
			 sine(x,b);
		
		 }

	    else if(b > 0 && x > 0) 
		{
			//Show sample code that will call the functionand get the result.
			pow(b, x);

		}

		else if (0 < b && 0 < x < 1) //  m root of b to the power of n
		 {
		   sineRoot(b,x);
		 }

		else
		{
			 for (int i = 1; i <= 1; i++)
			 {
				 cout << "Pardon? Please re-enter your x value" << endl;
				
			 }
			 cin >> x;
		}
		
	  }

		
	  { // b value
		  //if b input is out of range of int data type:
		  if (b > 32767 || b < -32768)
		  {

			  cout << "You entered " << b << ", exponent numbers larger then 32767 or less than -32768 are not permitted!" << endl;
			  cout << "Please re-enter your exponent value where exponent <= 32767 or exponent >= -32768" << endl;
			  std::cin >> b;
			  //int main(unsigned int x); I have no idea if this x value will truncate when x is re-initialises in main() or pow()
		  }


		  else if (-b && x > 0)
		  {
			  log(-b, x); //negative times a negative makes a positive

		  }
	  }
	}

	//Create a function called pow that accepts two integers that represent the baseand the exponent
	void pow(short x, double b)
	{
	//local variable declairation
		long long k = 1; 
		

		for (int i = 1; i <= x; i++)
		{
			k = k * b;
		}
		//if k result is out of range of long long data type: so unlikely but if needed further updates to the code can be made in the future, the programme will need to restart with smaller numbers
		/*
		if (9223372036854775807 >= k >= -9223372036854775808)
		{
			std::cout << k << std::endl;
		}
		else if (-9223372036854775808 >= k >= 9223372036854775807)
		{
			cout << "Your result is larger then 9223372036854775807 or less than -9223372036854775808." << endl;
			cout << "Please re-evaluate your exponent and base values where the result <= 9223372036854775807 or result >= -9223372036854775808," << endl;

		}
		*/
		std::cout << k << std::endl;

	}

	void log(short x, double b)
	{
		//local variable declairation
		double k;
		k = log(x);
		cout << k << endl;
	}

	void sineRoot(short x, double b)
	{
		double k = 1.00000 / pow(b, x); //where x is a positive number 
		//k is the hypotenuse, x is the opposite- x axis - x value . b is the y value or y point on a graph 
		//the above calculates the positive arch at where 0 < x < 1 on a x axis graph (where the angle is positive and acute)
		cout << k << endl;
		//sine (0.00390623013)= b^-x = 1/b^x

	}
	void sine(short x, double b)
	{
		double k = 1.00000 / pow(b, -x); //a negative times a negative gives a positive, i tried to use the abs() function and no thank you
		//the above calculates the negative arch at where x approv 1 on a x axis graph (where the angle is positive and acute)
		cout << k << endl;
		//sine (0.00390623013)= b^-x = 1/b^x

	}