// LostCraft.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Scenario.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Scenario s;
	s.myHero.setName();
	s.state = true;
	while(s.state)
	{
		s.myMonster = s.choice();
		s.round = 0;
		s.state = s.challenge();
	}
	PC;
	return 0;
}

