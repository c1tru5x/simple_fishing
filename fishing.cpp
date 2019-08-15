#include <iostream>
#include <Windows.h>

#include "fishing.h"

using namespace std;

bool bFishIsThere = false;
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
		//Gamestart
        system("cls");
        createFisher();
        Sleep(200);
        system("cls");
        createFish();
        Sleep(200);
        system("cls");
        if (bFishIsThere && GetAsyncKeyState(VK_SPACE))
        {
            fishcounter++;
        }
	}
}

bool PlayerObjects::createFisher()
{
    bFishIsThere = false;

    cout << "        ___" << endl;
    cout << "       /   \\" << endl;
    cout << "      /     \\" << endl;
    cout << "  O  /       \\" << endl;
    cout << "  | /         \\" << endl;
    cout << "  |m           \\" << endl;
    cout << "  |             \\" << endl;
    cout << " / \\             |" << endl;
    cout << "                 o" << endl;
	cout << endl;
	cout << "\nCOLLECTED: " << fishcounter << endl;

	return true;
}

bool PlayerObjects::createFish()
{
    bFishIsThere = true;

    cout << "        ___" << endl;
    cout << "       /   \\" << endl;
    cout << "      /     \\" << endl;
    cout << "  O  /       \\" << endl;
    cout << "  | /         \\" << endl;
    cout << "  |m           \\" << endl;
    cout << "  |             \\" << endl;
    cout << " / \\             |" << endl;
    cout << "                _o" << endl;
	cout << "              ><_>" << endl;
	cout << endl;
	cout << "COLLECTED: " << fishcounter << endl;

	return true;
}