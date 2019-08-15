#pragma once
#ifndef FISHING_H
#define FISHING_H

#include <iostream>

class PlayerObjects
{
	public:
	    PlayerObjects();
		~PlayerObjects();
		void gameStart();

	private:
		int fishcounter = 0;
};

#endif // !FISHING_H
