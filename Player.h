#pragma once
#include "Map.h"


class Player
{
private:
	int HP;
	int X;
	int Y;

public:
	Player();
	virtual ~Player();

	void Move();
	
};