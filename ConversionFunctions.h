#ifndef CONVERSIONFUNCTIONS_H
#define CONVERSIONFUNCTIONS_H
#include <string>
using namespace std;

class ConversionFunctions
{
public:
	ConversionFunctions();
	~ConversionFunctions();
	int convertNameToNumber(string startingstreetstring);
	string convertNumberToName(int startingstreetint);
};

#endif // CONVERSIONFUNCTIONS_H
