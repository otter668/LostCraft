#pragma once
#include "Hero.h"
#include "Monster.h"
class Scenario
{
public:
	Scenario(void);
	~Scenario(void);

	Hero myHero;			// 英雄对象
	Monster myMonster;		// 怪物对象
	bool state;				// GO（GameOver）标志
	int round;				// 当前回合

	Monster choice();
	bool challenge();
	void showInfo();
	void showInfo(string);
};

