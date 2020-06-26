/*
Code By: Kelley Kramer
Final Project Sickbay functions
CSC215
*/

#include <iostream>
#include <string>

using namespace std;

//uses reference to userRoomChoice to speed things up
string Sickbay(string userName, string& ref_userRoomChoice)
{
	//text to be displayed
	cout << "\nWelcome to Sickbay " << userName << "!\n\n";
	cout << "I am running a cell culture and I need a few values given to me.\n";
	cout << "First read this display output, it has the necessary information on it.\n";

	cout << "\t****Cell Culture: Sample 005****\n";
	cout << "\tTempature----- 28 degrees C\n";
	cout << "\tPressure------ 18 bar\n";
	cout << "\tGroth Rate---- 26 cells per minute\n";
	cout << "\tCell Quantity- 213 cells\n\n";

	cout << "I need you to determin the number of cells that will exsist in 37 minutes.\n";
	cout << "The result will complete my task for you.\n";

	//bool variable created for correct answer loop ending
	bool complete = false;
	//This allows the a loop so the user can make a mistake

	do
	{
		int numCells;
		//creates a pinter
		int* p_numCells = &numCells;
		cout << "Do you have an answer?\n";
		cin >> numCells;

		if (numCells == 1175)
		{
			cout << "Perfection!!!! Yopu remebered to include the cells we started with!\n";
			//uses a pointer to display the value entered by the user
			cout << "You gave me: " << *p_numCells << " cells.\n";
			complete = true;
		}
		else
		{
			cout << "No quite.  Remember to include the cells that we started with!\n";
			complete = false;
		}

	} while (complete == false);

	cout << "\nThank you for your work!  Where would you like to go next?\n";
	cout << "You can enter leave, to beam off the ship and end your stay here.\n";
	cout << "Or Enter messhall, or sickbay?\n";
	cin >> ref_userRoomChoice;

	return(ref_userRoomChoice);
}
