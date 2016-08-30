#pragma once
#include "role.h"

class Hero;
class Monster :
	public Role
{
public:
	Monster(void);
	Monster(int);
	~Monster(void);

	int ATK;
	
	void attack(Hero&);
};

