#include "StdAfx.h"
#include "Scenario.h"


Scenario::Scenario(void)
{
}


Scenario::~Scenario(void)
{
}

void Scenario::initScenario()
{
	cout << "==============================" << endl;
	cout << "====Õü¾ÈÊÀ½ç°É£¬ÉÙÄê£¡v2.0====" << endl;
	cout << "==============================" << endl;
	PC;
}

Monster Scenario::choice()
{
	int optional;
	do
	{
		CLS;
		cout << "ÇëÑ¡ÔñÄãÒªÌôÕ½µÄ¹ÖÊÞ£º" << endl;
		cout << setfill('-') << setw(30) << "" << endl;
		cout << "| 1:" << setfill(' ') << setw(26) << "°Í¶ûÌ¹³æ¹Ö¡¾lv1¡¿|" << endl;
		cout << "| 2:" << setw(26) << "¸ñË¹°²Óã¹Ö¡¾lv5¡¿|" << endl;
		cout << "| 3:" << setw(26) << "Ì©Ë¹Äñ¹Ö¡¾lv10¡¿|" << endl;
		cout << "| 4:" << setw(26) << "ÂÌÍ·Ô³¹Ö¡¾lv30¡¿|" << endl;
		cout << "| 5:" << setw(26) << "³àÁú¹Ö(BOSS)¡¾lv50¡¿|" << endl;
		cout << setfill('-') << setw(30) << "" << endl;
		cin >> optional;
	} while (optional<1 || optional>5);
	Monster mon(optional-1);
	//return --optional;
	return mon;
}

bool Scenario::challenge()
{
	while(true)
	{
		showInfo(round, myHero, myMonster);
		int index = myHero.choice();
		myHero.attack(index, myMonster);
		showInfo(myHero.name, myHero, myMonster);
		if(myMonster.isAlive())
		{
			myMonster.attack(myHero);
			showInfo(myMonster.name, myHero, myMonster);
			if (!myHero.isAlive())
			{
				myHero.levelDown();
				if (myHero.level<=0)
				{
					cout << endl << "======ÓÎÏ·Ê§°Ü£¡======" << endl;
					return false;
				}
				return true;
			}
			else
			{
				round++;
				for (int i=0;i!=NUM_CRAFTS;i++)
				{
					myHero.crafts[i].action = myHero.crafts[i].action <= 0 ? 0 : myHero.crafts[i].action - 1;
				}
				PC;
				continue;
			}
		}
		else
		{
			if (myMonster.level == 50)
			{
				cout << endl << "======¹§Ï²Í¨¹Ø£¡======" << endl;
				return false;
			}
			myHero.levelUp(myMonster.level);
			return true;
		}
	}
}

void Scenario::showInfo(int round, Hero myHero, Monster myMonster)
{
	cout << setfill('-') << setw(39) << "" << endl;
	cout << "|" << setfill(' ') << setw(34) << "µÚ" << round << "ÂÖ|" << endl;
	cout << "|" << setw(6) << "Ó¢ÐÛ£º" << setw(12) << myHero.name << "|" << setw(6) << "¹ÖÊÞ£º" << setw(12) << myMonster.name << "|" << endl;
	cout << "|" << setw(6) << "¼¶±ð£º" << setw(12) << myHero.level << "|" << setw(6) << "¼¶±ð£º" << setw(12) << myMonster.level << "|" << endl;
	cout << "|" << setw(6) << "HP£º" << setw(12) << myHero.HP << "|" << setw(6) << "HP£º" << setw(12) << myMonster.HP << "|" << endl;
	cout << "|" << setw(6) << "MP£º" << setw(12) << myHero.MP << "|" << setw(19) << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;
}

void Scenario::showInfo(string name, Hero myHero, Monster myMonster)
{
	cout << setfill('-') << setw(39) << "" << endl;
	cout << "|" << setfill(' ') << setw(31) << name << "¹¥»÷£¡|" << endl;
	cout << "|" << setw(6) << "Ó¢ÐÛ£º" << setw(12) << myHero.name << "|" << setw(6) << "¹ÖÊÞ£º" << setw(12) << myMonster.name << "|" << endl;
	cout << "|" << setw(6) << "¼¶±ð£º" << setw(12) << myHero.level << "|" << setw(6) << "¼¶±ð£º" << setw(12) << myMonster.level << "|" << endl;
	cout << "|" << setw(6) << "HP£º" << setw(12) << myHero.HP << "|" << setw(6) << "HP£º" << setw(12) << myMonster.HP << "|" << endl;
	cout << "|" << setw(6) << "MP£º" << setw(12) << myHero.MP << "|" << setw(19) << "|" << endl;
	cout << setfill('-') << setw(39) << "" << endl;
}
