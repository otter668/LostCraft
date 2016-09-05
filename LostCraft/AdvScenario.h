#pragma once
#include "scenario.h"
class AdvScenario :
	public Scenario
{
public:
	AdvScenario(void);
	~AdvScenario(void);

	Role *rHero;			// 英雄的对象指针
	Role *rMonster;			// 怪物的对象指针

	void choice();
	bool challenge();
	void showInfo();
	void showInfo(string);
};

