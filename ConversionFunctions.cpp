#include "ConversionFunctions.h"
#include <iostream>
#include <string>
using namespace std;

ConversionFunctions::ConversionFunctions()
{
}

ConversionFunctions::~ConversionFunctions()
{
}

//converts a street to its associated number
int ConversionFunctions::convertNameToNumber(string startingstreetstring)
{
	if(startingstreetstring == "A")
	{
		return 0;
	}
	else if (startingstreetstring == "B")
	{
		return 1;
	}
	else if (startingstreetstring == "C")
	{
		return 2;
	}
	else if (startingstreetstring == "D")
	{
		return 3;
	}
	else if (startingstreetstring == "E")
	{
		return 7;
	}
	else if (startingstreetstring == "F")
	{
		return 6;
	}
	else if (startingstreetstring == "G")
	{
		return 5;
	}
	else if (startingstreetstring == "H")
	{
		return 4;
	}
	else if (startingstreetstring == "I")
	{
		return 8;
	}
	else if (startingstreetstring == "J")
	{
		return 9;
	}
	else if (startingstreetstring == "K")
	{
		return 10;
	}
	else if (startingstreetstring == "L")
	{
		return 11;
	}
	else if (startingstreetstring == "M")
	{
		return 12;
	}
	else if (startingstreetstring == "N")
	{
		return 13;
	}
	else if (startingstreetstring == "O")
	{
		return 14;
	}
	else if (startingstreetstring == "P")
	{
		return 15;
	}
	else
	{
		return 16;
		cout << "not a valid input (string -> int)" << endl;
	}
}

//converts a number to its associated street
string ConversionFunctions::convertNumberToName(int startingstreetint)
{
	if (startingstreetint == 0)
	{
		return "A";
	}
	else if (startingstreetint == 1)
	{
		return "B";
	}
	else if (startingstreetint == 2)
	{
		return "C";
	}
	else if (startingstreetint == 3)
	{
		return "D";
	}
	else if (startingstreetint == 4)
	{
		return "H";
	}
	else if (startingstreetint == 5)
	{
		return "G";
	}
	else if (startingstreetint == 6)
	{
		return "F";
	}
	else if (startingstreetint == 7)
	{
		return "E";
	}
	else if (startingstreetint == 8)
	{
		return "I";
	}
	else if (startingstreetint == 9)
	{
		return "J";
	}
	else if (startingstreetint == 10)
	{
		return "K";
	}
	else if (startingstreetint == 11)
	{
		return "L";
	}
	else if (startingstreetint == 12)
	{
		return "M";
	}
	else if (startingstreetint == 13)
	{
		return "N";
	}
	else if (startingstreetint == 14)
	{
		return "O";
	}
	else if (startingstreetint == 15)
	{
		return "P";
	}
	else
	{
		return "A";
		cout << "Not a valid input (int -> string)" << endl;
	}
}
