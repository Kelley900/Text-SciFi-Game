/*
Code By: Kelley Kramer
Final Project Messhall functions
CSC215
*/

#include <iostream>
#include <string>

using namespace std;

//uses reference to userRoomChoice to speed things up
string Messhall(string userName, string& ref_userRoomChoice)
{
	//text to be displayed
	cout << "\nWelcome to the Messhall " << userName << "!\n\n";
	cout << "I need your help.  I am cooking dinner for the crew and need to tripple my recipy.\n";
	cout << "Take a look at the following recipy and tell me the new quantities of ingrediants.\n\n";
	cout << "\t4 eggs \n";
	cout << "\t0.5 cups of water \n";
	cout << "\t0.25 cups of milk \n";
	cout << "\t6 teaspoons of flour \n\n";

	//bool variable created for correct answer loop ending
	bool complete = false;
	//do loop to allow user multiple attemps at completing the task
	do
	{
		//two integer variables
		int eggs = 0, flour = 0;
		//two double variables for decimal values
		double water = 0.0, milk = 0.0;
		//text to be displayed and user input to be assigned to variables
		cout << "How Manny eggs?\n";
		cin >> eggs;
		cout << "How much water?\n";
		cin >> water;
		cout << "How much milk?\n";
		cin >> milk;
		cout << "How manny teaspoons of flour?\n";
		cin >> flour;

		//this if statment will check if the task has been completed correctly
		if (eggs == 12 && water == 1.5 && milk == 0.75 && flour == 18)
		{
			cout << "\nThat is perfect! Thats all I needed!\n";
			complete = true;
		}
		else
		{
			cout << "No, something isnt quite right, try again.\n";
			complete = false;
		}
	} while (complete == false);

	//text to be displayed
	cout << "\nThank you for your work!  Where would you like to go next?\n";
	cout << "You can enter leave, to beam off the ship and end your stay here.\n";
	cout << "Or Enter messhall, or sickbay?\n";
	//user asked to reassing value to userRoomChoice
	cin >> ref_userRoomChoice;

	//userRoomChoice is passed out of function
	return(ref_userRoomChoice);
}