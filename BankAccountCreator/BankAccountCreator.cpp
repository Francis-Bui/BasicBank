// BankAccountCreator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
using namespace std;

// Starting string list for main() user input
string usernamei, passwordi, passwordc;

int main()
{
	
	// Display Text
	cout << "Welcome to BetaBank Login v0.1" << endl;
	Sleep(1000);
	cout << "Please select a username: " << endl;
	cin >> usernamei;
	Sleep(1000);
	// Check For Existing Username by creating file.
	fstream file;
	file.open(usernamei, ios_base::out | ios_base::in);  // will not create file
	if (file.is_open())
	{
		cout << "Account already exists.";
		
	}
	else
	{
		file.clear();
		file.open(usernamei, ios_base::out);  // will create if necessary
		cout << "Ok " << usernamei << ", what would you like your password to be?" << endl;
		cin >> passwordi;
		Sleep(1000);
		cout << "Please confirm your password:" << endl;
		cin >> passwordc;
		if (passwordc != passwordi)
		{
			cout << "Your passwords do not match. 2 Attempts left." << endl;
			if (passwordc != passwordi)
			{
				cout << "Your passwords do not match. 1 Attempt left" << endl;
				if (passwordc != passwordi)
				{
					cout << "Your passwords do not match. Terminating program, delete account profile located in C:\Users\%USERPROFILE%\source\repos\Bank  until further development is completed" << endl;
				}
			}
		}
		else 
		{ }

	}

};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
