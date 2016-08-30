#pragma once
#include "Craftsmanship.h"
#include "Monster.h"
class Hero
{
public:
	Hero(void);
	~Hero(void);

	string name;						// 名称
	int level;							// 级别：初始值为1，为0则死亡失败
	int HP;								// 生命值：为0则本局失败
	int MP;								// 魔法值：为0则不能使用魔法攻击
	Craftsmanship crafts[NUM_CRAFTS];	// 技能列表

	void initHero();
	void choice();
	void attack(Monster&);
	bool isAlive();
	void levelUp(int);
	void levelDown();
private:
	int iAttack;
	void settlement(int level);
};

