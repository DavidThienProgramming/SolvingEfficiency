#include "RoutingFunctions.h"

RoutingFunctions::RoutingFunctions()
{
//temp struct
struct streetAndPosition
{
	int street;
	int position;
};

}

RoutingFunctions::~RoutingFunctions()
{
}



//returns the next street to go on
streetAndPosition RoutingFunctions::nextStep(int starting, int target, int grid [24] [7])
{
	//declaring structs
	struct streetAndPosition
//	{
//		int street;
//		int position;
//	};
	
	//declaring variables
	private int targetx = target % 4;
	private int targety = target / 4;
	private int startx = starting % 4;
	private int starty = starting / 4;
	//street array
	int streetArray [7] [4] = 
	{
		{0, 1, 2},
		{21, 18, 15, 12},
		{3, 4, 5},
		{22, 19, 16, 13},
		{6, 7, 8},
		{23, 20, 17, 14},
		{9, 10, 11}
	};
	
	//checks for variation in x direction first
	if(targetx > startx)
	{
		
	}
	else if(targetx < startx)
	{
		
	}
	//then checks for variation in y
	else if (targety > starty)
	{
		
	}
	else if (targety < starty)
}
