#pragma once
#include "role.h"
class Hero;
const string craftnames[NUM_CRAFTS]={"ÆÕÍ¨»÷´ò","º®±ùÕÆ","Ê¯ÆÆ¾ªÀ×","³à»ğÑæÉÕ","ÔÂÊ´Á­µ¶","Ê¥¹â³å»÷","ÌìÊ¦ÁéÖú","ÌìÍş±ÓÓÓ"};
const int availables[NUM_CRAFTS]={1,1,5,10,20,30,35,45};
const int mps[NUM_CRAFTS] = {0,5,10,20,40,60,80,100};
const int atks[NUM_CRAFTS] = {10,12,15,18,20,22,25,30};
const int coolings[NUM_CRAFTS] = {0,1,3,3,4,4,5,5};
class Monster :
	public Role
{
public:
	Monster(void);
	Monster(int);
	~Monster(void);

	int ATK;
	
	void attack(Hero&);
};

