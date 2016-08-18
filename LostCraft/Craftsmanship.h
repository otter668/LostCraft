#pragma once
class Craftsmanship
{
public:
	Craftsmanship(void);
	~Craftsmanship(void);

	string name;	// 名称
	int consumption;// 所消耗MP的值
	int ATK;		// 攻击力
	int cooling;	// 技能规定冷却时间
	int available;	// 技能所需英雄等级
	int action;		// 技能冷却回合
};

