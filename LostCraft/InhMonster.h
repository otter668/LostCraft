#pragma once
#include "role.h"
class InhHero;
class InhMonster :
	public Role
{
public:
	InhMonster(void);
	InhMonster(int);
	~InhMonster(void);

	int ATK;
	
	void attack(InhHero&);
};

