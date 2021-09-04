#include <iostream>
using namespace System;

int main()
{
    
	wchar_t FirstName = "bobby"; 
	   /*w_char will allow for inclusion of Japanese or characters not in the standard ASCII set, and double barrel names, therefore string and char types were not my choice.
	   Otherwise the standard char type can be used, on the condition that it is known for certain that all characters that will be applicaple will  be in the ASCII character set.
	   If that is a known certainty, it would be much better because the char type has less bytes then the wchar_t type.
	   */

	struct StreetAddress
	{
		int UnitNumber;
		char StreetName;
	};
	StreetAddress myAddress = { 5 , "Warwick Drive" };
	StreetAddress yourAddress = { 6 , "Pensive Street" };
		/*
		The reason why an enum wont work is because when returning the value, you will get a 0 for '15' and a 
		1 for 'Warwick Drive' and that is quite difficult to understand if someone is experiencing the code as a user.
		Therefore a struct is better to put referencing into consideration.
		When a user just wants the house number they can pull up the number as a reference instead of the whole street, or they can add multiple numbers on the same street and buld a whole neighbourhood.
		Or even a whole town!
		However, if thats not wanted in the code; a char data type will do. It would be a lot better if you just want to return one output.
		*/

	char Birthdate[] = {}; //takes 1 byte and 1 input, however improper input is possible
	std::cin << Birthdate;
		//or
	unsigned __int8 BirthDay; //int is too large an input range and takes more bytes that are nessesary
	unsigned __int8 BirthMonth;
	unsigned __short BirthYear;
	std::cout >> BirthDay + "/" + BirthMonth + "/" + BirthYear >> std::endl;
	    //or
	struct Birthdate
	{
		unsigned __int8  BirthDay;
		char BirthMonth; //this takes 1 byte but improper input is possible (eg. i was born on the 12th of Membuary 2019)
		unsigned __short BirthYear;
	};
	//or
	struct Birthdate
	{
		unsigned __int8  BirthDay;
		enum BirthMonth {January = 1, Fubuary, March, April, May, June, July, August, September, October, November};
		unsigned __short BirthYear;
	};
	//improper input is still possible (eg. i was born on the 120th of april 2134)
	//therfore:
	std::istream& getline(std::istream& ins, int& n)
	{
		n = 0;  // stupid C++11 standard behavior

		// Read a line (terminated by ENTER|NEWLINE) from the user
		std::string s;
		if (std::getline(ins, s))
		{
			// Get rid of any trailing whitespace
			s.erase(s.find_last_not_of(" \f\n\r\t\v") + 1);

			// Convert it to integer
			std::istringstream ss(s);
			ss >> n;

			// Check to see that there is nothing left over
			if (!ss.eof())
				ins.setstate(std::ios::failbit);
		}
		return ins;
	}
	struct Birthdate
	{
		unsigned __int8  BirthDay;
		std::cin << BirthDay;
		while (!getline(std::cin, BirthDay) || (BirthDay < 1) || (BirthDay > 32))
		{
			std::cin.clear();
			std::cout << "Try again: ";
		}
		enum BirthMonth { January = 1, Febuary, March, April, May, June, July, August, September, October, November, December };
		unsigned __short BirthYear;
		while (!getline(std::cin, BirthYear) || (BirthYear < 1) || (BirthYear > 2021)) 
		{
			std::cin.clear();
			std::cout << "Try again: ";
		}
	};
	//above is the correct solution, the while statement was taken from the internet

	unsigned int ZipCode;
	//prevents a negative value
	unsigned __int8 PostalCode;
	//prevents a negative value and since a postal code is only 4 digits, it prevents more then 5 digits
	double	BankAccountBalance;
	//the double allows for multiple decimal places which allows greated accuracy for values representing money
	enum MonthsoftheYear { January = 1, Febuary, March, April, May, June, July, August, September, October, November, December };
	//enums representd the literal values of months as intergers. Therefore this will only take 4 bytes of memory, because the compiler only uses a single element of the memory
	//it also prevents enetering any values that isnt listed or misspelled
}