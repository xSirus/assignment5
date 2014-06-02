// File Prologue
// Name:       Joel Harrison
// File:       main.cpp
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// 
// This is the code for the driver. 

#include "PriorityQueue.h"
#include<string>
#include<fstream>
const string YES = "y", NO = "n";

void clear();

string yesNo, filename = "", name_from_file = "", myString = "";
int num_from_file = 0;
ifstream myStream;

int main()
{
	do
	{
		clear();
		PriorityQueue myQueue;

		cout << "Please enter the name of the file you would like to open\n(be sure it is in the same directory as the program): ";
		cin >> filename;
		myStream.open(filename);

		if (!myStream) //verify a file was opened successfully, throw error if fail
		cout << "\nFile did not open. Please check the name and location of the file\n\n";
		else
		{	
			//initialize the max and min to the first data point
			while (myStream >> name_from_file)//read the rest of the file
			{
				myStream >> num_from_file;
				myQueue.insert(name_from_file, num_from_file);
			}

			myQueue.print();
			myQueue.clear();
			
			if (!myStream.eof()) //<---- if the flag is not the eof
			{
				cout << "\nThe data failed to read at line " << myString.length() << ". ";
				cout << "Could be invalid data. \nCheck the data and try running the program again\n\n";
				system("PAUSE");
				exit (-1);
			}
		}	

		
		// see if user wants to read in another text file
		cout << "\n\nWould you like to try another text file? (y or n): ";
		cin >> yesNo;
		if ((yesNo != NO)&&(yesNo != YES))
		{//check for correct input
			do
			{//keep asking for valid input until valid input is entered
				cout << "\nYou entered a wrong character.  Please enter 'y' for yes, or 'n' for no: ";
				cin >> yesNo;
			}while((yesNo != NO)&&(yesNo != YES));
		}
	}while(yesNo == YES);

	return 0;
}

// clear funciton
// resets the variables if the user wants to try more than one file
void clear()
{
	system("cls");
	filename = "";
	myStream.close();
	name_from_file = "";
	myString = "";
	yesNo = "";
}