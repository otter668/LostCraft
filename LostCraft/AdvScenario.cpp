#include "StdAfx.h"
#include "AdvScenario.h"


AdvScenario::AdvScenario(void)
{
	rHero = new Hero();
	rMonster = nullptr;
}


AdvScenario::~AdvScenario(void)
{
	delete rHero;
	delete rMonster;
}

void AdvScenario::choice()
{
	int optional;
	do
	{
		CLS;
		cout <<right << "请选择你要挑战的怪兽：" << endl;
		cout << setfill('-') << setw(30) << "" << endl;
		cout << "| 1:" << setfill(' ') << setw(26) << "巴尔坦虫怪【lv1】|" << endl;
		cout << "| 2:" << setw(26) << "格斯安鱼怪【lv5】|" << endl;
		cout << "| 3:" << setw(26) << "泰斯鸟怪【lv10】|" << endl;
		cout << "| 4:" << setw(26) << "绿头猿怪【lv30】|" << endl;
		cout << "| 5:" << setw(26) << "赤龙怪(BOSS)【lv50】|" << endl;
		cout << setfill('-') << setw(30) << "" << endl;
		cin >> optional;
	} while (optional<1 || optional>5);
	if (rMonster!=nullptr)
	{
		delete rMonster;
	}
	rMonster = new Monster(optional-1);
	return;
}

bool AdvScenario::challenge()
{
	while(true)
	{
		showInfo();
		((Hero *)rHero)->choice();
		rHero->attack(*rMonster);
		showInfo(rHero->name);
		if(rMonster->isAlive())
		{
			rMonster->attack(*rHero);
			showInfo(rMonster->name);
			if (!rHero->isAlive())
			{
				((Hero *)rHero)->levelDown();
				if (rHero->level<=0)
				{
					cout << endl << "======游戏失败！======" << endl;
					return false;
				}
				return true;
			}
			else
			{
				round++;
				for (int i=0;i!=NUM_CRAFTS;i++)
				{
					((Hero *)rHero)->crafts[i].action = ((Hero *)rHero)->crafts[i].action <= 0 ? 0 : ((Hero *)rHero)->crafts[i].action - 1;
				}
				PC;
				continue;
			}
		}
		else
		{
			if (rMonster->level == 50)
			{
				cout << endl << "======恭喜通关！======" << endl;
				return false;
			}
			((Hero *)rHero)->levelUp(rMonster->level);
			return true;
		}
	}
}

void AdvScenario::showInfo()
{
	cout << left << setfill('-') << setw(39) << "" << endl;				// 表格宽度共计40个半角字符
	cout << "|" << setfill(' ') << "第"  << setw(3) << round << "轮" <<setw(30) << "" << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;
	cout << "|" << setfill(' ') << setw(6) << "英雄：" << setw(12) << rHero->name << "|" << setw(6) << "怪兽：" << setw(12) << rMonster->name << "|" << endl;
	cout << "|" << setw(6) << "级别：" << setw(12) << rHero->level << "|" << setw(6) << "级别：" << setw(12) << rMonster->level << "|" << endl;
	cout << "|" << setw(6) << "HP：" << setw(12) << rHero->HP << "|" << setw(6) << "HP：" << setw(12) << rMonster->HP << "|" << endl;
	cout << "|" << setw(6) << "MP：" << setw(12) << ((Hero *)rHero)->MP << "|" << setw(18) << "" << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;
}

void AdvScenario::showInfo(string name)
{
	cout << left << setfill('-') << setw(39) << "" << endl;				// 表格宽度共计40个半角字符
	cout << "|" << setfill(' ') << setw(12) << name << "攻击！" << setw(19) << "" << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;
	cout << "|" << setfill(' ') << setw(6) << "英雄：" << setw(12) << rHero->name << "|" << setw(6) << "怪兽：" << setw(12) << rMonster->name << "|" << endl;
	cout << "|" << setw(6) << "级别：" << setw(12) << rHero->level << "|" << setw(6) << "级别：" << setw(12) << rMonster->level << "|" << endl;
	cout << "|" << setw(6) << "HP：" << setw(12) << rHero->HP << "|" << setw(6) << "HP：" << setw(12) << rMonster->HP << "|" << endl;
	cout << "|" << setw(6) << "MP：" << setw(12) << ((Hero *)rHero)->MP << "|" << setw(18) << "" << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;
}
