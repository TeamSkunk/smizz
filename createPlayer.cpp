#include "createPlayer.h"
#include <iostream>
using namespace std;
void player::UpdateTime(player _Player)
{
	if (_Player.clock.minutes >= 60)
	{
		_Player.clock.minutes -= 60;
		_Player.clock.hours += 1;
	}
	if ((_Player.clock.hours >= 24) && (_Player.clock.minutes != 0))
	{
		_Player.clock.hours -= 23;
		_Player.clock.day += 1;
	}
	return;
}

void player::PrintTime(player _Player)
{
	cout << "the time is: " << _Player.clock.hours << ":" << _Player.clock.minutes;
	if (_Player.clock.minutes == 0)
	{
		cout << "0\n";
	}
	else
	{
		cout << endl;
	}
}

