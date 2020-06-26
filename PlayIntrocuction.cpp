/*
Code By: Kelley Kramer
Final Project Intropcustion functions
CSC215
*/

#include <iostream>
#include <string>
#include "PlayerIntroduction.h"

using namespace std;

//introduction function, including class declaration
string PlayerIntroduction:: Introduction()
{
	//string variable
	string userName;

	//text to be displayed
	cout << "\t\tWelcome aboard the USS Voyager!\n\n";
	cout << "Since you are fresh out of the accademy, your stay here isnt going to be free.\n";
	cout << "What is your name?\n";
	//userinput assigned to userName variable
	cin >> userName;
	

	//text to be displayed
	cout << "\nWhile on board you will need to complete a few tasks for me.\n";
	cout << "However, you are free to explore the ship.  I recomend starting with engineering.\n";
	cout << "I hear Lt. Ford, is anxious to have your help on some analysis he has been reviewing.\n";

	//userName variable passed out of function
	return(userName);
}

//room choice function, including class declaration
string PlayerIntroduction::RoomChoice()
{
	//string variable
	string userRoomChoice;
	//text to be displayed
	cout << "But, there are other places to visit; messhall, or sickbay.\n";
	cout << "You can enter leave, to beam off the ship and end your stay here.\n";
	cout << "\nWhere would you like to go first?\n";
	//userinput assigned to userRoomChoice
	cin >> userRoomChoice;

	//userRoomChoice passed out of function
	return(userRoomChoice);
}
//lays out the method for obtaing the private information while keeping it secure
void PlayerIntroduction::SetRank(string userrank)
{
	userRank = userrank;
}
string PlayerIntroduction::GetRank()
{
	return userRank;
}
