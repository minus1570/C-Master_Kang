#pragma once

class Monster
{
private:
	int X;
	int Y;

public:
	Monster();
	virtual ~Monster();

	void Move();
};

