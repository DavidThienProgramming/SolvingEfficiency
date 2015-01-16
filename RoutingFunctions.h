#ifndef ROUTINGFUNCTIONS_H
#define ROUTINGFUNCTIONS_H

class RoutingFunctions
{
public:
	//declaring structs
	struct streetAndPosition
	{
		int street;
		int position;
	};	
	
	RoutingFunctions();
	~RoutingFunctions();
	streetAndPosition RoutingFunctions::nextStep(int starting, int target, int valuearray [24] [7]);
};

#endif // ROUTINGFUNCTIONS_H
