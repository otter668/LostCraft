#pragma once
#include "InhHero.h"
#include "InhMonster.h"
class Scenario
{
public:
	Scenario(void);
	~Scenario(void);

	InhHero myHero;			// 英雄对象
	InhMonster myMonster;	// 怪物对象
	bool state;				// GO（GameOver）标志
	int round;				// 当前回合

	void initScenario();
	InhMonster choice();
	bool challenge();
	void showInfo(int, InhHero, InhMonster);
	void showInfo(string, InhHero, InhMonster);
};

