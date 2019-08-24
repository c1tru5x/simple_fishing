#pragma once
#include <cstdio>
#include  "ResourceManager.h"

#define MAX_SCREEN_WIDTH 128

class Screen
{
	static void draw(FILE*);

	ResourceManager& resource_manager_;
	

public:
	Screen(ResourceManager&);
	void draw_fisher();
	void draw_fish();
	void draw_fisher_pull_out();

};

