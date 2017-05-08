#include <iostream>
#include <string>
#include "createPlayer.h"
using namespace std;

string midMsg(string& _state, player& p_obj)
{
	while (true)
	{
		string option2;
		if (_state == "BATHROOM")
		{
			cout << "Would you like to either;\n";
			cout << "1) Take a shower\n";
			cout << "2) Take a bath\n";
			cout << "3) Go to the toilet\n";
			cout << "4) Wash your hands\n";
			cout << "5) Return" << endl;
			cout << "Option: ";
		}

		else if (_state == "KITCHEN")
		{

		}

		while (cin >> option2)
		{
			if (option2 == "1")
			{
				if (_state == "BATHROOM")
				{
					cout << p_obj.name << " is having a shower, this may take a few minutes..." << endl;
					// some function for showering, increase time, decrease hygiene
					break;
				}
			}
			if (option2 == "5")
			{
				if (_state == "BATHROOM")
				{
					cout << "here";
					_state = "HOME";
					return _state;
				}
			}
		}
	}
}

void displayMsg(string _state, player _obj)
{
	while (true)
	{
		string option;
		if (_state == "HOME")
		{
			cout << "Welcome home " << _obj.name << ", what would you like to do...\n";
			cout << "1) Go to the bathroom\n";
			cout << "2) Go to the kitchen\n";
			cout << "3) Go to the living room\n";
			cout << "4) Go to bed\n";
			cout << "5) Go out" << endl;
			cout << "6) Go to work" << endl;
			cout << "Please enter your option: ";
		}

		else if (_state == "LIBRARY")
		{

		}

		else if (_state == "GYM")
		{

		}

		else if (_state == "BATHROOM")
		{
		}

		while (cin >> option)
		{

			if (option == "1")
			{
				if (_state == "HOME")
				{
					_state = "BATHROOM";
					midMsg(_state, _obj);
				}
			}
			break;

		}
	}
}