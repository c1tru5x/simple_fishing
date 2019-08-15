#include <iostream>
#include <Windows.h>
#include <ctime>

#include "fishing.h"

using namespace std;

bool bFishIsThere = false;
bool bPlayerAlive = true;

char restart;

PlayerObjects::PlayerObjects()
{
	cout << "++++++++++++++++++" << endl;
	cout << "+ Simple_Fishing +" << endl;
	cout << "++++++++++++++++++" << endl;
	cout << "\nAuthor: c1tru5x (@citrusgino)\n" << endl;

	cout << "Press enter to start the game!\nF1 to close." << endl;
	cin.get();
}

PlayerObjects::~PlayerObjects()
{
    cout << "You have collected [" << fishcounter << "] "<< "fishes!" << endl;
    if (fishcounter >= 0 && fishcounter < 5)
    {
        cout << "Oh Boi we gonna starve.." << endl;
    }
    else if (fishcounter >= 5 && fishcounter < 10)
    {
        cout << "Today we will survive!"<<endl;
    }
    else if (fishcounter >= 10 && fishcounter < 20)
    {
        cout << "You can invite your friends to join our meal!"<<endl;
    }
    else
    {
        cout << "SO MUCH FOOD!!!" << endl;
    }
	cout << "Game has been closed!" << endl;
}

void PlayerObjects::gameStart()
{
	while (!GetAsyncKeyState(VK_F1))
	{
        if (bPlayerAlive)
        {

        srand(time(NULL)); //new rand after every program start.
        int r = rand()%2;  //only 0's and 1's

		//Gamestart
        system("cls");
        if (r == 0)
        {
            createFisher();
            if (GetAsyncKeyState(VK_SPACE))
            {
                //Pressing space to early
                /*if (fishcounter - 10 >= 0)
                {
                    fishcounter -= 10;
                }
                else
                {
                    fishcounter = 0;
                }
                */
                bPlayerAlive = false;
                Beep(100, 200);
            }
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
                cout << "      /     ><_>" << endl;
                cout << " ( ) /      " << endl;
                cout << "  | /         " << endl;
                cout << "  |m           " << endl;
                cout << "  |   ~ ~ ~ ~ ~ ~ ~ ~" << endl;
                cout << " / \\~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
                cout << "######~ ~ ~ ~ ~ ~ ~ ~ " << endl;
                cout << "###### ~ ~ ~ ~ ~ ~ ~ ~" << endl;
                cout << "###### ~ ~ ~ ~ ~ ~ ~ ~" << endl;
                cout << endl;
                cout << "\nCOLLECTED: " << fishcounter << endl;
                Beep(300,200);
                Sleep(300);
            }
        }
        else
        {
            return;
        }
        Sleep(5);
        }
        else
        {
            cout << "Want to play again? (y/n)"<< endl;
            cin >> restart;
            if (restart == 'y')
            {
              bPlayerAlive = true;
              fishcounter = 0;
            }
            else if (restart == 'n')
            {
               return;
            }
            else
            {
                cout << "Want to play again? (y/n)" << endl;
            }
        }
	}
}

void PlayerObjects::createFisher()
{
    bFishIsThere = false;

    cout << "        ___" << endl;
    cout << "       /   \\" << endl;
    cout << "      /     \\" << endl;
    cout << " ( ) /       \\" << endl;
    cout << "  | /         \\" << endl;
    cout << "  |m           \\" << endl;
    cout << "  |   ~ ~ ~ ~ ~ \\~ ~" << endl;
    cout << " / \\~ ~ ~ ~ ~ ~ | ~ ~" << endl;
    cout << "######~ ~ ~ ~ ~ ~o~ ~" << endl;
    cout << "###### ~ ~ ~ ~ ~ ~ ~ ~" << endl;
    cout << "###### ~ ~ ~ ~ ~ ~ ~ ~" << endl;
	cout << endl;
	cout << "\nCOLLECTED: " << fishcounter << endl;
}

void PlayerObjects::createFish()
{
    bFishIsThere = true;

    cout << "        ___" << endl;
    cout << "       /   \\" << endl;
    cout << "      /     \\" << endl;
    cout << " ( ) /       \\" << endl;
    cout << "  | /         \\" << endl;
    cout << "  |m           \\" << endl;
    cout << "  |   ~ ~ ~ ~ ~ \\~ ~" << endl;
    cout << " / \\~ ~ ~ ~ ~ ~ | ~ ~" << endl;
    cout << "######~ ~ ~ ~ ~ _o~ ~" << endl;
	cout << "###### ~ ~ ~  ><_>  ~" << endl;
    cout << "###### ~ ~ ~ ~ ~ ~ ~ ~" << endl;
	cout << endl;
	cout << "COLLECTED: " << fishcounter << endl;
}