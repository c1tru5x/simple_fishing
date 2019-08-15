#include <iostream>
#include <Windows.h>
#include <ctime>

#include "fishing.h"

using namespace std;

bool bFishIsThere = false;
PlayerObjects::PlayerObjects()
{
	cout << "++++++++++++++++++" << endl;
	cout << "+ simple_fishing +" << endl;
	cout << "++++++++++++++++++" << endl;
	cout << "\nAuthor: c1tru5x (@citrusgino)\n" << endl;

	cout << "Press enter to start the game!\nF1 to close." << endl;
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
        srand(time(NULL)); //new rand after every program start.
        int r = rand()%2;  //only 0's and 1's

		//Gamestart
        system("cls");
        if (r == 0)
        {
            createFisher();
        }
        else if (r == 1)
        {
            createFish();
            if (GetAsyncKeyState(VK_SPACE))
            {
                system("cls");
                fishcounter++;
                cout << "        ___" << endl;
                cout << "       /   \\" << endl;
                cout << "      /     _|" << endl;
                cout << "  O  /    ><_>" << endl;
                cout << "  | /         " << endl;
                cout << "  |m           " << endl;
                cout << "  |             " << endl;
                cout << " / \\             " << endl;
                cout << "                 " << endl;
                cout << endl;
                cout << "\nCOLLECTED: " << fishcounter << endl;
                Sleep(300);
            }
        }
        else
        {
            return;
        }
        Sleep(5);
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