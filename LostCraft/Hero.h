#pragma once
#include "role.h"
#include "Craftsmanship.h"
class Monster;
class Hero :
	public Role
{
public:
	Hero(void);
	~Hero(void);

	int MP;
	Craftsmanship crafts[NUM_CRAFTS];

	void setName();
	int choice();
	void attack(int, Monster&);
	void levelUp(int);
	void levelDown();
private:
	void settlement(int level);
};

