#include <iostream>
#include <string>
#include "ConversionFunctions.h"
using namespace std;

int main(int argc, char** arv)
{
	
	//declaring structs
	struct streetAndPosition
	{
		int street;
		int position;
	};
	
	//declaring variables
	/* masterlist info
	 * (starting street)(stopping street)(street name)(t1)(t2)(t3)(t4)
	 * t1 = 0600 - 1000
	 * t2 = 1000 - 1500
	 * t3 = 1500 - 1900
	 * t4 = 1900 = 0600
	 * streets might need to be reversible so I can go either way down them
	 */
	string masterlist [24] [7] = {
	{"A" , "B" , "South Acorn Drive" , "5" , "10" , "5" , "10"},			//0
	{"B" , "C" , "Acorn Drive" , "15" , "5" , "15" , "5"},					//1
	{"C" , "D" , "North Acorn Drive" , "7" , "10" , "15" , "7"},			//2
	{"H" , "G" , "South Almond Way" , "10" , "10" , "10" , "10"},			//3
	{"G" , "F" , "Almond Way" , "15" , "20" , "15" , "20"},					//4
	{"F" , "E" , "North Almond Way" , "5" , "6" , "5" , "6"},				//5
	{"I" , "J" , "South Peanut Lane" , "8" , "9" , "10" , "11"},			//6
	{"J" , "K" , "Peanut Lane" , "11" , "10" , "9" , "8"},					//7
	{"K" , "L" , "North Peanut Lane" , "7" , "5" , "7" , "5"},				//8
	{"P" , "O" , "South Walnut" , "6" , "5" , "6" , "5"},					//9
	{"O" , "N" , "Walnut" , "10" , "8" , "10" , "8"},						//10
	{"N" , "M" , "North Walnut" , "9" , "6" , "9" , "6"},					//11
	{"D" , "E" , "West Elm Street" , "10" , "8" , "12" , "7"},				//12
	{"E" , "L" , "Elm Street" , "12" , "11" , "12" , "8"},					//13
	{"L" , "M" , "East Elm Street" , "5" , "4" , "5" , "4"},				//14
	{"C" , "F" , "West Central Avenue" , "9" , "8" , "9" , "8"},			//15
	{"F" , "K" , "Central Avenue" , "5" , "4" , "5" , "4"},					//16
	{"K" , "N" , "East Central Avenue" , "9" , "9" , "9" , "9"},			//17
	{"B" , "G" , "West Pine Road" , "7" , "6" , "7" , "6"},					//18
	{"G" , "J" , "Pine Road" , "9" , "8" , "9" , "8"},						//19
	{"J" , "O" , "East Pine Road" , "6" , "5" , "6" , "5"},					//20
	{"A" , "H" , "West Oak Expressway" , "9" , "8" , "7" , "7"},			//21
	{"H" , "I" , "Oak Expressway" , "10" , "10" , "10" , "10"},				//22
	{"I" , "P" , "East Oak Expressway" , "8" , "7" , "8" , "7"}				//23
	};
	
	/*This is the list that the program will use for calculating most things
	 * the format is as follows
	 * (street #)(Intersection)(Intersection)(T1)(T2)(T3)(T4)
	 * Intersection A = 0, Intersection B = 1, Intersection C = 2, etc.
	 */
	int intlist [24] [7] = {
	{0, 0 , 1 , 5 , 10 , 5 , 10},					//0
	{1, 1 , 2 , 15 , 5 , 15 , 5},					//1
	{2, 2 , 3 , 7 , 10 , 15 , 7},					//2
	{3, 7 , 6 , 10 , 10 , 10 , 10},					//3
	{4, 6 , 5 , 15 , 20 , 15 , 20},					//4
	{5, 5 , 4 , 5 , 6 , 5 , 6},						//5
	{6, 8 , 9 , 8 , 9 , 10 , 11},					//6
	{7, 9 , 10 , 11 , 10 , 9 , 8},					//7
	{8, 10 , 11 , 7 , 5 , 7 , 5},					//8
	{9, 15 , 14 , 6 , 5 , 6 , 5},					//9
	{10, 14 , 13 , 10 , 8 , 10 , 8},				//10
	{11, 13 , 12 , 9 , 6 , 9 , 6},					//11
	{12, 3 , 4 , 10 , 8 , 12 , 7},					//12
	{13, 4 , 11 , 12 , 11 , 12 , 8},				//13
	{14, 11 , 12 , 5 , 4 , 5 , 4},					//14
	{15, 2 , 5 , 9 , 8 , 9 , 8},					//15
	{16, 5 , 10 , 5 , 4 , 5 , 4},					//16
	{17, 10 , 13 , 9 , 9 , 9 , 9},					//17
	{18, 1 , 6 , 7 , 6 , 7 , 6},					//18
	{19, 6 , 9 , 9 , 8 , 9 , 8},					//19
	{20, 9 , 14 , 6 , 5 , 6 , 5},					//20
	{21, 0 , 7 , 9 , 8 , 7 , 7},					//21
	{22, 7 , 8 , 10 , 10 , 10 , 10},				//22
	{23, 8 , 15 , 8 , 7 , 8 , 7}					//23
	};
	
	int route [24];
	int routeposition = 0;
	//user input streets for starting and stopping
	string startingstreetstring = "A";
	string endingstreetstring = "B";
	int startingstreet;
	int currentstreet;
	int temp;
	
	//creating objects
	ConversionFunctions convert;
	temp = convert.convertNameToNumber(startingstreetstring);
	cout << temp;
	
	//asking for street addresses (intersections)
//	cout << "Welcome to Find Your Way" << endl;
//	cout << "Please enter in your starting intersection: ";
//	cin >> startingstreet;
//	cout << "Please enter in your finishing intersection: ";
//	cin >> endingstreet;
	
	
}