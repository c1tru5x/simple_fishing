#include <iostream>
#include <Windows.h>
#include <ctime>
#include "Screen.h"

#include "fishing.h"
#include "ResourceManager.h"

using namespace std;

int main(void)
{
    SetConsoleTitle("Simple_Fishing by c1tru5x");
	//Init

	ResourceManager resource_manager_;

	Screen screen(resource_manager_);

	screen.draw_fisher();

	Sleep(1000);

	screen.draw_fish();

	Sleep(1000);

	screen.draw_fisher_pull_out();

	Sleep(1000);

	//PlayerObjects p;
	//p.gameStart();
	return 0;
}