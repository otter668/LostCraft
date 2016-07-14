#pragma once
class Hero;
class Monster
{
public:
	Monster(void);
	~Monster(void);

	string name;	// 名称
	int level;		// 级别：初始值为1，为0则死亡失败
	int HP;			// 生命值：为0则本局失败
	int ATK;		// 攻击力

	void initMonster(int); 
	void attack(Hero&);
	bool isAlive();
};

