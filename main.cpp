#include <iostream>
#include <string>
#include "gameLoop.h"


using namespace std;

int main()
{
	string entry;
	cout << "1) Play Smizz | 2) View Credits | 3) Exit" << endl;
	while (cin >> entry)
	{
		if (entry == "1")
		{
			gameLoop();
		}
	}
	return 0;

}