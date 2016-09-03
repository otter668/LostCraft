#pragma once
#include "scenario.h"
class AdvScenario :
	public Scenario
{
public:
	AdvScenario(void);
	~AdvScenario(void);

	Role *rHero;			// 英雄对象
	Role *rMonster;			// 怪物对象

	void choice();
	bool challenge();
	void showInfo();
	void showInfo(string);
};

