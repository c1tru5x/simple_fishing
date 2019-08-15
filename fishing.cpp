#include <iostream>
#include <Windows.h>

#include "fishing.h"

using namespace std;

PlayerObjects::PlayerObjects()
{
	cout << "++++++++++++++++++" << endl;
	cout << "+ simple_fishing +" << endl;
	cout << "++++++++++++++++++" << endl;
	cout << "\nAuthor: c1tru5x (@citrusgino)\n" << endl;

	cout << "Press any key to start the game!\nF1 to close." << endl;
	cin.get();
}

PlayerObjects::~PlayerObjects()
{

	cout << "Game has been closed!" << endl;
}

void PlayerObjects::gameStart()
{
	while (!GetAsyncKeyState(VK_F1))
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			fishcounter += 1;
			cout << "Catched: " << fishcounter << endl;
		}
		Sleep(1);
	}
}