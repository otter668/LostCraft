#pragma once

const string craftnames[NUM_CRAFTS]={"普通击打","寒冰掌","石破惊雷","赤火焰烧","月蚀镰刀","圣光冲击","天师灵助","天威庇佑"};
const int availables[NUM_CRAFTS]={1,1,5,10,20,30,35,45};
const int mps[NUM_CRAFTS] = {0,5,10,20,40,60,80,100};
const int atks[NUM_CRAFTS] = {10,12,15,18,20,22,25,30};
const int coolings[NUM_CRAFTS] = {0,1,3,3,4,4,5,5};

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

