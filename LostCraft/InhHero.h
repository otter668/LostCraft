#pragma once
#include "role.h"
#include "Craftsmanship.h"
#include "InhMonster.h"
class InhHero :
	public Role
{
public:
	InhHero(void);
	~InhHero(void);

	int MP;
	Craftsmanship crafts[NUM_CRAFTS];

	void setName();
	int choice();
	void attack(int, InhMonster&);
	void levelUp(int);
	void levelDown();
private:
	void settlement(int level);
};

