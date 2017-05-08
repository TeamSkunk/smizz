#include <iostream>
#include <string>
#include <time.h>
#include "createPlayer.h"
#include "msgHandler.h"

using namespace std;

int generateStats(player _obj)
{
	int val1 = rand() % 10 + 1;
	return val1;
}

void gameLoop()
{
	player _Player;
	string state = "HOME";
	bool isPlaying = true;
	bool firstStart = true;
	srand(time(NULL));
	_Player.clock.hours = 1;
	while (isPlaying == true)
	{
		if (firstStart == true)
		{
			cout << "Please enter your desired character name: ";
			cin >> _Player.name;

			cout << "Your stat's are being randomly generated...\n";
			_Player.knowledge = generateStats(_Player);
			_Player.social = generateStats(_Player);
			cin.get();
			cout << " Character Name: " << _Player.name << endl;
			cout << "Knowledge Level: " << _Player.knowledge << endl;
			cout << "   Social Level: " << _Player.social << endl;
			//sleep here
			firstStart = false;
		}
		system("CLS");
		cout << "STATE: @" << state << endl;
		displayMsg(state ,_Player);
	}
	return;
}