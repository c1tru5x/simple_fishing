#include "Screen.h"


Screen::Screen(ResourceManager& resource_manager): resource_manager_(resource_manager)
{
	resource_manager_.add_file("FisherStandingStill", "Resources/FisherStandingStill.txt");
	resource_manager_.add_file("FisherPullingOut", "Resources/FisherPullingOut.txt");
	resource_manager_.add_file("FisherWithFish", "Resources/FisherWithFish.txt");
}

void Screen::draw_fisher()
{
	draw(resource_manager_.get_file("FisherStandingStill"));
}

void Screen::draw_fish()
{
	draw(resource_manager_.get_file("FisherWithFish"));
}

void Screen::draw_fisher_pull_out()
{
	draw(resource_manager_.get_file("FisherPullingOut"));
}

void Screen::draw(FILE* file_ptr) 
{
	system("cls");
	char read_string[MAX_SCREEN_WIDTH];

	while (fgets(read_string, sizeof(read_string), file_ptr) != nullptr)
		printf("%s", read_string);
}
