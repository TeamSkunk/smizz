#ifndef _CREATEPLAYER_H_
#define _CREATEPLAYER_H_
#include <string>
struct Time 
	{
		int hours;
		int minutes;
		int day;
	};
class player
{
public:
	Time clock;
	std::string name;
	int charisma;
	int techskill;
	int knowledge;
	int hunger;
	int energy;
	int hygiene;
	int social;
	int bladder;
	void UpdateTime(player _Player);
	void PrintTime(player _Player);
private:
};
#endif