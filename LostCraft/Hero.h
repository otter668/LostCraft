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
	void choice();
	void attack(Monster&);
	void levelUp(int);
	void levelDown();
private:
	int iAttack;
	void settlement(int level);
};

