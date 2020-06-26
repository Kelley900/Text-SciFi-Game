/*
Code By: Kelley Kramer
Final Project Introduction header file
CSC215
*/
#pragma once
#include <string>

using namespace std;

class PlayerIntroduction
{
public:
	//these are public values seen/ used by user
	string Introduction();
	string RoomChoice();
	//setup for player uniform color
	string uniformColor;
	//method to acsess rank as it is a private piece of information
	void SetRank(string userrank);
	string GetRank();
	
private:
	//these are private pieces of data the user wont use/acsess
	string userRank;

};
