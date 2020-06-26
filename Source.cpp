/*
Code By: Kelley Kramer
Final Project
CSC215
*/

//libraries included
#include <iostream>
#include <string>
//personal header files to include
#include "PlayerIntroduction.h"
#include "Messhall.h"
#include "Sickbay.h"

//standard namespace
using namespace std;

int main()
{
	//class name then the object name
	PlayerIntroduction obj_PlayerIntroduction;
	obj_PlayerIntroduction.SetRank("Ensign");
	obj_PlayerIntroduction.uniformColor = "blue";

	//Computer Talks to player
	cout << "Stand By, we are approaching the USS Voyager.\n";
	cout << "I am pulling up your accademy file now.\n";
	//accses the class object to pull both public (uniformColor) and private (getRank) information
	cout << "You are of the rank of: " << obj_PlayerIntroduction.GetRank() << "\n";
	cout << "I am now replicating you your new " << obj_PlayerIntroduction.uniformColor << " uniform.\n\n";
	cout << "You may beam aboard when you are ready.\n";
	system("pause");

	//declare variables used in the program
	bool exit = false;
	string userName, userRoomChoice;

	//set the userName value to the output of the PlayerIntroduction.cpp 
	//username output
	userName = obj_PlayerIntroduction.Introduction();
	//set the userRoomChoice to the value coming out of the 
	//PlayerIntroduction.cppRoomChoice user output
	userRoomChoice = obj_PlayerIntroduction.RoomChoice();


	//this is the simple program to run the game
	//this could also be set up as a function I belive
	do
	{
		//if the user selects messhall it will fun this statment
		if (userRoomChoice == "messhall" || userRoomChoice == "Messhall")
		{
			//this will again reassign the userRoomChoice to the value that the Messhall function outputs
			Messhall(userName, userRoomChoice);
			//this allows the loop to continue or end
			exit = true;

		}
		else if (userRoomChoice == "sickbay" || userRoomChoice == "Sickbay")
		{
			//this will again reassign the userRoomChoice to the value that the Sickbay function outputs
			Sickbay(userName, userRoomChoice);
			//this allows the loop to continue or end
			exit = true;
		}
		else if (userRoomChoice == "leave" || userRoomChoice == "Leave")
		{
			//This will allow the user to leave the game.
			cout << "\nThank you for serving on the USS Voyage.\n";
			cout << "The work you have done has contributed greatly to our mission!\n";
			cout << "Energize!\n";
			//this allows the loop to continue or end
			exit = false;
		}
		else
		{
			//this is used if the user mistypes something
			cout << "\nThat isnt a room you can visit. Here is the room list.\n";
			cout << "messhall, sickbay, or leave?\n";
			cin >> userRoomChoice;
			//this allows the loop to continue or end
			exit = true;
		}

	} while (exit == true);

	return (0);
}